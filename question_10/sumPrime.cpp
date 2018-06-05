/*

Summation of primes
Problem 10 
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/

#include <iostream>
#include <cmath>

using std::cout;

bool isPrime(int num);

int main(){

	long int sumPrime=0;

	for(int i=0; i<2000000; ++i){

		if(isPrime(i)){

			sumPrime+=i;
		}
	}

	cout<<sumPrime<<"\n";

	return 0;
}

bool isPrime(int num){

	bool prime=true;

	if(num<2){

		prime=false;
	}

	else{

		for(int i=2; i<sqrt(num+1); ++i){

			if(num%i==0){

				prime=false;

				break;

			}

			else{

				prime=true;
			}

		}
	}

	return prime;
}
