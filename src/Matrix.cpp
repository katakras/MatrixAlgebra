
#include "../include/Matrix.h"

Matrix::Matrix(const Matrix& matrix)
{
  _n = matrix._n;
  _m = matrix._m;
  _array = new double*[_n];
  for(int i = 0; i < _n; ++i)
    _array[i] = new double[_m];
  for(int i = 0; i < _n; ++i)
  {
    for(int j = 0; j < _m; ++j)
      _array[i][j] = matrix._array[i][j];
  }
}

Matrix::Matrix(int n, int m) : _n(n), _m(m)
{
  _array = new double*[n];
  for(int i = 0; i < n; ++i)
    _array[i] = new double[m];
}

Matrix::~Matrix()
{
  for(int i = 0; i < _n; ++i)
    delete _array[i];
  delete _array;
}

Matrix::aVector::aVector(double* arr) : elements(arr)
{

}

double Matrix::aVector::operator[](int i)
{
  return elements[i];
}

Matrix::aVector Matrix::operator[](int i)
{
  return aVector(_array[i]);
}

