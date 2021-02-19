#include "../include/matrixcalculator.hpp"

MatrixCalculator::MatrixCalculator(){
    operation_ = NULL;
}

MatrixCalculator::~MatrixCalculator(){
    if (operation_){
        delete operation_;
    }
    operation_ = NULL;
}


void MatrixCalculator::setOperation(Operation* operation){
    // si el puntero no es nulo
    if ( operation ){
        operation_ = operation;
    }else{
        throw emptyOperator();
    }
}

Matrix MatrixCalculator::operate(const Matrix& A, const Matrix& B){
    // si el puntero no es nulo
    if ( operation_ ){
        return operation_->apply(A,B);
    }
    throw noOperatorSelected();
}


