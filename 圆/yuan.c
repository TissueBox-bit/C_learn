#define _CRT_SECURE_NO_WARNINGS 1
#define Pi 3.1415926535
#include<stdio.h>
double Perimeter(float r)
{
	return 2 * Pi * r;
}
double Area(float r)
{
	return 4 * Pi * r * r;
}
double Volume(float r)
{
	return 4 / 3 * Pi * r * r * r;
}
int main()
{
	float r = 0;
	scanf("%f", &r);
	double c = Perimeter(r);
	double s = Area(r);
	double v = Volume(r);
	printf("%.2f %.2f %.2f", c, s, v);
	return 0;
}
