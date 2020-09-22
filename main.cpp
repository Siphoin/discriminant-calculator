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
		cout << "Ваши данные:\na = " << a << "\nb = " << b << "\nc = " << c << endl;

		float result = pow(b, 2) - 4 * a * c;
		if (result <= 0) {
			cout << "Нет вещественных корней." << endl;
			cin;
		}

		else {
			float d = sqrt(result);
			float x1 = (b * -1 + d) / pow(a, 2);
			float x2 = (b * -1 - d) / pow(a, 2);
			cout << "\nD = " << d << endl;
			cout << "\nX1 = " << x1 << endl;
			cout << "\nX2 = " << x2 << endl;

		}
	}
}