#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	float first, pos;
	int  second;//���� ��� ������������ � ��������

	//pos = 0;
	//cout << "Write first: ";
	//cin >> first; // ������� �������
	//cout << "Write second: ";
	//cin >> second;// ����� �������



	Power one;// ����� ������������ ���������
	one = one.Init(4, 2);
	one.Display();
	float rez =one.power();
	cout << rez << endl;
	system("PAUSE");


}