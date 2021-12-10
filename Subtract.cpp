#include "Subtract.h"

double Subtract::calculate(double lVal, double rVal) const {
    return lVal - rVal;
}

std::string Subtract::getOperator() const {
    return "-";
}
