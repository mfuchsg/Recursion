#include<iostream>
using namespace std;

//#define factorial
//#define Power_2
#define fibonachi

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
void Fibonacci(int n);


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef factorial
	int n;
	cout << "Введите факториал число: "; cin >> n;
	if (n >= 0)
	{
		cout << Factorial(n);
	}
	else
	{
		cout << "Число должно быть больше нуля";
	}
#endif // factorial

#ifdef Power_2
	int base;
	int power;
	cout << "Введите число: "; cin >> base;
	cout << "Введите степень числа: "; cin >> power;
	cout << Power_1(base, power);
#endif // Powe_2
#ifdef fibonachi
	int n;
	cout << "До какого числа вывести: "; cin >> n;
	Fibonacci(n);
#endif // fibonachi
	
}
void Fibonacci(int n)
{
	static int a = 0, b = 1, c = 1;
	if (a > n)return;
	cout << a << "\t";
	a ^= b ^= a ^= b = c = a+b;
	
	Fibonacci(n);
}