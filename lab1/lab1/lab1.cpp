#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <random>

using namespace std;


int NumIsLog3(int num) {

	// num >= 1 и дробная часть должна быть ровна нулю
	if (!(num < 1) && (num % 3 == 0 || num == 1)) {
		
		//3^0 = 1
		if (num == 1)
			return 0;

		int upper = 1;
		while (pow(3, upper) != num) {
			
			if (pow(3, upper) > num)
				return -1;

			upper++;
			
		}
		return upper;
	}

	return -1;
}

int main() {

	int* num = new int[] {0, 1, 10, 30, 27, 9, 15, 21, 24, 3};

	for (int i = 0; i < 10; i++) {
		int result = NumIsLog3(num[i]);
		if (result != -1)
			cout << num[i] << " = 3^" << result << endl;
		else cout << num[i] << " != 3^n" << endl;
	}

	system("pause");
	return 0;
}

