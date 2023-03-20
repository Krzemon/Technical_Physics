#include <iostream>

//STRUCT//

struct Vector{
  int* point;
  int dim;
};

struct Matrix{
  int** point;
  int dim1;
  int dim2;
};

//FORM_FUNCTION//

Vector* form_Vector(int a=3){
  Vector* v = new Vector;
  int* t = new int[a];
  for(int i=0; i<a; i++)  {t[i]=0;}
  v->dim=a;
  v->point=t;
}

Matrix* form_Matrix(int a=3,int b=3){
  Matrix* m = new Matrix;
  int** t = new int*[a];
  for(int i=0; i<a; i++){
    t[i] = new int[b];
  }
  for(int i=0; i<a; i++){
    for(int j=0; j<a; j++){
      t[i][j]=0;
    }
  }
  m->dim1=a;
  m->dim2=b;
  m->point=t;
} 

//DELETE//

void delete_Vector(Vector* v){
  delete [] v->point;
  delete [] v;
}


void delete_Matrix(Matrix* m){
  for(int i=0; i<((*m).dim1); i++){
      delete [] (m->point)[i];
  }
  delete [] m;
}

//TEMPLATE//

template <class T>
void print(T a){
  std::cout<<a<<std::endl;
}

template<>
void print<Vector>(Vector v){
  std::cout<<"[";
  for(int i=0;i<v.dim; i++){
    std::cout<<v.point[i]<<", ";
  }
  std::cout<<"\b\b"<<"]"<<std::endl;
}

template<>
void print<Matrix>(Matrix m){
  for(int i=0;i<m.dim1; i++){
    std::cout<<"|";
    for(int j=0;j<m.dim2; j++){
      std::cout<<m.point[i][j]<<", ";
    }
    std::cout<<"\b\b"<<"|"<<std::endl;
  }
}


//MAIN//


int main(){

Vector *w1 = form_Vector();
Matrix *m1 = form_Matrix(5,14);


print("To jest napis - funkcja print działa. Działa też dla zmiennych typu bool:");
print(true or false);
print("\nTo jest wektor:");
print(*w1);
print("Adres tego wektora to:");
print(w1);

print("\nA to jest macierz:");
print(*m1);
print("Adres tej macierzy to:");
print(m1);


delete_Vector(w1);
delete_Matrix(m1);

}