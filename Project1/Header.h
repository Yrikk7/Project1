#pragma once
struct Power // створення комплексу
{
	float real, impact;
	Power Init(float first, float second);// ініціалізація
	Power Read();// читання
	float power();
	void Display();// втведення
	

};