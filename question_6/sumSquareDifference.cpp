/*

Sum square difference
Problem 6 
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the 
squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers
and the square of the sum.

*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main(){

	int squareOfSum;
	int sumOfSquares=0;
	int sumOne=0;
	int difference;
	vector<int>numList;

	for(int i=1;i<=100;++i){

		numList.push_back(i*i);

		sumOne+=i;
	}

	squareOfSum=sumOne*sumOne;

	for(unsigned int i=0; i<numList.size(); ++i){

		sumOfSquares+=numList[i];
	}

	difference=sumOfSquares-squareOfSum;

	cout<<difference<<"\n";

	return 0;
}