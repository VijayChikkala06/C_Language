#include<stdio.h>
int main()
{
	int i,j,n,flag,range;
	printf("enter the range value :");
	scanf("%d",&range);
	for(n=2;n<=range;n++){
	flag=0;
	for(i=2;i<=n/2;i=i+1)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d ,",n);
	}
}
	return 0;
}
