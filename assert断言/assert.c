#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
int main()
{
	int* p = NULL;
	assert(p != NULL);//Ҫ����Ϊ�棬������ֹ����
	//�ȼ���
	//if (p != NULL)
	//{
	//	*p = 200;//�����ڲ�������
	//}
	return 0;
}
