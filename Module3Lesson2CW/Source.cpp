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
	printf("������� ����� �������: ");
	scanf("%d", &n);


	switch (n)
	{
	case 1:
	{
		printf("������ � ���������� ��� �����. ����������, ��� ������, �������� ��������� ��� ������ �������� �������� ���� �����. ����� ������� � ���� ��������� \n");

		int a = 0, b = 0;
		a = 1 + rand() % 1000;
		b = 1 + rand() % 1000;

		printf("%d %d\n", a, b);

		if ((pow(a, 2) - pow(b, 2)) > log(pow(a, 2) - pow(b, 2)))
		{
			printf("�������� ��������� ������ \n");
		}
		else
		{
			printf("������ �������� �������� ������ \n");
		}
	}
	break;
	case 2:
	{
		printf("������ � ���������� �������������� ������� � ������ ����� � ����������, � ����� ��������� ��� ��������� (� ��������� ��� ��������). \n");

		float d = 0, sh = 0;

		printf("������� �������������� �������: ");
		scanf("%f", &d);

		printf("������� �������������� ������: ");
		scanf("%f", &sh);

		if (d >= -180 && d < 0 && sh>-90 && sh < 0)
		{
			printf("�������� �������, �������� ������ \n");
		}
		else if (d > -180 && d < 0 && sh < 90 && sh>0)
		{
			printf("�������� �������, ����� ������ \n");
		}
		else if (d < 180 && d>0 && sh > -90 && sh < 0)
		{
			printf("��������� �������, �������� ������ \n");
		}
		else
		{
			printf("��������� �������, ����� ������ \n");
		}
	}
	break;
	case 3:
	{
		printf("�������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������ ��������������� 20% ������. ������ ����������������� ��������� � ���� ������ (����� �� 1 �� 7).\n");

		int den = 0;
		float prod = 0, tarif = 0, total = 0;
		tarif = 22.13;

		printf("������� ���� ������ (1-7): ");
		scanf("%d", &den);

		printf("������� ����������������� ��������� � �������: ");
		scanf("%f", &prod);

		switch (den)
		{
		case 6:
		case 7:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("\t �����: %f\n", (tarif + prod));

			SetConsoleTextAttribute(hConsole, 12);
			total = (tarif*prod) - ((tarif*prod)*0.2);
			printf("\t *������ � ����������� ��� %f\n", 20);
			printf("\t ����� �� �������: %f KZT \n ", total);

			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		default:
		{
			SetConsoleTextAttribute(hConsole, 10);
			total = (tarif*prod);
			printf("\t �����: %f KZT\n", (tarif*prod));
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		}
	}
	case 4:
	{
		printf("��������� ��������� ������� � ������ ������. ������ 5% ���������������, ���� ����� ������� ��������� 500 ����� � 10%, ���� ������ 1000 �����.\n ");

		int total = 0, cost = 0;
		float k = 0.0;

		cost = 1 + rand() % 10000;
		total = cost - cost*k;

		if (cost > 500 && cost < 1000)
		{
			SetConsoleTextAttribute(hConsole, 10);
			k = 0.05;

			printf("����� � ������ ������ 5 %% = %f\n", total);
			SetConsoleTextAttribute(hConsole, 15);
		}
		else if (cost > 1000)
		{
			k = 0.1;

			printf("����� � ������ ������ 10 %% =%f\n", total);
		}
		break;
	}
	case 5:
	{
		printf("������ � ������ ����� �� 1 �� 12. �� ������ ������ ������ ��������� � ������� ����. ���� ������������ ������ ������������ �����, ��������� ������ ������ ��������� �� ������ \n");

		int a = 0;
		printf("������� �����: ");
		scanf("%d", &a);

		switch (a)
		{
		case 12:
		case 1:
		case 2:
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("���� \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		case 3:
		case 4:
		case 5:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("����� \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 14);
			printf("���� \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		case 9:
		case 10:
		case 11:
		{
			SetConsoleTextAttribute(hConsole, 12);
			printf("����� \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		default:
		{
			SetConsoleTextAttribute(hConsole, 12);
			printf("������ ������ �� ���������� \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		}
	}
	case 6:
	{
		printf("���� ��� ����� a, b, c. ����������, ������� �� ����� ��� ���� �� ���� ���� ������ \n");

		int a = 0, b = 0, c = 0;
		printf("������� ����� �: ");
		scanf("%d", &a);

		printf("������� ����� b: ");
		scanf("%d", &b);

		printf("������� ����� �: ");
		scanf("%d", &c);

		if (a == b || b == c || a == c)
		{
			printf("������� ���� �� ���� ���� ������ ����� \n");
		}
		else
		{

		}
		break;
	}
	case 7:
	{
		printf("�������� ��������� ��� ����������� ������� ����� �� ������� �������� ������� � ������� ��������� (���� � � 6 �� 12, ���� � � 12 �� 18, ����� � � 18 �� 24, ���� � � 0 �� 6 \n");

		int h = 0, m = 0;

		printf("������� ����� � ������� ���:������ = ");
		scanf("%d:%d", &h, &m);

		if (((h >= 6 && h <= 11)) && (m == 0 || m < 60))
		{
			printf("���� \n");
		}
		else if ((h >= 12 && h < 18) && (m == 0 || m < 60))
		{
			printf("���� \n");
		}
		else if ((h >= 18 && h < 24) && (m == 0 || m < 60))
		{
			printf("����� \n");
		}
		else if ((h >= 0 && h < 6) && (m == 0 || m < 60))
		{
			printf("���� \n");
		}
		else
		{
			printf("������ ������������ ����� \n");
		}
	}
	break;
	case 8:
	{
		printf("���� ����������� �����. ����������: a.������ �� � ���� ����� 5, b.������ �� � ���� ����� � \n");

		int a = 0, x = 0, y1 = 0, y2 = 0;

		printf("������� ����������� �����: ");
		scanf("%d", &x);

		y1 = x / 10;
		y2 = x % 10;

		printf("������� ����� ����� �� 1 �� 9: ");
		scanf("%d", &a);

		if (y1 == 5 || y2 == 5)
		{
			printf("� ���� ����� ������ ����� 5 \n");
		}
		else
		{
			printf("����� 5 �� ������ � ������ ����� \n");
		}
		if (y1 == a || y2 == a)
		{
			printf("� ������ ����� ������ ��������� ���� ����� \n");
		}
		else
		{
			printf("� ������ ����� �� ������ �������� ���� ����� \n");
		}
	}
	break;
	case 9:
	{
		printf("�������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99 ��������� � ���� ����� ������� � ���������� �����. ��������, 1 �������, 5 ������, 42 ������� \n");

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
			printf("%d ������ \n", a);
		}
		break;
		default:
		{
			switch (a % 10)
			{
			case 1:
			{
				printf("%d ������� \n", a);
			}
			break;

			case 2:
			case 3:
			case 4:
			{
				printf("%d ������� \n", a);
			}
			break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
			{
				printf("%d ������ \n", a);
			}
			}
		}
		}
	}
	break;
	case 10:
	{
		printf("���� ����������� �������������� �����. ��������, �������� �� ��� ����������� (�������� ��������� ����� ������� � ������ ������) \n");

		int a = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0;

		printf("������� ����� �� 1000 �� 9999: ");
		scanf("%d", &a);

		x1 = a / 1000;
		x2 = (a / 100) - x1 * 10;
		x3 = (a / 10) - x1 * 110;
		x4 = a / 1 - x1 * 1110;

		if (x1 == x2 && x2 == x3 && x3 == x4)
			printf("����� \n");
		else
			printf("������� \n");

	}
	break;
	goto start;
	}
}