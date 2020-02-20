// Copyright 2020 <Diana Lukashuk>
#include <iostream>
#include <fstream>
#include <clocale>

#include "complex.h"
#include "Header_toch.h"
using namespace std;

int main() {
  Koord A, B;
  cout<< "Enter the coordinates of point A" <<endl;
  cin>> A.x >> A.y;
  cout << "Enter the coordinates of point B" << endl;
  cin >> B.x >> B.y;
  cout << "distance between them ";
  cout << R(A, B) << endl;
  system("pause");
  return 0;
}
