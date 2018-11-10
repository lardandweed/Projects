// print pi to nth decimal place
// using approximation pi = 22/7
#include <iostream>
using namespace std;

constexpr int baseDividend = 22;
constexpr int divisor = 7;
constexpr int decLimit = 100;

int main()
{
	int decPlaces = 0;
	int dividend = baseDividend;

	while (decPlaces <= 0 || decPlaces > decLimit) {			// check for valid user input
		cout << "Enter number of decimal places for pi (1-100):\n";
		cin >> decPlaces;
		if (decPlaces > 0 && decPlaces <= 100)
			break;
		cout << "Please enter number from 1-100. ";
	}

	for (int i = 0; i <= decPlaces; ++i) {						// prints pi to decPlaces decimal places
		cout << dividend / divisor;
		dividend = (dividend%divisor) * 10;
		if (i == 0)
			cout << ".";
	}
}
