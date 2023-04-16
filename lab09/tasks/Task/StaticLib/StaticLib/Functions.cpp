#include "Functions.h"
#include <iostream>
#include <string>
#include <bitset>

using namespace std;

void process_input() {

	while (true) {

		float x, y, z, s;

		string input_string;

		cin >> input_string;

		if (input_string == "s") {

			getNumbers(x, y, z);

			s = s_calculation(x, y, z);
		}
		else if (input_string == "f") {

			task1();

		}
		else if (input_string == "g") {

			task2();

		}
		else if (input_string == "h") {

			task3();

		}
		else if (input_string == "j" || input_string == "J") {

			cout << "Exiting program..." << endl;

			break;
		}



		else {

			cout << "Invalid input" << endl;

			cout << "\a";

			cout << "Awaiting input: ";

		}


	}
}

void task1() {

	float amount, discount, saved;

	cout << "Enter the amount: ";

	cin >> amount;

	if (amount < 100) {
		
		discount = 0.05f;

	}
	else if (amount < 200) {

		discount = 0.07f;

	}
	else if (amount < 300) {

		discount = 0.09f;

	}
	else if (amount < 400) {

		discount = 0.12f;

	}
	else if (amount < 500) {

		discount = 0.15f;

	}
	else if (amount < 1000) {

		discount = 0.2f;

	}
	else {

		discount = 0.25f;

	}

	saved = amount * discount;

	float total = amount - saved;

	cout << "The buyer pays: " << total << "\n" << "The buyer saved: " << saved << endl;

}

void task2() {

	int uasize;

	cout << "type in a size: ";

	cin >> uasize;

	switch (uasize) {

	case 44:
		cout << "French: 2\n" << "UK: 34\n" << "International: S";

		break;

	case 46:

		cout << "French: 3\n" << "UK: 36\n" << "International: M";

		break;

	case 48:

		cout << "French: 4\n" << "UK: 38\n" << "International: L";

		break;

	case 50:

		cout << "French: 5\n" << "UK: 40\n" << "International: XL";

		break;

	case 52:

		cout << "French: 6\n" << "UK: 42\n" << "International: XXL";

		break;

	case 54:

		cout << "French: 7\n" << "UK: 44\n" << "International: XXXL";

		break;

	default:

		cout << "Invalid size";

	}
}

void task3() {

	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;


	std::bitset<32> binary(num);


	int count = 0;
	if (binary[2]) {
		for (int i = 0; i < binary.size(); i++) {
			if (binary[i] == 0) {
				count++;
			}
		}
	}
	else {
		for (int i = 0; i < binary.size(); i++) {
			if (binary[i] == 1) {
				count++;

			}
		}
	}


	if (binary[2]) {
		std::cout << "Number of 0s in binary number: " << count << std::endl;
	}
	else {
		std::cout << "Number of 1s in binary number: " << count << std::endl;
	}

}

void getNumbers(float& x, float& y, float& z) {

	cout << "Enter the first number(x): ";

	cin >> x;

	cout << "Enter the second number(y): ";

	cin >> y;

	cout << "Enter the third number(z): ";

	cin >> z;


}

float s_calculation(float x, float y, float z) {

	float s = sin(x) / sqrt(abs(y * z / x + y)) + 3 * pow(y, 5);

	cout << "The sum of the three numbers is " << s << endl;

	return s;
}