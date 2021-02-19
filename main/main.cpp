#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

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
    Matrix A = {{1,2,3},{4,5,6},{7,8,9}}; // 3x3
    Matrix B = {{1,5,9},{7,5,3},{0,1,0}}; // 3x3
    Matrix C = {{1},{0},{1}}; //columna 3x1
    Matrix D = {{3,1,4}}; //fila 1x3
   
    std::cout << "A" << std::endl;
    showMatrix(A);

    std::cout << std::endl << "B" << std::endl;
    showMatrix(B);

    std::cout << std::endl << "C" << std::endl;
    showMatrix(C);

    std::cout << std::endl << "D" << std::endl;
    showMatrix(D);

    MatrixCalculator myMatrixCalculator;

    try{
        myMatrixCalculator.setOperation(new Multiply(new multiplyStrategyCols));
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl << "***** Strategy Cols! *****" << std::endl;

    std::cout << std::endl << "AxB" << std::endl;
    try{
        showMatrix(myMatrixCalculator.operate(A,B));
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    
    std::cout << std::endl << "AxC" << std::endl;
    try{
        showMatrix(myMatrixCalculator.operate(A,C));
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl << "AxD" << std::endl;
    try{
        showMatrix(myMatrixCalculator.operate(A,D));
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    // Change the Strategy
    try{
        myMatrixCalculator.setOperation(new Multiply(new multiplyStrategyRows));
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl << "***** Strategy Rows! *****" << std::endl;

    std::cout << std::endl << "AxB" << std::endl;
    try{
        showMatrix(myMatrixCalculator.operate(A,B));
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    
    std::cout << std::endl << "AxC" << std::endl;
    try{
        showMatrix(myMatrixCalculator.operate(A,C));
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    

    std::cout << std::endl << "AxD" << std::endl;
    try{
        showMatrix(myMatrixCalculator.operate(A,D));
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    
    /*Matrix A,B;
    int contador = 0, tamanio = 1600;
    std::cin >> tamanio;
    A.resize(tamanio);
    B.resize(tamanio);
    srand(time(NULL));
    for (size_t i = 0; i < tamanio; i++){
        A[i].resize(tamanio);
        B[i].resize(tamanio);
        for (size_t j = 0; j < tamanio; j++){
            A[i][j] = rand()%90+10;
            B[i][j] = rand()%90+10;
        }
    }
    
    
    std::cout << std::endl << "AxB" << std::endl;
    time_t inicio = time(NULL);
    MatrixCalculator myMatrixCalculator;
    myMatrixCalculator.setOperation(new Multiply(new multiplyStrategyRows));
    myMatrixCalculator.operate(A,B);
    time_t fin = time(NULL);
    std::cout << "Listo en " << fin - inicio << " segundos" << std::endl;*/
    return 0;
}