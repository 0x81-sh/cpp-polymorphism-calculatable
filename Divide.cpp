#include "Divide.h"

double Divide::calculate(double lVal, double rVal) const {
    return lVal / rVal;
}

std::string Divide::getOperator() const {
    return "/";
}
