/*

Special Pythagorean triplet
Problem 9 
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <iostream>

using std::cout;

long int triplet(long int target);

int main(){

	cout<<triplet(1000)<<"\n";
	
	return 0;
}

long int triplet(long int target){

	long int a;
	long int b;
	long int c;
	long int product;

	for(a=1; a<c; ++a){

		for(b=2; b<c; ++b){

			c=1000-a-b;

			if(((a*a)+(b*b))==(c*c)){

				cout<<"a: "<<a<<"\n";
				cout<<"b: "<<b<<"\n";
				cout<<"c: "<<c<<"\n";
				
				product=a*b*c;

			}

		}

	}

	cout<<"Product of triplets: ";

	return product;

}