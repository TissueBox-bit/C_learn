#include <stdio.h>


int main()
{
	printf("asdf\0sdf");
	printf("%zd\n", strlen("c:\test\bit\114\test.c"));
	int i = 0;
	for (i = 32; i <= 127; i++)
	{
		
		printf("%c ", i);
		if (i % 16 == 15)
			printf("\n");
	}
	
	return 0;
}