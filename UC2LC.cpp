/*
This program reads a character input from the user and if the character is lower case, converts it to upper case, and vice versa. If the character is not a letter, it returns the message "<char> is not a letter." This program uses the ASCII value for the chracter to make the conversion.
*/
/*
Author: Brian Crow
Created on: 21MAY2019
Modified on: 21MAY2019
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	char userin;
	int num;
	char changecase;
	cout << "This program will take a single character input, and if it is a letter, it will change the case of\n";
	cout << "the letter. That is, it will convert upper case letters to lower case, and lower case letters to\n";
	cout << "upper case. It will only read the first character of whatever you type.\n";
	cout << "Type a letter here: ";
	cin >> userin;
	num = userin;
	if (num >= 0x41 && num <= 0x5A) {
		num += 0x20;
		changecase = num;
		cout << "The letter '" << changecase << "' is the lowercase letter for '" << userin << "'.\n";
	}
	else if (num >= 0x61 && num <= 0x7A) {
		num -= 0x20;
		changecase = num;
		cout << "The letter '" << changecase << "' is the uppercase letter for '" << userin << "'.\n";
	}
	else {
		cout << "The character '" << userin << "' is not a letter.\n";
	}
	return 0;
}
