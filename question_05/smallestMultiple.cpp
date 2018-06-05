/*

Smallest multiple
Problem 5 
2520 is the smallest number that can be divided 
by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <iostream>

using std::cout;

bool isDivisibleTo20(int num);
int smallestMultiple();

int main(){

	cout<<smallestMultiple()<<"\n";

	return 0;
}

bool isDivisibleTo20(int num){

	bool divisible=false;

	for(int i=1; i<=20; ++i){

		if(num%i==0){

			divisible=true;
		}

		else{

			divisible=false;

			break;
		}

	}

	return divisible;
}

int smallestMultiple(){

	int num=0;

	do{

		num+=1;

	}while(isDivisibleTo20(num)!=true);

	return num;
}