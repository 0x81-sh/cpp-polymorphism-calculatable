#pragma once

#include <iosfwd>
#include "ICalculatable.h"

class Subtract : public ICalculatable {
    public:
        double calculate(double lVal, double rVal) const override;
        std::string getOperator() const override;
};



