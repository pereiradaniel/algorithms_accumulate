// Algorithms - Accumulate
// accumulate.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

// T accumulate(InputIterator f, InputIterator l, T init)
// accumulate the values in the range[f, l) to init and return the result.

// T accumulate(InputIterator f, InputIterator l, T init, Fn boper)
// accumulate the values in the range[f, l) to init using the binary operation boper
// and return the result.

// This program sums the elements in array a, displays the result,
// then sums twice their valuesand displays that result.

#include <iostream>
#include <numeric>

int main() {
    int a[] = { 3, 2, 4, 1 }, s;

    s = std::accumulate(a, &a[4], (int)0);
    std::cout << "sum = " << s << std::endl;
    s = std::accumulate(a, &a[4], (int)0,
        [](int x, int y) { return x + 2 * y; });
    std::cout << "2 * sum = " << s << std::endl;
}