#pragma once

#include <iostream>
#include <vector>

#include "multiplyStrategy.hpp"

class multiplyStrategyCols : public multiplyStrategy{
    public:
        multiplyStrategyCols(){}
        ~multiplyStrategyCols(){}
        Matrix multiply(const Matrix& A, const Matrix& B)const;
    private:
        Matrix transpose(const Matrix& originalMatrix)const;
};