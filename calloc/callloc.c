#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int mian()
{
	//����10�����Ϳռ�
	//malloc(10*sizeof(int));
	int* p = (int*)calloc(10, sizeof(int));

	//����
	// 1.��������
	// 2.malloc����ʼ��������Ϊ���ֵ��calloc���ʼ������Ϊ0

	if (p == NULL)
	{
		perror("calloc");
		return 1;
	}
	//ʹ�ÿռ�
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);//*(p+i)
	}
	//�ͷ�
	free(p);
	p = NULL;
	return 0;
}