#include "../include/multiply.hpp"

Multiply::Multiply(multiplyStrategy* strategy){
    // si el puntero no esta a NULL
    if (strategy){
        strategy_ = strategy;
    }else{
        strategy_ = NULL;
        std::cout << "Error, eliga una estrategia" << std::endl;
    }
}

Multiply::~Multiply(){
    if (strategy_){
        delete strategy_;
    }
    strategy_ = NULL;
}

Matrix Multiply::apply(const Matrix& A, const Matrix& B){
    // si el puntero no esta a NULL
    if (strategy_){
        return strategy_->multiply(A,B);
    }else{
        std::cout << "Error, eliga una estrategia" << std::endl;
        Matrix result;
        return result;
    }
}