#include<stdio.h>
int main()
{
	int n,r,t,range;
	printf("Enter the range :");
	scanf("%d",&range);
	for(n=101;n<=range;n++){
	t=n;
	int s=0;
	while(t>0)
	{
    r=t%10;
    s=s*10+r;
    t=t/10;
}
    if(s==n){
		printf("%d ,",n);
	}
}
	return 0;
}
