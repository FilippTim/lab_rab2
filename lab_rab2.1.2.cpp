#include <iostream>
#include <windows.h>
#include "func.h"
#define gg(x, y) ((x)+(y))
using namespace std;

/*/int func1(int parameter)
{
	static int x = 0;
	cout << (parameter+x) << endl;
	x = parameter;
	return (0);
}*/
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Первый запуск функции: ";
	func1(1);
	cout << "Второй запуск функции: " ;
	func1(11);
	cout << "Третий запуск функции: ";
	func1(26);
	cout <<endl<< "  Проанализировав полученный результат, я заметил, что текущий заданный параметр каждый раз\
увеличивается"<<endl<< "на  заданный в предыдущей функции параметр.Это происходит потому, что внутри\
функции имеется статическая переменная, " <<endl<<"которая сохраняет свое значение до конца выполнения программы."<< endl<<endl;
	
	cout << gg(6, 6)<<endl;
}
