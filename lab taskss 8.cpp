#include <iostream>
using namespace std;
int main() {
    int num;
    long long factorial = 1; 

    cout << "Enter a non-negative integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else if (num == 0) {
        cout << "The factorial of 0 is 1." << endl;
    } else {
        for (int i=1; i <=num; ++i) {
            factorial *= i;
        }
        cout << "The factorial of" << num << "is" << factorial << endl;
    }

    return 0;
}