#pragma once

#include <vector>
#include <iostream>

#include "operation.hpp"
#include "multiply.hpp"
#include "matrix.hpp"

class MatrixCalculator{
    private:
        Operation* operation_;
    public:
        MatrixCalculator();
        ~MatrixCalculator(){}

        void setOperation(Operation*);

        Matrix operate(const Matrix&, const Matrix&);

};