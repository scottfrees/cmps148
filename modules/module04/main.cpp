#include <iostream>
#include "stats.h"
using namespace std;


int main() {
	int input;
	int sum = 0;
	int count = 0;
	int ss = 0;
	do {
		cout << "Enter a number (-1 to stop):  ";
		cin >> input;
		if (input != -1) {
			sum += input;
			ss += (input * input);
			count++;
		}
	} while (input != -1);
	cout << "Sum:    " << sum << endl;
	cout << "Mean:   " << mean(sum, count) << endl;
	cout << "STDEV:  " << stdev(sum, ss, count) << endl;


}
