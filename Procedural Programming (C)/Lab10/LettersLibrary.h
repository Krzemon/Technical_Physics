#ifndef LETTERS_LIBRARY
#define LETTERS_LIBRARY

#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include <ctype.h>

#define BUFOR_SIZE 100

// Forward declaration
int IsString(char m_tab[]);
int Included(char m_tab[], char m_char_of_interest);

// -----------------------------------------------------------------------------
// Set certain value to all elements / reset
void InitializeCounterTab1D(int LCounter[],unsigned int nLetters, int a) {
  for(int i=0 ; i<nLetters; i++){
    LCounter[i]=a;
  }
  printf("[INFO]:: InitializeCounterTab1D: for given size of %d and value %d\n", nLetters,a);
}

// -----------------------------------------------------------------------------
// Iterate over m_string characters and a given character is not included append it to the m_tab
// m_firstCall constitute whether it's the first (initial) call of this function
void AppendLettersTab1D(char m_tab[], const char* m_string, int m_firstCall){
  printf("[INFO]:: AppendLetters from given string %s\n",m_string);
  char current_char = *m_string++;
  int nCharacters = 0;
  // called the first time (might be empty, not initialized m_tab)
  if(m_firstCall==1){
    *m_tab='\0'; // set at the beginning the ascii code of end of string
  } else
    nCharacters = strlen(m_tab);
  //printf("[DEBUG]:: nCharacters %d \n",nCharacters);

  while (current_char){
    //printf("[DEBUG]:: Current char: %c\n",current_char);
    if(Included(m_tab,current_char)==-1){ // -1 is the code for not existing entry
      //printf("[DEBUG]:: Adding char: %c\n",current_char);
      *(m_tab+nCharacters)=tolower(current_char);
      *(m_tab+nCharacters+1) = 0; // put at the end the ascii code of '\0'
      nCharacters++;
    }
    current_char = *m_string++;
  }
  //printf("[DEBUG]:: Letters: %s\n",m_tab);
}

// -----------------------------------------------------------------------------
//
void CountLetters(char m_letters[], int m_counters[], const char* m_characters){
  printf("[INFO]:: CountLetters: for given string %s\n",m_characters);
  while (*m_characters){
    char current_character = tolower(*m_characters);
    int index = Included(m_letters,current_character);
    //printf("[DEBUG]:: index of %c is %d\n",*m_characters, index);
    if (index==-1){ // this is exception!
      puts("[WARNING]::CountLetters:: It seems that letters container was not initialized for given string to count:");
      printf("[INFO]:: Given string to count: %s\n", m_characters);
      printf("[INFO]:: Letters container: %s\n", m_letters);
      printf("[INFO]:: Letter to count: %c\n", current_character);
    }
    *(m_counters+index)+=1; // increment given character counter
    m_characters++;
  }
}

/*
void sort(char *Letters,int n) {
  char a,i=0;
  for(int j=0; j<n ; j++) {
    for(int i; i<n-1; i++) {
    if((int)*(Letters+i)>(int)*(Letters+1+i)) {
    a=*(Letters+i);
    *(Letters+i)=*(Letters+1+i);
    *(Letters+1+i)=a;
    }
    }
    ++i;
  }
}
*/


void PrintLettersCounter(char *Letters, int *LCounter){
  char *koniec=Letters;
  int n=0;
  while(*koniec!=0) {
    ++n;
    ++koniec;
  }
  //sort(Letters, n);
  for(int i=0; i<n ; i++) {
    printf("[INFO]:: '%c' :: %d\n",*(Letters+i), *(LCounter+i));
  }

}

// -----------------------------------------------------------------------------
// return index if found
int Included(char m_tab[], char m_char_of_interest){
  if(IsString(m_tab)){
    int index = 0;
    while(*m_tab){
      if (*m_tab++ == m_char_of_interest)
        return index;
      index++;
    }
    return -1; // code for not existing value
  }
  puts("[ERROR]::Included:: the char* m_tab is supposed to include end of string character!");
  exit(EXIT_FAILURE);
}

// -----------------------------------------------------------------------------
// simply try to find '\0' in a given table
// Note: m_tab have to be initialized!!!
int IsString(char m_tab[]){
  for (int i = 0; i < 999; ++i) { // this is enough to try;)
    if (*m_tab++ == '\0') // ASCII code of End of the Text
      return 1;
  }
  return 0;
}

#endif // LETTERS_LIBRARY