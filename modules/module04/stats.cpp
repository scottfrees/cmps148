#include "stats.h"
#include <cmath>

double stdev(double sum, double sum_of_squares, int count) {
	double y = sum * sum / count;
	return sqrt((sum_of_squares - y) / (count - 1));
}



double mean(double sum, int count) {
	
	return sum / count;
}

