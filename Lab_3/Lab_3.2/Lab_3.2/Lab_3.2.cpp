#include <iostream>
using namespace std;

void printArray(int* begin, int* end) {
	int sum = 0;
	for (int* p = begin; p < end; p++) {
		sum += *p;
	}
		cout << sum<< " ";
}

float def(float a, float b) {
	return a - b;
}

float summ(float a, float b) {
	return a + b;
}
char input() {
    char c;
	cout << "Введите + или -\n";
	cin >> c;
	return c;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	//1-2
	int array[] = { 2, 5, 6, 0, 2 };
	printArray(begin(array), end(array));

	
	//3-6
	float (*operation)(float, float);
	if (input() == '+') {
		operation = summ;
	}
	else {
		operation = def;
	}
	cout << operation(5, 7) << "\n";
}
