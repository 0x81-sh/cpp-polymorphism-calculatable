#include "Multiply.h"

double Multiply::calculate(double lVal, double rVal) const {
    return lVal * rVal;
}

std::string Multiply::getOperator() const {
    return "*";
}
