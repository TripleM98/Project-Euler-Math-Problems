/*

Largest palindrome product
Problem 4 

A palindromic number reads the same both ways. 

The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::to_string;
using std::vector;

bool isPalindrome(int num);
int largestPalindromeProduct(int num);

int main(){


	cout<<largestPalindromeProduct(998001)<<"\n";

	return 0;
}

bool isPalindrome(int num){

	bool palindrome=false;
	string stringNum=to_string(num);
	string secondHalfReversed="";

	for(int i=stringNum.length()-1; i>=stringNum.length()/2; --i){

		secondHalfReversed+=stringNum[i];

	}


	for(int i=0; i<stringNum.length(); ++i){

		if(stringNum.length()%2==0){

			if(stringNum.substr(0, stringNum.length()/2)==secondHalfReversed){

				palindrome=true;

				break;
			}

		}
	}

	return palindrome;

}

int largestPalindromeProduct(int num){

	vector <int> palNumList;
	int greatestProduct;
	int palNum;
	int numOne;
	int numTwo;
	int finalAnswer=0;

	for(int i=num; i>=100000; --i){

		if(isPalindrome(i)==true){

			palNumList.push_back(i);

		}

	}

	for(int x=100; x<1000; ++x){

		for(int y=100; y<1000; ++y){

			numOne=x;
			numTwo=y;

			greatestProduct=numOne*numTwo;

			if(isPalindrome(greatestProduct)==true && greatestProduct>finalAnswer){

				finalAnswer=greatestProduct;
			}
		}
	}

	return finalAnswer;
}