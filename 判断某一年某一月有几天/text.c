#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ж�ĳһ��ĳһ���м���
leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
		return 1;
	else
		return 0;
}
get_day_of_month(int y, int m)
{
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//����ÿ����Ӧÿ����������֮������ǰ��Ӹ�0������Ϊ��ֱ�Ӷ�Ӧ
	int day = days[m];
	if (leap_year(y) == 1 && m == 2)
		day++;
	return day;
}
int main()
{
	int year = 0;
	int month = 0;
	scanf("%d %d", &year, &month);
	int day = get_day_of_month(year, month);
	printf("%d", day);
	return 0;
}
