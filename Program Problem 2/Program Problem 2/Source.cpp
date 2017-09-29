/*
Kaden Kobernat - 9-27-2017 Period 2
Program Problem 2: Take in Data
Ask the user questions and store data into varaiables and display all values
*/
//Libraries
#include <iostream> //gives access to cin, cout, endl, <<, >>
#include <conio.h> //gives access to _kbhit() and _getch for pause()
//Namespaces
using namespace std; //*
// Funstions ()
void pause() {
	cout << "Press any Key to contiue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//Main
void main() {
	//Define and assign variables
	int numbertvshows;
	char numberpopcornbags;
	bool answersmatched = false;
	float cakeportion;
	int calc_1, calc_2, calc_3, calc_4;
		//Display Text

	cout << "How many episodes on Netflix can you binge watch in a day? : ";
	cin >> numbertvshows;

	cout << "How many bags of popcorn do most people eat while watching a movie? (0/1/2/3/4/5): ";
	cin >> numberpopcornbags;

	cout << "How much of a cake is it ok to eat in one sitting? : ";
	cin >> cakeportion;

	if (numbertvshows > 40) {
		cout << numbertvshows << " is a lot of episodes, you should spend your time more productively" << endl;
	}
	if (numbertvshows < 41) {
		cout << numbertvshows << " episodes, sounds like fun." << endl;
	}
	if (numberpopcornbags != '1') {
		answersmatched = false;
	}
	if (numberpopcornbags == '1') {
		answersmatched = true;
	}
	if (answersmatched) {
		cout << boolalpha << "I think " << numberpopcornbags << " popcornbag is " << answersmatched << "." << endl;
	}
	if (!answersmatched) {
		cout << boolalpha << "I think " << numberpopcornbags << " popcornbags is " << answersmatched << "." << endl;
	}
	if (cakeportion > .4) {
		cout << cakeportion << " is a lot of cake." << endl;
	}
	if (cakeportion < .4) {
		cout << "I agree " << cakeportion << "is not too bad." << endl;
	}
	cout << "Give me three random whole numbers:" << endl;
	cout << "Number 1: " << endl;
	cin >> calc_1;
	cout << "Number 2: " << endl;
	cin >> calc_2;
	cout << "Number 3: " << endl;
	cin >> calc_3;
	cout << "Number 4: " << endl;
	cin >> calc_4;

	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_4 = calc_4 * calc_3;
	cout << calc_2 << " * " << calc_3 << calc_4 << endl;

	pause(); //pauses to see displayed text
}
