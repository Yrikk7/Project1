#include"Header.h"
#include<iostream>

using namespace std;

Power Power::Init(float first, float second)
{
	Power tmp;
	tmp.real = first;
	tmp.impact = second;
	
	return tmp;
}

Power Power::Read()
{
	Power tmp;
	cout << "Input real: " << endl;
	cin >> tmp.real;
	cout << "Input impact:  " << endl;
	cin >> tmp.impact;
	return tmp;
}



void Power::Display()
{
	cout << "real " << real << endl;
	cout << "impact " << impact;
	cout << endl;

}
float Power::power()
{
	float tmp = pow(real, impact);
	
	return tmp;

}

