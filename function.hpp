#include "function.h"

template <class number>
Function<number>::Function(const size_t degree, const Array<number>& derivatives)
    : Polynom<number>(degree) {
    for (size_t i = 0; i <= degree; ++i) {
        this->coefs[i] = derivatives[i] / factorial(i);
    }
}

template <class number>
size_t Function<number>::factorial(size_t n) const {
    size_t result = 1;
    for (size_t i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
