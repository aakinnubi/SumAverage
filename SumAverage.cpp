// Average.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Sum(int one, int two, int three) {
	return one + two + three;
}
float Average(int one, int two, int three) {
	return Sum(one, two, three) / 3;
}
int main() {
	cout << "This program is used for finding the sum and average of three numbers" << endl;
	int one;
	int two;
	int three;
	cout << "Enter your first number" << endl;
	cin >> one;
	cout << "Enter your second number" << endl;
	cin >> two;
	cout << "Enter your third number" << endl;
	cin >> three;

	cout << "The sum of your numbers is : " << Sum(one, two, three) << endl;

	cout << "The average of your numbers is : " << Average(one, two, three) << endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
