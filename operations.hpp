#pragma once
#include "data.h"

namespace ArrayOperations {
    NumberArray* createArray(int size);
    void deleteArray(NumberArray* arr);
    void applyOperation(NumberArray* arr, float (*operation)(float));
    float square(float x);      
    float absolute(float x);
}
