#include "../include/multiplyStrategyRows.hpp"

Matrix multiplyStrategyRows::multiply(const Matrix& A, const Matrix& B)const{
    Matrix result;
    if (A.size() == 0 || B.size() == 0 || A[0].size() == 0 || B[0].size() == 0){
        std::cout << "Alguna de las matrices está vacía" << std::endl;
        return result;
    }

    // NxM MxO = NxO
    if (  A[0].size() == B.size()){
        result.resize(A.size());
        for (size_t i = 0; i < result.size(); i++){
            result[i].resize(B[0].size());
            for (size_t j = 0; j < result.size(); j++){
                result[i][j] = 0;
                for (size_t k = 0; k < B.size(); k++){
                    result[i][j] += A[i][k]*B[k][j];
                }
            }
        }
    }else{
        std::cout << "Matrices incompatibles" << std::endl;
    }
    return result;
}