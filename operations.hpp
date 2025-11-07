#pragma once 
#include "data.hpp"

namespace ArrayOperations {
    NumberArray* createArray(int size);
    void deleteArray(NumberArray* arr);
    void applyOperation(NumberArray* arr, float (*operation)(float));
    float square(float x);
    float absolute(float x);
    void filterArray(NumberArray* arr, bool (*predicate)(float));
    float reduceArray(const NumberArray* arr, float (*operation)(float, float), float initial);
    bool isPositive(float x);
    bool isEven(float x);
    float add(float a, float b);
    float multiply(float a, float b);
