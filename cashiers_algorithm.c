#include <stdio.h>

/* Cashier's Algorithm  */

#define QUARTER	25
#define DIME	10
#define NICKEL	5
#define PENNY	1

int cents = 25;

int main()
{
	int exchange[4] = {PENNY, NICKEL, DIME, QUARTER};

	int i=0;
	while (i<4 && cents>=exchange[i])
		++i;

	int j, number[4]={0,0,0,0}, b=cents;
	for (j=i-1; j>=0; --j)	// condition of for loop cannot be ==
	{
		number[j] = b / exchange[j];
		b = b % exchange[j];
	}
	
	printf("The cashier needs make changes with %d quarters, %d dimes, %d nickels and %d pennies.\n", number[3],
			number[2],number[1],number[0]);

	return 0;
}

	
