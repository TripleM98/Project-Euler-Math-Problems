/*

Highly divisible triangular number
Problem 12 
The sequence of triangle numbers is generated by adding the natural numbers. 
So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?

*/

#include <iostream>

using std::cout;

long int numOfFactors(long int num); 

int main(){

	long int triangle=0;
	int sum=0;
	long int numOfDivisors;

	while(numOfFactors(triangle)<=4){

		sum+=1;
		triangle+=sum;
		cout<<triangle<<"\n";
		if(numOfFactors(triangle)>=4){

			numOfDivisors=triangle;

			break;
		}
	}

	cout<<numOfDivisors<<"\n";

	return 0;
}

long int numOfFactors(long int num){

	long int factorCount=0;

	for(long int i=1; i<=num; ++i){

		if(num%i==0){

			factorCount+=1;
		}
	}

	return factorCount;
}