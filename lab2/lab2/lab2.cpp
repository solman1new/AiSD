#include <iostream>
#include <string>

using namespace std;

int main() {

	const double price = 1.25; 
	const int length = 10;
	double sum = 0;

	string str;
	do {

		cout << ": ";
		getline(cin, str);

		if (str.length() > length) {
			sum += (str.length() * price) * 2;
			//cout << (str.length() * price) * 2 << "rub" << endl;
		}
		else
		{
			sum += str.length() * price;
			//cout << str.length() * price << "rub" << endl;
		}

	} while (str != ".");

	sum -= 1.25;


	cout << "Total: " << sum << endl;
	

	system("pause");
	return 0;
}