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

int main() {
    int intValue = 7;   // integer number; adjust as wanted
    float floatValue = 5.0f;    // floating-point number; adjust as wanted
    double doubleValue = 3.0;     // double type number; adjust as wanted

    cout << "Half of the int " << intValue << " is: " << half(intValue) << endl;    // cout half of int
    cout << "Half of the float " << floatValue << " is: " << half(floatValue) << endl;  // cout half of float
    cout << "Half of the double " << doubleValue << " is: " << half(doubleValue) << endl;   // cout half of double

    return 0;
}
