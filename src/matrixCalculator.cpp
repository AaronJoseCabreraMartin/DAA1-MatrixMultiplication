#include "../include/matrixcalculator.hpp"

MatrixCalculator::MatrixCalculator(){
    operation_ = NULL;
}

void MatrixCalculator::setOperation(Operation* operation){
    // si el puntero no es nulo
    if ( operation ){
        operation_ = operation;
    }
}

Matrix MatrixCalculator::operate(const Matrix& A, const Matrix& B){
    // si el puntero no es nulo
    if ( operation_ ){
        return operation_->apply(A,B);
    }
    std::cout << "Error, eliga operacion" << std::endl;
    return std::vector<std::vector<int>>();
}

