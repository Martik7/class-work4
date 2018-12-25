#include <stdio.h>
#include <iostream>
#include <time.h>
#include <locale.h>
#include <thread>
#include <chrono>


void task6()
{
	using namespace std::chrono_literals;

	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
	for (size_t i = 1; i <= 5; i++)
	{
		int mast = 1 + rand() % 3;
		int nam = 1 + rand() % 13;

		std::this_thread::sleep_for(1s);

		switch (1)
		{
		case 1: c1 = (mast*100) + nam;
			printf("card #1: %d\n", c1);
			break;
		case 2: c2 = (mast * 100) + nam;
			printf("card #2: %d\n", c2);
			break;
		case 3: c3 = (mast * 100) + nam;
			printf("card #3: %d\n", c3);
			break;
		case 4: c4 = (mast * 100) + nam;
			printf("card #4: %d\n", c4);
			break;
		case 5: c5 = (mast * 100) + nam;
			printf("card #5: %d\n", c5);
			break;
		default:break;
		}
	}
	printf("1.%d\n", c1 % 100);
	printf("2.%d\n", c2 % 100);
	printf("3.%d\n", c3 % 100);
	printf("4.%d\n", c4 % 100);
	printf("5.%d\n", c5 % 100);

	int cn = 1;
	int para = 0;
	int ggg = 0;
	do
	{
		if (cn == 1)
		{
			if ((c1 / 100) == (c2 / 100) ||
				(c1 / 100) == (c3 / 100) ||
				(c1 / 100) == (c4 / 100) ||
				(c1 / 100) == (c5 / 100))
			{
				ggg++;

			}
		}
		else if (cn == 2)
		{
			if ((c2 / 100) == (c1 / 100) ||
				(c2 / 100) == (c3 / 100) ||
				(c2 / 100) == (c4 / 100) ||
				(c2 / 100) == (c5 / 100))
			{
				ggg++;
			}
		}
		else if (cn == 3)
		{
			if ((c3 / 100) == (c2 / 100) ||
				(c3 / 100) == (c1 / 100) ||
				(c3 / 100) == (c4 / 100) ||
				(c3 / 100) == (c5 / 100))
			{
				ggg++;
			}
		}
		else if (cn == 4)
		{
			if ((c4 / 100) == (c2 / 100) ||
				(c4 / 100) == (c3 / 100) ||
				(c4 / 100) == (c1 / 100) ||
				(c4 / 100) == (c5 / 100))
			{
				ggg++;
			}
		}
		else if (cn == 5)
		{
			if ((c5 / 100) == (c2 / 100) ||
				(c5 / 100) == (c3 / 100) ||
				(c5 / 100) == (c4 / 100) ||
				(c5 / 100) == (c1 / 100))
			{
				ggg++;
			}
		cn++;

	} while (cn<=5);

	if (ggg > 2)
		printf("—эт\n");
	else if (para >= 5)
		printf("ѕара\n");
	
}



void task5()
{
	int allpsh = 0;
	int allsrd = 0;
	for (size_t rayon = 1; rayon <= 10; rayon++)
	{
		int gek = 10 + rand() % 5;
		int psh = 300 + rand() % 300;
		float avg = float(psh) / gek;
		printf("Rayon = %d\t Ploshad = %d\t Srednii Urozhai = %f\n", rayon, gek, avg);
		allpsh += psh;
		allsrd += avg;
	}
	printf("Kol-vo Pshenicы с области = %d\t —редн€€ урожайность с области - %f\n", allpsh, float(allsrd/10));
}

void task4()
{
	int summa;
	for (size_t clas = 1; clas <= 2; clas++)
	{
		summa = 0;
		int chislo = 10 + rand() % 12;
		for (size_t student = 0; student <= chislo; student++)
		{
			int srs = 150 + rand() % 30;
			printf("class %d\t student - %d\t rost - %d\n", clas, chislo, srs);
			summa += srs;
		}
		float avg = float(summa) / chislo;
		printf("Srednii rost - %f\n", avg);
	}

}

void task3()
{
	int numday;
	int summa;
	int sredne;
	for (size_t mes = 1; mes <=3; mes++)
	{
		numday = 0;
		summa = 0;
		sredne = 0;
		printf("%d. ћес€ц\n", mes);
		for (size_t day = 0; day <= 31; day++)
		{
			float osadki = float((300 + rand() % 60) / (30 + rand() % 60));
			printf("\t%d. %f\n", day, osadki);
			numday++;
			summa += osadki;
		}
		float avg = float(summa / numday);
		printf("—реднeдневное кол-во осадков = %f\n",avg);
	}
}

void task2()
{
	int srednii;
	int sumstudents;
	for (size_t clas = 0; clas <=2; clas++)
	{
		srednii = 0;
		sumstudents = 0;
		for (size_t student = 1; student <=20; student++)
		{
			int student2 = 6 + rand() % 15;
			printf("class-%d\t student-%d\t age-%d\n", clas, student, student2);
			srednii = srednii + student2;
			sumstudents++;
		}
		printf("Srednii age %d = %f\n", clas, (srednii / sumstudents));
	}
}

void task1()
{
	int sum;
	for (size_t i = 1; i <= 2; i++)
	{
		sum = 0;
		for (size_t o = 0; o <= 4; o++)
		{
			int a = 2 + rand() % 5;
			printf("Student-%d\t a-%d= %d", i, o, a);
			sum = sum + a;
			int b = 2 + rand() % 5;
		}
		printf("Summa vseh students - %d\t = %d\n\n", i, sum);
	}
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task = 0;
	int restart = 0;
	do
	{
		printf("¬ведите номер задани€: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;
		case 5:
		{
			task5();
		}break;
		case 6:
		{
			task6();
		}break;

		default:
			break;
		}

		printf("\n----------------------\n");
		printf("¬ы хотите продолжить?1/0\n");
		scanf_s("%d", &restart);

	} while (restart == 1);

	system("pause");
}