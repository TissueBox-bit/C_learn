#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%zd\n", sizeof(a));//16
	//����a��������sizeof�ڲ���a��ʾ�������飬���������������Ĵ�С����λ���ֽ�
	printf("%zd\n", sizeof(a + 0));//4��X86��/8(X64)
	//�����a����������ʾ��Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ
	//����sizeof���������Ԫ�ص�ַ�Ǵ�С
	printf("%zd\n", sizeof(*a));//4
	//�����a����������ʾ��Ԫ�صĵ�ַ��*a������Ԫ�أ�����a[0]
	//*a -- *(a+0) -- a[0]
	printf("%zd\n", sizeof(a + 1));//  4/8
	//�����a����������ʾ��Ԫ�صĵ�ַ��a+1�ǵڶ���Ԫ�صĵ�ַ��&a[1]��
	//������ǵ�ַ�Ĵ�С
	printf("%zd\n", sizeof(a[1]));//4
	printf("%zd\n", sizeof(&a));//   4/8
	//&a - �����������a��ʾ�������飬&a����������ĵ�ַ
	//����ĵ�ַҲ�ǵ�ַ���ǵ�ַ���� 4/8 ���ֽڵĳ���
	printf("%zd\n", sizeof(*&a));//16
	//1.*&a�������*��&�����ˣ�����sizeof��*&a�� ==  sizeof(a)
	//2.&a - ��������ĵ�ַ�����͵�int��*��[4],*&a���ʷŵľ����������
	printf("%zd\n", sizeof(&a + 1));//   4/8
	//&a������ĵ�ַ��&a+1�����������������Ǹ�λ�õĵ�ַ
	//&a+1�ǵ�ַ����ַ����4/8���ֽ�
	printf("%zd\n", sizeof(&a[0]));//   4/8
	printf("%zd\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�صĵ�ַ  4/8


	char arr[] = { 'a','b','c','d','e','f' };
	printf("%zd\n", sizeof(arr));//6
	printf("%zd\n", sizeof(arr + 0));//  4/8
	printf("%zd\n", sizeof(*arr));//1
	printf("%zd\n", sizeof(arr[1]));//1
	printf("%zd\n", sizeof(&arr));//  4/8
	printf("%zd\n", sizeof(&arr + 1));//  4/8
	printf("%zd\n", sizeof(&arr[0] + 1));//   4/8


	char arr[] = { 'a','b','c','d','e','f' };
	printf("%zd\n", strlen(arr));//���ֵ
	printf("%zd\n", strlen(arr + 0));//���ֵ
	printf("%zd\n", strlen(*arr));//
	//arr����������ʾ��Ԫ�صĵ�ַ
	//*arr ����Ԫ�� -- 'a' - 97�����ݸ�strlen��strlen����Ϊ97���ǵ�ַ��Ȼ��ȥ�����ڴ�
	//�����err -- �������
	printf("%zd\n", strlen(arr[1]));//'b' - 98  -- err
	printf("%zd\n", strlen(&arr));//���ֵ
	printf("%zd\n", strlen(&arr + 1));//���ֵ
	printf("%zd\n", strlen(&arr[0] + 1));//���ֵ



	//����������Ԫ�صĵ�ַ
	//2�����⣺
	//1.szieof����������
	//2.&������


	char arr[] = "abcdef";
	// a b c d e f \0
	printf("%zd\n", sizeof(arr));//7
	//��������������sizeof�ڲ��������������Ĵ�С
	printf("%zd\n", sizeof(arr + 0));//  4/8
	//arr+0��������Ԫ�صĵ�ַ����Ȼ�ǵ�ַ���Ǿ���4/8
	printf("%zd\n", sizeof(*arr));//1
	printf("%zd\n", sizeof(arr[1]));//1
	printf("%zd\n", sizeof(&arr));//  4/8
	printf("%zd\n", sizeof(&arr + 1));//  4/8
	printf("%zd\n", sizeof(&arr[0] + 1));//  4/8


	char arr[] = "abcdef";
	printf("%zd\n", strlen(arr));//6
	//arr����Ԫ�صĵ�ַ��strlen�Ǵӵ�һ��Ԫ�ؿ�ʼͳ��\0֮ǰ���ַ�����
	printf("%zd\n", strlen(arr + 0));//���ֵ
	//arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ
	printf("%zd\n", strlen(*arr));//err
	//*arr ����Ԫ�� -- 'a' - 97�����ݸ�strlen��strlen����Ϊ97���ǵ�ַ��Ȼ��ȥ�����ڴ�
	//�����err -- �������
	printf("%zd\n", strlen(arr[1]));//errͬ��
	printf("%zd\n", strlen(&arr));//6
	//&arr������ĵ�ַ������ĵ�ַ��������Ԫ�صĵ�ַָ��ͬһ��λ��
	//��ôstrlenҲ�Ǵӵ�һ��Ԫ�ص�λ�ÿ�ʼ�����ʵ�
	printf("%zd\n", strlen(&arr + 1));//���ֵ
	printf("%zd\n", strlen(&arr[0] + 1));//5
	//�ӵڶ���Ԫ�ؿ�ʼͳ��


	char* p = "abcdef";
	printf("%zd\n", sizeof(p));//   4/8
	//p��ָ��������������ָ�����p�Ĵ�С
	printf("%zd\n", sizeof(p + 1));//  4/8
	//p+1�ǵڶ���Ԫ�صĵ�ַ����ַ��С����4/8
	printf("%zd\n", sizeof(*p));//1
	//p��������char*������ֻ�ܷ���1���ֽ�
	printf("%zd\n", sizeof(p[0]));//1
	//p[0] --> *(p+0) -- *p -- һ���ֽ�
	printf("%d\n", sizeof(&p));//   4/8
	//&p��ָ�����p�ĵ�ַ��Ҳ�ǵ�ַ
	//&p -- char** -- ����ָ��
	printf("%zd\n", sizeof(&p + 1));//   4/8
	//&p��ָ�����p�ĵ�ַ��&p+1������p������ָ��p�ĺ���
	//&p+1�ǵ�ַ
	printf("%zd\n", sizeof(&p[0] + 1));//  4/8
	//&p[0] + 1����b�ĵ�ַ
	//p[0] --   *(p+0) -- *p



	char* p = "abcdef";
	printf("%zd\n", strlen(p));//6
	printf("%zd\n", strlen(p + 1));//5
	printf("%zd\n", strlen(*p));//err
	printf("%zd\n", strlen(p[0]));//err
	printf("%zd\n", strlen(&p));//���ֵ����p��ַ������\0��
	printf("%zd\n", strlen(&p + 1));//���ֵ
	printf("%zd\n", strlen(&p[0] + 1));//5


	int a[3][4] = { 0 };
	printf("%zd\n", sizeof(a));//48
	//a��Ϊ����������������sizeof�ڲ���a��ʾ�����������飬���������������Ĵ�С����λ���ֽ�
	printf("%zd\n", sizeof(a[0][0]));//4
	//a[0][0]�ǵ�һ�е�һ��Ԫ�أ���С��4���ֽ�
	printf("%zd\n", sizeof(a[0]));//16
	//a[0]�ǵ�һ�е�����������������sizeof�ڲ��������������Ĵ�С
	printf("%zd\n", sizeof(a[0] + 1));//   4/8
	//a[0]�ǵ�һ�е�������������û�е�������sizeof�ڲ���a��ʾ��Ԫ�صĵ�ַ - Ҳ���ǵ�һ�еĵ�ַ -- &a[0][0]
	//a[0]+1 == &a[0][0]+1 == &a[0][1]
	//��ַ�Ĵ�С4/8
	printf("%zd\n", sizeof(*(a[0] + 1)));//4
	//�ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
	printf("%zd\n", sizeof(a + 1));//   4/8
	//a�Ƕ�ά���������������û�е�������sizeof�ڲ���a��ʾ��Ԫ�صĵ�ַ- Ҳ���ǵ�һ�еĵ�ַ
	//a+1 �ǵڶ��еĵ�ַ���ǵ�ַ����4/8
	printf("%zd\n", sizeof(*(a + 1)));//16
	//1.*��a+1�� -- a[1]�ǵڶ��е�����������������sizeof�ڲ���������ǵڶ��еĴ�С
	//2.a+1�ǵڶ��еĵ�ַ��������int(*)[4],����ָ�룬�����÷��ʵ���������飬��С��16���ֽ�
	printf("%zd\n", sizeof(&a[0] + 1));//  4/8
	//a[0]�ǵ�һ�е���������&��������ʵ���ǵ�һ�еĵ�ַ��&a[0]+1���ǵڶ��еĵ�ַ���ǵ�ַ����4/8
	printf("%zd\n", sizeof(*(&a[0] + 1)));//16
	printf("%zd\n", sizeof(*a));//16
	//1.a -- ��Ԫ�صĵ�ַ����һ�еĵ�ַ����*a�ǵ�һ��
	//2.*a --- *��a+0�� -- a[0]
	printf("%zd\n", sizeof(a[3]));//16
	//sizeof�ڲ����ʽ�ǲ�����ʵ�����
	//a[3] -- �����е������� int[4]


	return 0;
}