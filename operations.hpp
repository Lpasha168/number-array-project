#pragmaonce
#include "data.h"

namespace ArrayOperations {
    NumberArray* createArray(int size);
    void deleteArray(NumberArray* arr);
    void filterArray(NumberArray* arr, bool (*predicate)(float));
    float reduceArray(const NumberArray* arr, float (*operation)(float, float), float initial);
}
