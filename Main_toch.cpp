#include <iostream>
#include <fstream>
#include <clocale>                                   
#include "complex.h"

#include "Header_toch.h"
using namespace std;

int main() {
  setlocale(LC_CTYPE, "Russian");
  Koord A, B;
  cout<< "������� ���������� ����� A" <<endl;
  cin>> A.x >> A.y ;
  cout << "������� ���������� ����� B" << endl;
  cin >> B.x >> B.y;
  cout << "��������� ����� ����� ������� ";
  cout << R(A, B)<<endl;
  system("pause");
  return 0;
}