#include<stdio.h>
int main()
{
	int i,n,sum=0;
	i=1;
	printf("Enter n value :");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		sum=sum+i;
		i=i+1;
		
	}
		printf("sum of factors is %d\n",sum);
		if(sum==n){
			printf("Hence it is a perfect number.");
		}
		else {
			printf("Hence it is not a perfect number.");
		}
}
