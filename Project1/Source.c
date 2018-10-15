#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES
#include<math.h>

#define ZERO (double) (0.0)
#define ONE (double) (1.0)
#define TWO (double) (2.0)
#define FOUR (double) (4.0)
double sqrt_func(double x);


void main() {
	
	int i = 0, n = 0;
	double h = 0, sum = 0, sum_0 = 0.0 , c0=0.0;
	double x0 = 0.0;
	//scanf("%d", n);
	n = 1024;

	h = ONE / (double)n; // (a-b)/n
	c0 = h / TWO; 

	sum = c0 * sqrt_func(ZERO) + c0 * sqrt_func(ONE);
	x0  = ZERO;


	for (i = 1; i < n; i++) {
		x0 = ZERO + i * h;
		sum +=  (sqrt_func(x0) + sqrt_func(x0+h) ) *h /2 ;
	}

	printf("%30.20g", sum);

	//test
}


double sqrt_func(double x) {

	return sqrt(1 - x * x);
}	