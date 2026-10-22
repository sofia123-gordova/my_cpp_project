#include "arraylib.h"

#include <cassert>
#include <cmath>
#include <iostream>

int main() {
    int data[] = {-5, 0, 3, 3, 8, -2};
    const std::size_t n = sizeof(data) / sizeof(data[0]);

    double average = arr_average(data, n);

    assert(average >= arr_min(data, n));
    assert(average <= arr_max(data, n));

    assert(std::fabs(
        average * static_cast<double>(n) - arr_sum(data, n)
    ) < 1e-9);

    int count = arr_count_positive(data, n)
              + arr_count_negative(data, n)
              + arr_count_zero(data, n);

    assert(static_cast<std::size_t>(count) == n);

    double median = arr_median(data, n);

    assert(median >= arr_min(data, n));
    assert(median <= arr_max(data, n));
    assert(arr_sum(data, n) == 7);

    std::cout << "Integration tests passed\n";

    return 0;
}