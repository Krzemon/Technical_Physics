// -----------------------------------------------------------------------------
// Zadanie: zaimplementuj odpowiednie funkcje, według opisu ponizej w tresci main.

////////////////////////////////////////////////////////////////
// Main program

#include "PersonLibrary.h"

int main() {

	//__________________________________________________________________
	//UWAGA: PROSZE NIE DODAWAĆ KODU W FUNKCJI MAIN

	//___________________________________________
	// Statyczna alokacja pamięci
	char* Osoba[2] = {"Joaaannaa","Kowaaalskaa"};
	PersonLettersStatistic(Osoba); 

	//___________________________________________
	// Dynamiczna alokacja pamięci
	char** DOsoba; // array of char*

	// Zaimplementuj funkcję DInitializePerson(char*** m_person)
	// która będzie alokowała pamięć na tablicę do przechowywania char*,
	// czyli napisów. Po wykonaniu alokacji zainicjalizuj elementy tablicy jako NULL
  
	DInitializePerson(&DOsoba);
//
	//const char* name = "Joaaannaa";
	// Zaimplementuj funkcję DSetName(char** m_person, const char* m_name)
	// do alokacji odpowiedniej ilości pamięci do przechowania m_name.
	// Wykorzystaj funkcję strcpy do przekopiowania wartości łańcucha.
	// Funkcja DSetName powinna sprawdzać czy pamięć była wcześniej alokowana
	// (wartość wskaźnika != NULL), jeśli tak to powinna zostać wykorzystana funkcja realloc
	// Uwaga: name przechowywany jest jako 1 element w tablicy DOsoba
	DSetName(DOsoba,"Joanna");
	DSetName(DOsoba,"Joaaannaa");

	// Analogicznie do DSetName()
	// Uwaga: name przechowywany jest jako 1 element w tablicy DOsoba
	DSetSurname(DOsoba,"Kowaaalskaa");

	//___________________________________________
	// NOTE: In general if doesn't matter if we call below functions
	// for static or dynamic arrays! The old static strategy still works fine!
	PersonLettersStatistic(DOsoba);


	//___________________________________________
	// Zaimplementuj funkcję DDeletePerson(char*** m_person)
	// do zwalniania wcześniej zaalokowanej pamięci. 
	// Na koniec przypisz odpowiednio wartość wskaźnika na NULL,
	// zweryfikuj brak wycieków pamięci programem valgrind
	DDeletePerson(&DOsoba);

	return 0;
}