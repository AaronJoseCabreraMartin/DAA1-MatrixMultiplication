#pragma once

#include <iostream>
#include <vector>

#include "multiplyStrategy.hpp"

class multiplyStrategyRows : public multiplyStrategy{
    public:
        multiplyStrategyRows(){}
        ~multiplyStrategyRows(){}
        Matrix multiply(const Matrix& A, const Matrix& B)const;
};