#include<iostream>
#include<math.h>
using namespace std;
bool is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}


void main() {
	system("chcp 65001");
	system("cls");
	cout << "Нахождение Дискриминанта" << endl;
	while (true)
	{
int a = 0;
	int b = 0;
	int c = 0;

	string a_str = "";
	string b_str = "";
	string c_str = "";
	
	cout << "Введите переменные: a, b, с" << endl;
	cin >> a_str >> b_str >> c_str;

	if (!is_number(a_str)) {
		cout << "Ошибка" << endl;
		cin;
		return;
	}
	if (!is_number(b_str)) {
		cout << "Ошибка" << endl;
		cin;
		return;
	}

	if (!is_number(c_str)) {
		cout << "Ошибка" << endl;
		cin;
		return;
	}

	a = atol(a_str.c_str());
	b = atol(b_str.c_str());
	c = atol(c_str.c_str());
	cout << "Ваши данные:\na = " << a << "\nb = " << b << "\nc = " << c << endl;

	float result = pow(b, 2) - 4 * a * c;
	if (result <= 0) {
		cout << "Нет вещественных корней." << endl;
		cin;
	}

	else {
	float d = sqrt(result);
	cout << "\nD = " << d << endl;
	}

	}
	
 }
