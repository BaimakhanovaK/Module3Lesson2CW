#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<Windows.h>

void main() {

	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int n = 0;
start:
	printf("Введите номер задания: ");
	scanf("%d", &n);


	switch (n)
	{
	case 1:
	{
		printf("Ввести с клавиатуры два числа. Определить, что больше, разность квадратов или модуль квадрата разности этих чисел. Ответ вывести в виде сообщения \n");

		int a = 0, b = 0;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;

		printf("%d %d\n", a, b);

		if ((pow(a, 2) - pow(b, 2)) > log(pow(a, 2) - pow(b, 2)))
		{
			printf("Разность квадратов больше \n");
		}
		else
		{
			printf("Модуль квадрата разности больше \n");
		}
	}
	break;
	case 2:
	{
		printf("Ввести с клавиатуры географическую долготу и широту места и определить, в каком полушарии оно находится (в восточном или западном). \n");

		float d = 0, sh = 0;

		printf("Введите географическую долготу: ");
		scanf("%f", &d);

		printf("Введите географическую широту: ");
		scanf("%f", &sh);

		if (d >= -180 && d < 0 && sh>-90 && sh < 0)
		{
			printf("Западная долгота, северная широта \n");
		}
		else if (d > -180 && d < 0 && sh < 90 && sh>0)
		{
			printf("Западная долгота, южная широта \n");
		}
		else if (d < 180 && d>0 && sh > -90 && sh < 0)
		{
			printf("Восточная долгота, северная широта \n");
		}
		else
		{
			printf("Восточная долгота, южная широта \n");
		}
	}
	break;
	case 3:
	{
		printf("Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям предоставляется 20% скидка. Ввести продолжительность разговора и день недели (цифра от 1 до 7).\n");

		int den = 0;
		float prod = 0, tarif = 0, total = 0;
		tarif = 22.13;

		printf("Введите день недели (1-7): ");
		scanf("%d", &den);

		printf("Введите продолжительность разговора в минутах: ");
		scanf("%f", &prod);

		switch (den)
		{
		case 6:
		case 7:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("\t ИТОГО: %f\n", (tarif + prod));

			SetConsoleTextAttribute(hConsole, 12);
			total = (tarif*prod) - ((tarif*prod)*0.2);
			printf("\t *скидка в праздничные дни %f\n", 20);
			printf("\t ИТОГО со скидкой: %f KZT \n ", total);

			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		default:
		{
			SetConsoleTextAttribute(hConsole, 10);
			total = (tarif*prod);
			printf("\t ИТОГО: %f KZT\n", (tarif*prod));
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		}
	}
	case 4:
	{
		printf("Вычислить стоимость покупки с учетом скидки. Скидка 5% предоставляется, если сумма покупки превышает 500 тенге и 10%, если больше 1000 тенге.\n ");

		int total = 0, cost = 0;
		float k = 0.0;

		cost = 1 + rand() % 10000;
		total = cost - cost*k;

		if (cost > 500 && cost < 1000)
		{
			SetConsoleTextAttribute(hConsole, 10);
			k = 0.05;

			printf("сумма с учетом скидки 5 %% = %f\n", total);
			SetConsoleTextAttribute(hConsole, 15);
		}
		else if (cost > 1000)
		{
			k = 0.1;

			printf("Сумма с учетом скидки 10 %% =%f\n", total);
		}
		break;
	}
	case 5:
	{
		printf("Ввести с экрана число от 1 до 12. По номеру месяца выдать сообщение о времени года. Если пользователь введет недопустимое число, программа должна выдать сообщение об ошибке \n");

		int a = 0;
		printf("Введите месяц: ");
		scanf("%d", &a);

		switch (a)
		{
		case 12:
		case 1:
		case 2:
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("Зима \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		case 3:
		case 4:
		case 5:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("Весна \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 14);
			printf("Лето \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		case 9:
		case 10:
		case 11:
		{
			SetConsoleTextAttribute(hConsole, 12);
			printf("Осень \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		default:
		{
			SetConsoleTextAttribute(hConsole, 12);
			printf("Такого месяца не существует \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		}
	}
	case 6:
	{
		printf("Даны три числа a, b, c. Определить, имеется ли среди них хотя бы одна пара равных \n");

		int a = 0, b = 0, c = 0;
		printf("Введите число а: ");
		scanf("%d", &a);

		printf("Введите число b: ");
		scanf("%d", &b);

		printf("Введите число с: ");
		scanf("%d", &c);

		if (a == b || b == c || a == c)
		{
			printf("Имеется хотя бы одна пара равных чисел \n");
		}
		else
		{

		}
		break;
	}
	case 7:
	{
		printf("Написать программу для определения времени суток по данному текущему времени и вывести сообщение (утро – с 6 до 12, день – с 12 до 18, вечер – с 18 до 24, ночь – с 0 до 6 \n");

		int h = 0, m = 0;

		printf("Введите время в формате час:минуты = ");
		scanf("%d:%d", &h, &m);

		if (((h >= 6 && h <= 11)) && (m == 0 || m < 60))
		{
			printf("Утро \n");
		}
		else if ((h >= 12 && h < 18) && (m == 0 || m < 60))
		{
			printf("День \n");
		}
		else if ((h >= 18 && h < 24) && (m == 0 || m < 60))
		{
			printf("Вечер \n");
		}
		else if ((h >= 0 && h < 6) && (m == 0 || m < 60))
		{
			printf("Ночь \n");
		}
		else
		{
			printf("Задано некорректное время \n");
		}
	}
	break;
	case 8:
	{
		printf("Дано двухзначное число. Определить: a.входит ли в него цифра 5, b.входит ли в него цифра а \n");

		int a = 0, x = 0, y1 = 0, y2 = 0;

		printf("Введите двухзначное число: ");
		scanf("%d", &x);

		y1 = x / 10;
		y2 = x % 10;

		printf("Введите любое число от 1 до 9: ");
		scanf("%d", &a);

		if (y1 == 5 || y2 == 5)
		{
			printf("В ваше число входит цифра 5 \n");
		}
		else
		{
			printf("Цифра 5 не входит в данное число \n");
		}
		if (y1 == a || y2 == a)
		{
			printf("В данное число входит введенная вами цифра \n");
		}
		else
		{
			printf("В данное число не входит заданная вами цифра \n");
		}
	}
	break;
	case 9:
	{
		printf("Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово копейка в правильной форме. Например, 1 копейка, 5 копеек, 42 копейки \n");

		int a = 0, b = 0;

		a = 1 + rand() % 98;
		b = a % 10;
		printf("%d \n", a);

		switch (a)
		{
		case 11:
		case 12:
		case 13:
		case 14:
		{
			printf("%d копеек \n", a);
		}
		break;
		default:
		{
			switch (a % 10)
			{
			case 1:
			{
				printf("%d копейка \n", a);
			}
			break;

			case 2:
			case 3:
			case 4:
			{
				printf("%d копейки \n", a);
			}
			break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
			{
				printf("%d копеек \n", a);
			}
			}
		}
		}
	}
	break;
	case 10:
	{
		printf("Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом (читается одинаково слева направо и справа налево) \n");

		int a = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0;

		printf("Введите число от 1000 до 9999: ");
		scanf("%d", &a);

		x1 = a / 1000;
		x2 = (a / 100) - x1 * 10;
		x3 = (a / 10) - x1 * 110;
		x4 = a / 1 - x1 * 1110;

		if (x1 == x2 && x2 == x3 && x3 == x4)
			printf("Верно \n");
		else
			printf("Неверно \n");

	}
	break;
	goto start;
	}
}