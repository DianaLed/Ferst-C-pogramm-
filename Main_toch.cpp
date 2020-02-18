#include <iostream>
#include <fstream>
#include <clocale>                                   
#include "complex.h"

#include "Header_toch.h"
using namespace std;

int main() {
  setlocale(LC_CTYPE, "Russian");
  Koord A, B;
  cout<< "Введите координаты точки A" <<endl;
  cin>> A.x >> A.y ;
  cout << "Введите координаты точки B" << endl;
  cin >> B.x >> B.y;
  cout << "Растояние между двумя точками ";
  cout << R(A, B)<<endl;
  system("pause");
  return 0;
}