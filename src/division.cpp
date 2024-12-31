#include "operations.h"
#include <stdexcept>

double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is undefined.");
    }
    return a / b;
}
