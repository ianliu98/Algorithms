#include <stdio.h>

/* Cashier's Algorithm --> P210 */

#define QUARTER 25
#define DIME    10
#define NICKEL  5
#define PENNY   1

int cents = 25;
int changes[4] = {QUARTER, DIME, NICKEL, PENNY};

int main()
{
	int i, d[4]={0,0,0,0};

	for (i=0; i<4; ++i)
	{
		while (cents >= changes[i]){
			++d[i];		// loop in one element of the array !!!
			cents = cents - changes[i];
		}
	}

	int j;
	printf("The changes are:Quarter	DIME	NICKEL	PENNY:\n" );
	printf("\t\t");
	for (j=0; j<4; ++j)
		printf("  %d\t",d[j]);
	printf("\n");

	return 0;
}
