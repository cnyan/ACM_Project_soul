#include<iostream>
#include<string>
using namespace std;

int main() {
	int input_number;
	cin >> input_number;
	string input_string ;

	for (int i = 0; i < input_number; i++) {
		cin >> input_string;

		if (input_string.length() % 2 != 0) {
			cout << "No" << endl;
			continue;
		}
		for (int j = 0; j < input_string.length(); j++) {
			//cout << input_string[j]<<endl;

		}
	}

	system("pause");

}