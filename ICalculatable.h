#pragma once
#include <string>

class ICalculatable {
    public:
        virtual double calculate (double lVal, double rVal) const = 0;
        virtual std::string getOperator() const = 0;
};



