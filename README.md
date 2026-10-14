# Домашнее задание к работе 7

## Условие задачи
Составить программу, которая для заданного числа от 1 до 12 выводит
его отображение римскими числами.

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Задать исходные данные:
   - `num` - целое число от 1 до 12   
4. Вывести результат проверки получившегося числа.
5. **Конец**

### Блок-схема

(https://github.com/Avebanger/Lab07/blob/master/Лаб_7.png)

## 2. Реализация программы
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	printf("Введите целое число от 1 до 12 для перевода в римскую цифру: ");
	scanf("%d",&num);
	switch (num)
	{
	case(1):
		printf("I");
		break;
	case(2):
		printf("II");
		break;
	case(3):
		printf("III");
		break;
	case(4):
		printf("IV");
		break;
	case(5):
		printf("V");
		break;
	case(6):
		printf("VI");
		break;
	case(7):
		printf("VII");
		break;
	case(8):
		printf("VIII");
		break;
	case(9):
		printf("IX");
		break;
	case(10):
		printf("X");
		break;
	case(11):
		printf("XI");
		break;
	case(12):
		printf("XII");
		break;
	}
}
```
## 3. Результаты работы программы



## 4. Информация о разработчике

Ляховский Сергей бИЦТ - 262
