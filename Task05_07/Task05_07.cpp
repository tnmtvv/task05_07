﻿// Task05_07.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int equal(int originnum, int anothernum ) {
	if (originnum == 0 && anothernum == 0) {
		return true;
	}
	else if (originnum == 0 && anothernum != 0 || originnum != 0 && anothernum == 0)
		return false;
	else {
		return equal(originnum / 10, anothernum - originnum % 10);
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, an;

	printf("Введите значение x\n");
	scanf_s("%d", &n);

	printf("Введите значение s\n");
	scanf_s("%d", &an);

	if (equal(n, an))
		printf("\ntrue");
	else printf("\nfalse");





}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
