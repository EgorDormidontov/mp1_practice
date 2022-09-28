#define _CRT_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include <locale.h>
#include<cmath>

int main()
{
	setlocale(LC_ALL, "Rus");
	float x1, x2, y1, y2, r1, r2, d;
	scanf_s("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &r1, &r2);
	d = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	if (d > r1 + r2)
	{
		printf("Окружности находятся на расстоянии друг от друга");
	}
	else if(d<(abs(r1-r2)))
	{
		printf("Одна окружность находится внутри другой");
	}
	else if (d == r1 + r2)
	{
		printf("Пересекаются один раз, окружности не лежат одна в другой");
	}
	else if (d == abs(r1 - r2))
	{
		printf("Пересекаются один раз, окружности лежат одна в другой");
	}
	else if (abs(r1 - r2) < d < r1 + r2)
	{
		printf("Пересекаются в 2 точках");
	}
}