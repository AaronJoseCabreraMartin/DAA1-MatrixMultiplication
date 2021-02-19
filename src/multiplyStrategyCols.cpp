#include "../include/multiplyStrategyCols.hpp"

Matrix multiplyStrategyCols::multiply(const Matrix& A, const Matrix& B)const{
    Matrix result;
    if (A.size() == 0 || B.size() == 0 || A[0].size() == 0 || B[0].size() == 0){
        std::cout << "Alguna de las matrices está vacía" << std::endl;
        return result;
    }
    Matrix Btransposed = transpose(B);
    // NxM MxO = NxO
    if (  A[0].size() == Btransposed.size()){
        result.resize(A.size());
        for (size_t i = 0; i < result.size(); i++){
            result[i].resize(Btransposed[0].size());
            for (size_t j = 0; j < result.size(); j++){
                result[i][j] = 0;
                for (size_t k = 0; k < Btransposed.size(); k++){
                    result[i][j] += A[i][k]*Btransposed[k][j];
                }
            }
        }
    }else{
        std::cout << "Matrices incompatibles" << std::endl;
    }
    return result;
}

Matrix multiplyStrategyCols::transpose(const Matrix& originalMatrix)const{
    Matrix result;
    result.resize(originalMatrix[0].size());
    for (size_t i = 0; i < originalMatrix[0].size(); i++){
        result[i].resize(originalMatrix.size());
    }
    for (size_t i = 0; i < originalMatrix.size(); i++){
        for (size_t j = 0; j < originalMatrix[i].size(); j++){
            result[j][i] = originalMatrix[i][j];
        }
    }
    return result;
}