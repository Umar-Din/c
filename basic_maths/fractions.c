
#include<stdio.h>

/*
 
What is GCD?
Greatest Common Divisor -> The biggest number that divides both the numbers exactly.

Example: 15 and 20;

15 -> 1,3,5
20 -> 1,2,5

Both Numbers Can be Divided by 5 and this one is the biggest and common

*/

/*
What is LCM?
LCM is the least common multiple.
elevlaute LCM using prime factorization
elevlaute LCM using (a*b)/gdc(a,b)
*/
int gcd(int n, int d){
	if(d==0) return n;
	return gcd(d,n%d);
}

int main(){

	int numerator, denominator;

	printf("Enter the Numerator \n");
	scanf("%d",&numerator);
	printf("Enter the Denominator\n");
	scanf("%d",&denominator);

	int GreatestCommonDivisor = gcd(numerator,denominator);

	printf(
		"Greated Common Divisor is = %d\n", GreatestCommonDivisor
	);
	printf(
	"Simplified Fraction Becomes %d/%d \n",
       	numerator/GreatestCommonDivisor,
	denominator/GreatestCommonDivisor
	);

	int lcm = (numerator*denominator)/GreatestCommonDivisor;

	printf(
		"LCM of both numbers is = %d\n", lcm
	);
	/* LCM */

	return 0;
}

