/*

Largest prime factor
Problem 3 
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include <iostream>
#include <cmath>
#include <vector>

using std::cout;
using std::vector;

bool isPrime(long int prime);
long int greatestFactor(long int number);

int main(){

	cout<<greatestFactor(600851475143)<<"\n";

	return 0;
}

bool isPrime(long int num){

	bool prime=true;

	if(num<=1){

		prime=false;
	}

	else if(num==2){

		prime=true;
	}

	else if(num>=100){

		for(long int i=2; i<sqrt(num); ++i){

			if(num%i==0){

				prime=false;

				break;
			}
		}
	}

	else if(num>2 || num<100){

		for(long int i=2; i<num; ++i){

			if(num%i==0){

				prime=false;

				break;
			}
		}
	}

	return prime;

}

long int greatestFactor(long int number){

	vector <int> divisiblePrimeNum;

	long int largestPrime;

	if(number>=100){

		for(int j=2; j<sqrt(number); ++j){

			if(isPrime(j)==true){

				divisiblePrimeNum.push_back(j);
			}
		}
	}

	else if(number>2 || number<100){

		for(int j=2; j<number; ++j){

			if(isPrime(j)==true){

				divisiblePrimeNum.push_back(j);
			}
		}
	}

	for(unsigned int i=divisiblePrimeNum.size()-1; i>0; --i){

		if(number%divisiblePrimeNum[i]==0){

			largestPrime=divisiblePrimeNum[i];

			break;
		}

	}

	return largestPrime;

}