#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "RUS");
	char c;

	printf("Введите цифру or букву: ");

	scanf("%c", &c);//считывание с консоли

	switch (c)

	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("Это цифра");
		break;
	case 'q':
	case 'w':
	case 'e':
	case 'r':
	case 't':
	case 'y':
	case 'u':
	case 'i':
	case 'o':
	case 'p':
	case 'a':
	case 's':
	case 'd':
	case 'f':
	case 'g':
	case 'h':
	case 'j':
	case 'k':
	case 'l':
	case 'z':
	case 'x':
	case 'c':
	case 'v':
	case 'b':
	case 'n':
	case 'm':
		printf("Это буква");
		break;
	default:

		printf("Неизвестный символ\n");

	}

	return 0;

}