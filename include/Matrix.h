
#ifndef _MATRIX_
#define _MATRIX_

class Matrix
{
private:
  class aVector
  {
  public:
    aVector(double*);
    double operator[](int);
  private:
    double* elements;
    double n;
  };
public:
  Matrix(int,int);
  Matrix(const Matrix&);
  ~Matrix();
  aVector operator[](int);
private:
  double** _array;
  int _n, _m;
};

#endif