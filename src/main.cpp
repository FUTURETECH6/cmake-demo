#include "sqrt.h"
#include <iostream>

int main() {
    using namespace std;
    int number;

    cout << "input an int:            ";
    cin >> number;
    cout << "babylonian result (int): " << sqrt_babylonian(number) << endl;
    cout << "cmath result (int):      " << sqrt_cmath(number) << endl;
}