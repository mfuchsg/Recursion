#include<iostream>
using namespace std;

//#define factorial
//#define Power_2

int Factorial(int n)
{
	if (n == 0) return 1;
	if (n == 1)return 1;
	return n * Factorial(n - 1);

}
int Power_1(int base, int power)
{
	if (power == 0) return 1;
	if (power == 1) return base;
	return base * Power_1(base, power - 1);
}
int Fibonacci(int n)
{

		if (n == 1 || n == 0)
			return 1;
		else
			return Fibonacci(n - 1) + Fibonacci(n - 2)<a;
	

}

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef factorial
	int n;
	cout << "������� ��������� �����: "; cin >> n;
	if (n >= 0)
	{
		cout << Factorial(n);
	}
	else
	{
		cout << "����� ������ ���� ������ ����";
	}
#endif // factorial

#ifdef Power_2
	int base;
	int power;
	cout << "������� �����: "; cin >> base;
	cout << "������� ������� �����: "; cin >> power;
	cout << Power_1(base, power);
#endif // Powe_2
	int n;
	int a;
	cout << "�� ������ ����� �������: "; cin >> a;
	cout << Fibonacci() << " ";
}