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
