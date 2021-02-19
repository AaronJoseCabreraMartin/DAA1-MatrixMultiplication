#pragma once
#include <vector>

#include "matrix.hpp"

class multiplyStrategy{
    public:
        virtual Matrix multiply(const Matrix& A, const Matrix& B)const=0;
};