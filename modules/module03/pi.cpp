#include <iostream>
using namespace std;

int main() {
    double sum = 0;
    unsigned int terms = 0;
    double N = 1;
    double S = 1;
    
    cout << "Enter number of terms (integer):  ";
    cin >> terms;
    
    for ( int i = 0; i < terms; i++ ) {
        //cout << N << " " << S << endl;
        sum += S/N;
        N += 2;
        S *= -1;
    }
    double pi = 4*sum;
    cout << "PI with "<< terms << " terms = " << pi << endl;
    
}