// ZADANIE (40 pkt)
// a) 
// Napisz program liczący pierwiastek kwadratowy metodą Newtona
// - opis algorytmu znajduje się poniżej
// - zaimplementuj odpowiednio dwie funkcje które realizują ten algorytm,
//   która będzie wykorzystywać pętle do-while, czyli:
//   SqRootNewton(float x)
// - Dodaj odpowiedni licznik, aby sprawdzić ile iteracji jest wykonywanych
// 
// b) zmodyfikuj program z pkt (a) tak aby wprowadzac argument dla funkcji
//    SqRootNewton(..) z poziomu cmd line.

//////////////////////////////////////////////////////////////////////
// METODA NEWTONA NA OBLICZANIE PIERWIASTKA KWADRATOWEGO            //
// 1. pierwiastek (x)                                               //
// 2. stała określająca dokładność: epsilon = 0.0001f               //
// 3. punkt począstkowy (połowa wartości) wynik = x / 2;            //
// 4. wykonujemy tyle iteracji, aby otrzymać rozsądne przybliżenie: //
//    powtarzaj: wynik = (wynik + x / wynik) / 2                    //
//    dopóki: dopóty (abs(x - wynik*wynik) < epsilon )              //
// 5. zwróc wynik                                                   //
// uwaga: funckja abs() zwraca wartość bezwględną przekazanego arg  //
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h> // aby mieć możliwość skorzystać z abs()
#include <math.h> // mozliwosc korzystania z fabs()
/////////////////////////////////////////////////////////////////
//
//float EPSILON = 0.00001f; // zmienna globalna do określenia dokładnosci obliczeń
float EPSILON = 0.00001f;
/////////////////////////////////////////////////////////////////
//
float SqRootNewton(float m_liczba);
int Licznik(float m_liczba);
/////////////////////////////////////////////////////////////////
// MAIN FUNCTION
int main()
{
    float x;
    printf("Podaj liczbe do pierwiastkowania: \n");
    scanf("%f", &x);
    puts("[INFO]:: Metoda SqRootNewton");
    printf("[INFO]:: Pierwiastek z %.3f to ", x);
    //Licznik(x);
    /*%0.5f\n",x, SqRootNewton(x));*/
    printf("\n[INFO]:: Liczba iteracji: %d \n", Licznik(x));

    return 0;
}

/////////////////////////////////////////////////////////////////
/*
float SqRootNewton(float m_liczba){
    float s;
    float wynik = m_liczba / 2;
    do
    {
      wynik=(wynik+(m_liczba/wynik))/2;
      s = 0;
      s = abs(m_liczba-(wynik*wynik));
    }while(s > EPSILON);

    return wynik;
}

int Licznik(float m_liczba){
    int licznik=0;
    float s;
    float wynik = m_liczba / 2;
    do
    {
      licznik++;
      wynik=(wynik+(m_liczba/wynik))/2;
      s = 0;
      s = abs(m_liczba-(wynik*wynik));
    }while(s > EPSILON);

    return licznik;
}*/
//Za jednym razem
int Licznik(float m_liczba){
    int licznik=0;
    float s;
    float wynik = m_liczba / 2;
    do
    {
      licznik++;
      wynik=(wynik+(m_liczba/wynik))/2;
      s = 0;
      s = abs(m_liczba-(wynik*wynik));
    }while(s > EPSILON);
    printf("%.5f", wynik);
    return licznik;
}