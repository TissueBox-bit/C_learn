#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Turn(int n)
{
	if (n > 1)
	{
		Turn(n / 2);
	}
	printf("%d", n % 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Turn(n);
	
	//��ѭ�����
	//int decimal, remainder, binary[32];
	//int i = 0, j;
	//scanf("%d", &decimal);
	//while (decimal > 0) {
	//	remainder = decimal % 2;
	//	binary[i] = remainder;
	//	decimal /= 2;
	//	i++;
	//}
	//// �������������λ
	//printf("�����Ʊ�ʾΪ: ");
	//for (j = i - 1; j >= 0; j--) {
	//	printf("%d", binary[j]);
	//}
	//printf("\n");

	return 0;
}