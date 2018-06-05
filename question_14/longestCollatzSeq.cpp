/*

Longest Collatz sequence
Problem 14 
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
Although it has not been proved yet (Collatz Problem), 
it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

*/

#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int collatzTermCount(int num);
int greatestTerm(vector <int> termList);

int main(){

	vector <int> termList;

	for(int i=0; i<=13; ++i){

		termList.push_back(collatzTermCount(i));
	}

	for(unsigned int i=1; i<=termList.size(); ++i){

		cout<<"Number: "<<i-1<<"   Term count: "<<termList[i-1]<<"\n";
	}
	return 0;
}

int collatzTermCount(int num){

	int termCount=1;

	while(num>1){

		if(num%2==0){

			num=num/2;

			termCount+=1;
		}

		else if(num%2!=0){

			num=3*num+1;

			termCount+=1;

		}
	}

	return termCount;

}

int greatestTerm(vector <int> termList){

	int max=termList[0];

	for(unsigned int i=1; i<=termList.size(); ++i){

		if(termList[i]>=max){

			max=termList[i];
		}
	}

	return max;
}