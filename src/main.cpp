#include <iostream>

#include "../include/Matrix.h"

void printMatrix(const Matrix&);

int main()
{
  Matrix matrix1(3,3);
  Matrix matrix2(3,3);
  matrix1[0][0] = 1;
  matrix1[1][1] = 1;
  matrix1[2][2] = 1;

  matrix2[1][1] = 3;
  matrix2[0][0] = 1.22;
  matrix2[2][1] = 1.5;
  matrix2[0][1] = 2;
  matrix2[1][2] = 1.3;

  Matrix matrix3(3,2);
  matrix3[0][0] = 1;
  matrix3[0][1] = 2;
  matrix3[1][0] = 2;
  matrix3[1][1] = 0;
  matrix3[2][0] = 3;
  matrix3[2][1] = 4;

  printMatrix(matrix1);
  std::cout << std::endl;
  printMatrix(matrix3);
  std::cout << std::endl;
  printMatrix(matrix3.transpose());

  std::cout << std::endl;
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