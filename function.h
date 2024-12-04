#ifndef FUNCTION_H
#define FUNCTION_H

#include "polynom.h"

template <class number>
class Function : protected Polynom<number> {
public:
    Function(const size_t degree, const Array<number>& derivatives);

    using Polynom<number>::operator();

private:
    size_t factorial(size_t n) const;
};

#include "function.hpp"

#endif // FUNCTION_H
