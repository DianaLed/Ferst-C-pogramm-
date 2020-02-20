// Copyright 2020 <Diana Lukashuk>
#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Koord {
 public:
  Koord();
  Koord(double _x, double _y);
  ~Koord();
  void output();
  double x;
  double y;
};

Koord::Koord() {
  x = 0.0;
  y = 0.0;
}

Koord::~Koord() {
  x = 0;
  y = 0;
}

Koord::Koord(double _x, double _y) {
  x = _x;
  y = _y;
}

double R(Koord a, Koord b) {
  double r;
  r = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
  return (r);
}

void Koord::output() {
  cout << "point coordinates" << x << " " << y;
  cout << endl;
}
