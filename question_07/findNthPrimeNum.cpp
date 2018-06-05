/*

10001st prime
Problem 7 
By listing the first six prime numbers:
 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?
*/

#include <iostream>
#include <cmath>

using std::cout;

bool isPrime(int num);
int findNextPrime(int num);

int main(){

	int term=1;
	int number=1;

	while(term<=10001){

		cout<<term<<".) "<<findNextPrime(number)<<"\n";

		number=findNextPrime(number);

		++term;
	}

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

int findNextPrime(int num){

	bool isNextPrime=false;

	while(!isNextPrime){

		++num;

		if(isPrime(num)){

			isNextPrime=true;
		}
	}

	return num;

}