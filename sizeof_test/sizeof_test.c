#include <stdio.h>
int main()
{
	printf("%zd\n", sizeof(3+3.5));//3��4�ֽڣ�3.5��8�ֽڣ�6.5��8�ֽ�
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(_Bool));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));
	printf("%zd\n", sizeof(long double));
	printf("%zd\n", sizeof(short));
	short s = 3;
	int b = 11;
	printf("%zd\n", sizeof(s = b + 2));
	
	return 0;

}