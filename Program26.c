#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int n,i;
	
	printf("Enter value for n:\t");
	scanf("%d",&n);
	
	ptr = (int*)malloc(n*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Memory not allocated");
	}
	
	else
	{
		printf("Memory allocated successfuly !!!");
		
		for(i=0;i<n;++i)
		{
			ptr[i] = i+1;
		}
		
	}
	
	for(i=0;i<n;i++)
		{
			printf("%d \n", ptr[i]);
		}
}
