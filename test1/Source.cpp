#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;


 long double factorial(long int num) {
	if (num == 0)
		return 1;
	else return num * factorial(num - 1);
}

int main() {
	long int num = 1;

	while(num <= 1024)
		cout << "!" << num << " = " << factorial(num++) << endl;

	system("pause");
	return 0;
}

