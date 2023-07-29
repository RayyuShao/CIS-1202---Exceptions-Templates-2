// Raymond Shao
// CIS 1202 800
// July 28, 2023

#include <iostream>
#include <type_traits>
using namespace std;

// Template function for floating-point types
template <typename T>
typename enable_if<is_floating_point<T>::value, T>::type half(T value) {
    return value / 2;
}

// Template function for integer types
template <typename T>
typename enable_if<is_integral<T>::value, T>::type half(T value) {
    return (value + (value % 2)) / 2;
}


