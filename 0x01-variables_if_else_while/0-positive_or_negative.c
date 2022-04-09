#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return:  Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
		printf("the number: %d is positive", n);
	}
	else if (n == 0){
		printf("the number: %d is zero", n);
	}
	else if (n < 0){
		printf("the number: %d is negative", n);
	}
	return (0);
}
