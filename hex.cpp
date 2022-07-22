#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int getNum(char hex[], int size);
int main() {
	const int size = 4;
	char hex1[size + 1];
	char hex2[size + 1];
	ifstream fin;
	fin.open("hex.data");
	double sum = 0;
	int num1 = 0;
	int num2 = 0;
	int counter = size;
	fin >> hex1;
	cout << hex1<<endl;
	fin >> hex2;
	cout << hex2<<endl;
	for (int i = 0; i < size; i++) {
			counter--;
			num1 = getNum(hex1, i);
			num2 = getNum(hex2, i);
			sum += num1 * pow(16, counter);	
			sum += num2 * pow(16, counter);

		}
	cout << "The sum of all valid hexadecimal numbers is " << sum << endl;
	fin.close();
	return 0;
}

int getNum(char hex[], int i) {
	int num = 0;
	if (hex[i] >= 'A' && hex[i] <= 'F') {
		num = hex[i] - 55;
	}
	else if (hex[i] >= 'a' && hex[i] <= 'f') {
		num = hex[i] - 87;
	}
	else if (hex[i] >= '0' && hex[i] < '9') {
		num = hex[i] - 48;
	}
	else {
	 cout<< "The sum of all valid hexadecimal number";
	}
	return num;
}



