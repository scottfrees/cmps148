#include <iostream>
using namespace std;

int main() {
    int n;
    
    do {
        cout << "Please how many prime numbers you want (positive integer):  ";
        cin  >> n;
    } while (n <= 0);
    
    // n is the number of primes we need.  It feels like it we need a 
    // counting loop - but we don't actually know how many numbers we will 
    // need to test!  We just know we keep looking UNTIL we've found N primes!
    
    int count = 0; // This is the number of primes we've found so far
    int test = 1; // This will be the number we test to see if it's prime
    while (count < n) {
        // To test whether "test" is prime, we check it is possible to 
        // divide it by any integer between 2 and "test-1".  If not, then
        // it's prime.  This is a counting loop, we test a set sequence of
        // numbers.
        
        // We assume it's prime until proven otherwise...
        bool isPrime = true;
        for ( int divisor = 2; divisor < test-1; divisor++) {
            if (test % divisor == 0){
                // Nope, not prime!
                isPrime = false;
                break;  // Break out of the loop now
            }
        }
        if (isPrime) {
            cout << test << endl;
            count++;
        }
        // No matter what, we need to move to the next number
        // to test for primeness.
        test++;
    }
}