#ifndef ARRAY_H
#define ARRAY_H

#include <initializer_list>
#include <iostream>
#include <stdexcept>

template <class number>
class Array
{
private:
    size_t size;
    size_t capacity;
    number *array;

    void reallocate(size_t newCapacity);

public:
    Array();
    Array(size_t initialSize);
    Array(const std::initializer_list<number> &initList);
    Array(const Array &other);
    Array &operator=(const Array &other);
    ~Array();

    size_t getSize() const;
    void resize(size_t newSize);
    void add(number value);
    void remove();
    number average() const;
    number MSD() const;
    void fill(const std::string &input);
    void clear();

    number &operator[](size_t index);
    const number &operator[](size_t index) const;
};

#include "array.hpp"

#endif // ARRAY_H
