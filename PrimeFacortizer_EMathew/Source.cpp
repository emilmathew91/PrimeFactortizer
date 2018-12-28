#include <iostream>
using namespace std;

void primeFactors(int number); //function to calculate factors

int main() {
	int number = 0;//declare variables
	int factors = 0;
	int remainder = 0;
	int userInput = 0;
	cout << "Please enter a number: "; //asks user for number
	cin >> userInput; //stores number in userInput
	number = userInput; //moved userInput to a number so we can retain users input
	while (number < 2 ) { //checks if number is less than two
		cout << number << " is out of our field of consideration ([2, inf] : Z)" << endl; //prompt to reenter number
		cout << "Please enter a number: ";
		cin >> userInput;
		number = userInput;
	}
	for (int i = 2; i <= number; i++) {//i is what we divide the number by
		remainder = number % i; //remainder is number modulus of i, so we get 0 for a factor
		if (remainder == 0) { //checks for factors
			factors++; //increments factor count
		}
	}
	if (factors == 1) { //for number between 2 and user input, there should only be one factor if user input is prime. 
		cout << number << " is a PRIME number." << endl; //prints that user's number is prime. end program
	}
	else { 
		cout << number << " is a composite number." << endl; //else number is composite
		primeFactors(number); //calls function primeFactors, passes number (aka userInput) to primeFactors. 
	}
	
	return 0;
}

void primeFactors(int number) { 
	for (int i = 2; i <= number / i; i++) { //i less than the number increment i
		while (number%i == 0) { //while the number / i returns 0, if not goes down to the if statement
			number = number / i; //number is number / i
			cout << i << " has been found as a prime factor" << endl; //prints a factor then increments i and repeats for next number
		}
	}

	if (number > 1) { //if number is one doesn't print, only prints other factors. 
		cout << number << " has been found as a prime factor 2" << endl;
	}

}