// -----------------------------------------------------------------------------
// UWAGA: Nie wolno modyfikowac zawartosci funkcji main!
//
// Zadanie: Zaimplementuj odpowiednie funkcje,
//          tak aby program kompilowal sie a wynik jego dzialania
//          byl taki jak poniżej.
// Odpowiednie opisy, opisy znajdują się w bibliotekach PersonLibrary oraz LettersLibrary
///
// Zadanie (100 pkt):
// zaimplementuj funkcje określone przez TODO
//
// Zadanie ekstra (+ 15 pkt):
// zaimplementować drukowanie alfabetyczne statystyki liter
//
////////////////////////////////////////////////////////////////
// Main program

#include "PersonLibrary.h"
int main() {

	// UWAGA: PROSZE NIE MODYFIKOWAC WARTOSCI
	char* Osoba[2] = {"Joaaannaa","Kowaaalskkaa"};
	PrintPersonLettersStatistic(Osoba);
	return 0;
}
/*
[brachwal@PC-P121 solved]$ ./a.exe
 >> PERSON LETTERS STATISTIC <<
[INFO]::    Name: Joaaannaa
[INFO]:: Surname: Kowaaalskkaa
[INFO]:: InitializeCounterTab1D: for given size of 21 and value 0
[INFO]:: AppendLetters from given string Joaaannaa
[INFO]:: AppendLetters from given string Kowaaalskkaa
[INFO]:: CountLetters: for given string Joaaannaa
[INFO]:: CountLetters: for given string Kowaaalskkaa
[INFO]:: 'j' :: 1
[INFO]:: 'o' :: 2
[INFO]:: 'a' :: 10
[INFO]:: 'n' :: 2
[INFO]:: 'k' :: 3
[INFO]:: 'w' :: 1
[INFO]:: 'l' :: 1
*/