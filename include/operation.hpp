#pragma once

#include "matrix.hpp"

class Operation{
    public:
        Operation(){}
        ~Operation(){}
        virtual Matrix apply(const Matrix&, const Matrix&) = 0;
};
