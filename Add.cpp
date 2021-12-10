#include "Add.h"

double Add::calculate(double lVal, double rVal) const {
    return lVal + rVal;
}

std::string Add::getOperator() const {
    return "+";
}
