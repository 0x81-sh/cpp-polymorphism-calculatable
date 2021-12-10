#include <iostream>
#include <sstream>
#include <iomanip>
#include "ICalculatable.h"
#include "Divide.h"
#include "Multiply.h"
#include "Add.h"
#include "Subtract.h"
#include "Power.h"

void printOperations(const ICalculatable &calculation);

int main() {
    printOperations(Divide());
    printOperations(Multiply());
    printOperations(Add());
    printOperations(Subtract());
    printOperations(Power());

    return 0;
}

void printOperations(const ICalculatable &calculation) {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            std::stringstream ss;
            ss << i << " " << calculation.getOperator() << " " << j << " = " << calculation.calculate(i, j) << "  ";
            std::cout << std::setw(22) << ss.str();
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
