#pragma once

#include <exception>

class matrixcalculatorexception : public std::exception{};

class emptyMatrix : public matrixcalculatorexception{
    public:
        const char* what() const noexcept{return "Error, una de las matrices está vacía";}
};

class incompatibleMatrix : public matrixcalculatorexception{
    public:
        const char* what() const noexcept{return "Error, las matrices tienen dimensiones incompatibles";}
};

class emptyOperator : public matrixcalculatorexception{
    public:
        const char* what() const noexcept{return "Error, el operador no existe";}
};

class noOperatorSelected : public matrixcalculatorexception{
    public:
        const char* what() const noexcept{return "Error, el operador no ha sido elegido";}
};

class noMultiplyStrategySelected : public matrixcalculatorexception{
    public:
        const char* what() const noexcept{return "Error, la estrategia para la multiplicación no ha sido elegida";}
};