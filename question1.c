/* 
 Problem 1
 Multiples of 3 and 5
 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

 //geometric/arithmetic approach
 int SumDivisbleBy(n, target) {
 	int p = target/n;
 	return n*(p*(p+1))/2;
} 

int main() {
	int i = 0,
			sum1 = 0,
			sum2 = 0,	
			target = 1000;

	//Bruteforcing	
	for (int i = 0; i < target; ++i)
	{
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum1 += i;
		}
	}

	printf("The sum is: %d\n", sum1);

	sum2 = SumDivisbleBy(3, target -1) + SumDivisbleBy(5, target -1) - SumDivisbleBy(15, target -1);

	printf("The sum is: %d\n", sum2);
}


