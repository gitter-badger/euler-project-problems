#include <iostream>

using namespace std;

int main(void){

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

	cout << "Total sum of even fibonacci's = " << sumOfEvens << endl;
	cout << "Number of Iterations = " << numOfIterations << endl;
	cout << "Bye!" << endl;

	return 0;
}
