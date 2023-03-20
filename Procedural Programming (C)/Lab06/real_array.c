// Suma punktów 50
//
// I. Zadanie (10 pkt)
//    Zaimplementuj funkcję Average() która będzie zwracać wartość sredniej
//    arytmetycznej dla dwóch przekazanych argumentów
//  
// II. Zadanie (20 pkt)
//    Utwórz 20 elementowa tablice liczb float, wg naspępujacych kroków
//    1. deklaracja oraz inicjalizacja: dwa ostatnie elementy wynoszą odpowiednio
//      15.5 oraz 99.9, pozostałe elementy wynoszą 0; 
//    2. wydruk tablicy na ekran
//    3. zmień elementy równe 0 iterując się po tablicy od końca (dokładnie od 3 elemtnu od końca)
//       a nowa wartość bieżącego elementu to średnia jego dwóch następnych sąsiadów:
//       a[i] = ( a[i+1] + a[i+2] ) / 2
//    4. wydrukuj tablicę na ekran
//
// III. Zadanie (20 pkt)
//     Napisz funkcje, ktora porówna dwie liczby przekazane jako argumenty, oraz porównując
//     je ze sobą będzie zwracać większą wartość oraz zachowywać pomiędzy kolejnymi wywołaniami
//     największą dotychczas przekazaną wartość.  Dzieki temu można bedzie ją wykorzystać 
//     do szukania minimum z tablicy. Np. GetMaximum(a,b).
//     Wykorzystaj funkcję GetMaximum do znalezienia wartości maksymalnej tablicy z zadania II,
//     iterując się od końca tablicy!
//
//
//    UWAGA: wynik działania programu jest zapisany w pliku realarray.log
//    * Przekierowanie outputu do pliku, program tee
//    * Porównanie dwóch plików, program diff
//
/////////////////////////////////////////////////////////////////////////////////////
// Preprocesor
#include "PersonalHeader.h" // zwróć uwagę że nie ma innych #include !!! Dlaczego?

#define SIZE 20

/////////////////////////////////////////////////////////////////////////////////////
float GetMaximum(float a, float b) {
  float max = a>b ? a : b;
  return max;
}

/////////////////////////////////////////////////////////////////////////////////////
float Average(float x, float y) {
  return (x+y)/2;
}

/////////////////////////////////////////////////////////////////////////////////////
// Main program
int main() {
  float a,b;                                             //
  printf("Podaj liczby do sredniej (Po spacji): \n");    // zadanie 1
  scanf("%f %f", &a, &b);                                //
  printf("%.2f\n", Average(a,b));                        //
  
  int i=0;                                               //
  float array[SIZE]={[18]=15.5, [19]=99.9};              // 
  while (i<SIZE) {                                       // 
    printf("array[%d]=%.2f\n",i+1, array[i]); i++; }     //   
  puts("");                                              // zadanie 2  
  for(int j=17 ; j>=0 ; j--) {                           //
    array[j]=(array[j+1]+array[j+2])/2; }                //
  i=0;                                                   //
  while (i<SIZE) {                                       //
    printf("array[%d]=%.2f\n",i+1, array[i]); i++; }     //
  
  printf("max: %.3f\n", GetMaximum(a,b));

  float max = array[0];
  for(int k=1; k<SIZE ; k++) {
    if(array[k]>max)
      max = array[k]; }
  printf("Global maximum %6.2f\n", max);

  return 0;
}
