/*
*	Please try to do it yourself until deciding to look at this code.
*	I am very grateful of Project Euler members who drive all of this.
*	This is just my repo of those problems that I chose to solve.
*	Please don't just copy. Because that won't give you anything.
*	Try and do it yourself and find the joy behind.
*	I hope you understand everything in this file and in my code.
*	I will decide what should be commented and needn't.
*	
*	Thanks!
*	
*	Tweet:	@ironmusician
*	E-mail: ironmusician@gmail.com
*/
#include <iostream>

int main(void){
	
	using std::cout;
	using std::endl;

	long sumOfEvens = 0;
	long localSum = 0;
	int numOfIterations = 0;

	for (long last = 1, i = 2; ((last + i) < 4e6); numOfIterations++){
		
		localSum = last + i;
		cout << "Local Sum = " << localSum << " | " << "i = " << i << " | " << "last = " << last << endl;

		if (localSum % 2 == 0){
			sumOfEvens += localSum;
			cout << "Adding local sum! Total = " << sumOfEvens << endl << endl;
		}

		last = i;
		i = localSum;
	}
	
	sumOfEvens += 2; // Because it's even too :>

	cout << "Total sum of even fibonacci's = " << sumOfEvens << endl;
	cout << "Number of Iterations = " << numOfIterations << endl;
	cout << "Bye!" << endl;

	return 0;
}
