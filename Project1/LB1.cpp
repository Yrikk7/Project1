#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	float first, pos;
	int  second;//змінні для використання в комплексі

	//pos = 0;
	//cout << "Write first: ";
	//cin >> first; // початок проміжку
	//cout << "Write second: ";
	//cin >> second;// кінець проміжку



	Power one;// перше використання комплексу
	one = one.Init(4, 2);
	one.Display();
	float rez =one.power();
	cout << rez << endl;
	system("PAUSE");


}