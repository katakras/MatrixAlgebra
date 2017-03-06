#include <iostream>

#ifndef _MATRIX_
#define _MATRIX_

class Matrix
{
private:
  class aVector
  {
  public:
    aVector(double*);
    double& operator[](int);
  private:
    double* elements;
    double n;
  };
public:
  Matrix(int,int);
  Matrix(const Matrix&);
  ~Matrix();
  std::pair<int, int> size() const;
  Matrix operator+(const Matrix&);
  aVector operator[](int) const;
  aVector operator[](int);
  void operator=(const Matrix&);
private:
  double** _array;
  int _n, _m;
};

#endif