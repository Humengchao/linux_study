#include <limits.h>
#include <stdio.h>
#include <float.h>

int main(){
    printf("the min value of int = %d\n", INT_MIN);
    printf("the max value of int = %d\n", INT_MAX);
    printf("the min value of float = %.10e\n", FLT_MIN);
    printf("the max value of float = %.10e\n", FLT_MAX);
    printf("the min value of double = %.10e\n", DBL_MIN);
    printf("the max value of double = %.10e\n", DBL_MAX);
	return 0;
}
