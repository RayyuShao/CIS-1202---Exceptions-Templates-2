// Raymond Shao
// CIS 1202 800
// July 28, 2023

#include <iostream>
#include <type_traits>

// Template function for floating-point types
template <typename T>
typename std::enable_if<std::is_floating_point<T>::value, T>::type half(T value) {
    return value / 2;
}

// Template function for integer types
template <typename T>
typename std::enable_if<std::is_integral<T>::value, T>::type half(T value) {
    return (value + (value % 2)) / 2;
}

int main() {
    int intValue = 7;
    float floatValue = 10.5;
    double doubleValue = 12.7;

    std::cout << "Half of " << intValue << " is: " << half(intValue) << std::endl;
    std::cout << "Half of " << floatValue << " is: " << half(floatValue) << std::endl;
    std::cout << "Half of " << doubleValue << " is: " << half(doubleValue) << std::endl;

    return 0;
}
