#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	pritnf("%p\n", &Add);
	pritnf("%p\n", Add);
	//&�������ͺ��������Ǻ����ĵ�ַ��û������

	int (*pf)(int, int) = &Add;//pfָ�����
	int (*pf)(int x, int y) = &Add;//����дҲ����
	//int(*)(int,int)����ָ������

	//����
	int ret = (*pf)(4, 5);
	//int ret = pf(4, 5);Ҳ���Բ�д
	printf("%d\n", ret);

	//��Ȥ�Ĵ���

	(*(void(*)())0)();
	//void(*)()����ָ������
	//(void(*)())ǿ������ת��
	//��˼����һ�κ������ã�����0��ַ���ŵ��Ǹ�����
	//0��ַ���ŵ��������û�в���������������void

	void(*signal(int, void(*)(int)))(int);
	//����Ĵ�����һ�κ�������
	//���������ֽУ�signal
	//signal�����Ĳ���������
	//��һ��������������int
	//�ڶ����������� --- һ�ֺ���ָ�� void(*)(int)
	//		�ú���ָ��ָ��ĺ���������int������������void
	//signal�����ķ�������Ҳ��һ������ָ�������������void(*)(int)  ������������������һ�㣨�������ң�
	//		�ú���ָ��ָ��ĺ���������int������������void
	return 0;
}