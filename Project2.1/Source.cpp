// Lab_02.cpp
// < �������� ��������� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 0.2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������ 
	double z2; // ��������� ���������� 2-�� ������

	cout << "x = "; cin >> a;

	z1 = (cos(a) + cos(2.0 * a) + cos(6.0 * a) + cos(7.0 * a));
	z2 = (4.0 * (cos(a / 2) * cos(5.0 / 2.0 * a) * cos(4.0 * a)));

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
