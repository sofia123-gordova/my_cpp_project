#include "arraylib.h"

#include <cassert>
#include <cmath>
#include <iostream>

int main() {
    int a[] = {-5, 0, 3, 3, 8, -2};

    assert(arr_sum(a, 6) == 7);
    assert(arr_max(a, 6) == 8);
    assert(arr_min(a, 6) == -5);
    assert(arr_count_positive(a, 6) == 3);
    assert(arr_count_negative(a, 6) == 2);
    assert(arr_count_zero(a, 6) == 1);
    assert(arr_product(a, 6) == 0);
    assert(std::fabs(arr_average(a, 6) - 7.0 / 6.0) < 1e-9);

    int b[] = {7, 1, 9, 3};
    int original[] = {7, 1, 9, 3};

    assert(std::fabs(arr_median(b, 4) - 5.0) < 1e-9);

    for (std::size_t i = 0; i < 4; ++i) {
        assert(b[i] == original[i]);
    }

    int c[] = {5, 1, 3};
    assert(std::fabs(arr_median(c, 3) - 3.0) < 1e-9);

    int d[] = {1, 2, 3, 4};
    assert(arr_product(d, 4) == 24);

    int negative[] = {-8, -3};
    assert(arr_max(negative, 2) == -3);

    int one[] = {4};
    assert(arr_min(one, 1) == 4);
    assert(arr_median(one, 1) == 4.0);

    std::cout << "Unit tests passed\n";

    return 0;
}