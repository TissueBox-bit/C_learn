#include<stdio.h>
int main()
{
	int a = -100;//����ʡ����signed
	printf("%d\n", a);
	unsigned b = 100;
	printf("%d\n", b);//�������unsigned������ǷǸ�������������unsigned����һ����������%d��ӡ��Ȼ���Դ�ӡ���ø���
	unsigned c = 100;
	printf("%u\n", c);//%d��ӡ�з���������%u��ӡ�޷�������
	int num = 1;
	printf("num = %d\n", num);
	float d = 15;
	printf("%f\n", d);//%fĬ�ϴ�ӡ��λС��
	return 0;

}