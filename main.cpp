#include<iostream>
#include<math.h>
using namespace std;

void main() {
	setlocale(LC_ALL, "RU");
	int a = 0;
	int b = 0;
	int c = 0;
	cout << " ���������� �������������" << endl;
	cout << " ������� ����������: a, b, �" << endl;
	cin >> a >> b >> c;
	float result = pow(b, 2) - 4 * a * c;
	if (result <= 0) {
		cout << "���������� ����� ����� �.� d <= 0" << endl;
		cin;
		return;
	}
	float d = sqrt(result);
	cout << "D = " << d << endl;
	cin;
 }
