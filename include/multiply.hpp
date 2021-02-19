#pragma once

#include <iostream>
#include <vector>

#include "multiplyStrategy.hpp"
#include "multiplyStrategyRows.hpp"
#include "multiplyStrategyCols.hpp"

#include "operation.hpp"

class Multiply : public Operation{
    private:
        multiplyStrategy* strategy_;

    public:
        Multiply(multiplyStrategy* strategy);
        ~Multiply();
        Matrix apply(const Matrix&, const Matrix&);
};