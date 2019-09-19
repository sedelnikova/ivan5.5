// ivan5.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.

#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, c, d;
	float f, v;
	cout << "Введите трехзначное число" << endl;
	cin >> A;
	c = trunc(A / 100);
	f = A % 10;
	d = trunc(A / 10);
	v = d % 10;
	A = v * 100 + f * 10 + c;
	cout << "Число после перестановки-" << A;

	return 0;
} 
