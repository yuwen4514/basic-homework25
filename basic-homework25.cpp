#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int X,j;
	int *ptr[4];
	int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	for(X=0;X<4;X++)
	{
		ptr[X]=array[X];
	}
	for(X=0;X<4;X++)
	{
		for(j=0;j<3;j++)
		{
		printf("%3d", *(ptr[X]+j));
		}
		printf("\n");
	}
	system("pause");
	return 0;
} 
