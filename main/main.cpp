#include <iostream>
#include <vector>

#include "../include/matrixcalculator.hpp"

void showMatrix(const Matrix& matrix){
    for (size_t i = 0; i < matrix.size(); i++){
        for (size_t j = 0; j < matrix[i].size(); j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(void){
    Matrix A = {{1,2,3},{4,5,6},{7,8,9}};
    Matrix B = {{1,5,9},{7,5,3},{0,1,0}};
    Matrix C = {{1},{0},{1}};
   
    std::cout << "A" << std::endl;
    showMatrix(A);

    std::cout << std::endl << "B" << std::endl;
    showMatrix(B);

    std::cout << std::endl << "C" << std::endl;
    showMatrix(C);

    MatrixCalculator myMatrixCalculator;
    myMatrixCalculator.setOperation(new Multiply(new multiplyStrategyCols));

    std::cout << std::endl << "AxB" << std::endl;
    showMatrix(myMatrixCalculator.operate(A,B));
    
    std::cout << std::endl << "AxC" << std::endl;
    showMatrix(myMatrixCalculator.operate(A,C));
    
    return 0;
}