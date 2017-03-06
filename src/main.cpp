#include <iostream>

#include "../include/Matrix.h"

void printMatrix(const Matrix&);

int main()
{
  Matrix matrix1(3,3);
  Matrix matrix2(3,3);
  matrix1[1][1] = 2;
  matrix2[1][1] = 3;
  matrix2[0][0] = 1.22;
  printMatrix(matrix1);
  std::cout << std::endl;
  Matrix matrix3(0,0);
  matrix3 = matrix1 + matrix2;
  printMatrix(matrix3);
  std::cout << std::endl;
  printMatrix(matrix1);
  std::cout << std::endl;
  std::cout << matrix3._n << std::endl;
  std::cout << "aaaa" << std::endl;
  return 0;
}

void printMatrix(const Matrix& matrix)
{
  std::pair<int, int> sizes = matrix.size();
  for(int i = 0; i < sizes.first; ++i)
  {
    for(int j = 0; j < sizes.second; ++j)
      std::cout << matrix[i][j] << ' ';
    std::cout << std::endl;
  }
}