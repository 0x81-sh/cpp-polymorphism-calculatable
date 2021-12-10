#include "Power.h"


double Power::calculate(double lVal, double rVal) const {
    return pow(lVal, rVal);
}

std::string Power::getOperator() const {
    return "^";
}
