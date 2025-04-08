#include <stdio.h>
int main()
{
		int i = 1, j=2;
		while (j<7)
		{
			while (i)
			{
				printf("*");
				i = i - 1;
			}
			printf("\n");
			i=j;
			j=j+1;
		}
	return 0;
}