#ifndef PERSON_LIBRARY
#define PERSON_LIBRARY

#include "LettersLibrary.h"
#include <string.h>


// -----------------------------------------------------------------------------
// Return total number of letters in given person
unsigned int GetPersonNLetters(char* m_person[]){
  return strlen(m_person[0])+strlen(m_person[1]);
}

// -----------------------------------------------------------------------------
// Return name (of char* type) from given person
char* GetPersonName(char* m_person[]){
  return m_person[0];
}

// -----------------------------------------------------------------------------
// Return surname (of char* type) from given person
char* GetPersonSurname(char* m_person[]){
  return m_person[1];
}

// -----------------------------------------------------------------------------
//
void PrintPersonLettersStatistic(char* m_person[2]){
	puts(" >> PERSON LETTERS STATISTIC <<");
	printf("[INFO]::    Name: %s\n",GetPersonName(m_person)); 		// TODO: GetPersonName
	printf("[INFO]:: Surname: %s\n",GetPersonSurname(m_person));	// TODO: GetPersonSurname
	char Letters[BUFOR_SIZE];
	int LCounter[BUFOR_SIZE];
//size_t to jest unsigned int
	size_t nLetters = GetPersonNLetters(m_person); 					// TODO: GetPersonNLetters 
	InitializeCounterTab1D(LCounter,nLetters,0); 					// TODO: InitializeCounterTab1D
    AppendLettersTab1D(Letters,GetPersonName(m_person),1);			
	AppendLettersTab1D(Letters,GetPersonSurname(m_person),0);		

	CountLetters(Letters,LCounter,GetPersonName(m_person));
	CountLetters(Letters,LCounter,GetPersonSurname(m_person));

	PrintLettersCounter(Letters,LCounter);							// TODO: PrintLettersCounter
}

#endif // PERSON_LIBRARY