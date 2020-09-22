#include<iostream>
#include<math.h>
using namespace std;

void main() {
	system("chcp 65001");
	system("cls");
	cout << "Нахождение Дискриминанта" << endl;
	while (true)
	{
int a = 0;
	int b = 0;
	int c = 0;
	cout << "Введите переменные: a, b, с" << endl;
	cin >> a >> b >> c;
	float result = pow(b, 2) - 4 * a * c;
	if (result <= 0) {
		cout << "Нет вещественных корней." << endl;
		cin;
	}

	else {
	float d = sqrt(result);
	cout << "D = " << d << endl;
	}

	}
	
 }
