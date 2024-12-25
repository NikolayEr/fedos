#include "sdt.h"
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Sum: " << (a + b) << endl;
    std::cout << "Difference: " << a - b << std::endl;

    return 0;
}
