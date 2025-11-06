#include<stdio.h>
int main()
{
	int i,n;
	i=1;
	printf("Enter n value :");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i=i+1;
	}while(i<=n);
}
