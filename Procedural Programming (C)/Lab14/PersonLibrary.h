#ifndef PERSON_LIBRARY
#define PERSON_LIBRARY

#include "LettersLibrary.h"
#include <string.h>
#include "stdlib.h"

// -----------------------------------------------------------------------------
//
int GetPersonNLetters(char* m_osoba[]){
	return strlen(m_osoba[0]) + strlen(m_osoba[1]);
}

// -----------------------------------------------------------------------------
//
char* GetPersonName(char* m_osoba[]){
	return m_osoba[0];
}

// -----------------------------------------------------------------------------
//
char* GetPersonSurname(char* m_osoba[]){
	return m_osoba[1];
}

// -----------------------------------------------------------------------------
//
void PersonLettersStatistic(char* m_osoba[]){

	char Letters[BUFOR_SIZE];
	int LCounter[BUFOR_SIZE];

	InitializeCounterTab1D(LCounter,GetPersonNLetters(m_osoba),0);

	// We have to initialize static array of char's with zeros!
	InitializeLettersTab1D(Letters,GetPersonNLetters(m_osoba));
    
    InputLettersTab1D(Letters,GetPersonName(m_osoba));
	InputLettersTab1D(Letters,GetPersonSurname(m_osoba));

	CountLetters(Letters,LCounter,GetPersonName(m_osoba));
	CountLetters(Letters,LCounter,GetPersonSurname(m_osoba));

	PrintLettersCounter(Letters,LCounter);
}

// /*---------------------------------------------------------------------------
void DInitializePerson(char*** m_person) { 
    *m_person = malloc(2 * sizeof(char *));
    (*m_person)[0]=NULL;
    (*m_person)[1]=NULL;
}

void DSetName(char** m_person, const char* m_name) {
  if(m_person[0]!=NULL) {
    m_person[0]=realloc(m_person[0], strlen(m_name)+1);
    strcpy(m_person[0], m_name);}
  else {
    m_person[0]=malloc(strlen(m_name)+1);
    strcpy(m_person[0], m_name);}
  }

void DSetSurname(char** m_person, const char* m_surname) {
  if(m_person[1]!=NULL) {
    m_person[1]=realloc(m_person[1], strlen(m_surname)+1);
    strcpy(m_person[1], m_surname);}
  else {
    m_person[1]=malloc(strlen(m_surname)+1);
    strcpy(m_person[1], m_surname);}
  }

void DDeletePerson(char*** m_person) {
  (*m_person)[0]=NULL;
  (*m_person)[1]=NULL;
  free(*m_person);
}

#endif // PERSON_LIBRARY