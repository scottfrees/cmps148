#include <iostream>
using namespace std;

int main() {
    double number;
    double sum  =0;
    do {
        cout << "Enter a number:  ";
        cin  >> number;
        if (number != -1) {
            sum += number;
        }
    } while (number != -1);
    cout << "Sum is " << sum << endl;
}