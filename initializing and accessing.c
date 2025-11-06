#include<stdio.h>
int main()
{
	int a[20],n,i,pos,key;
	printf("Enter size of an array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
 for(i=0;i<n/2;i++){
 	int t=a[i];
 	a[i]=a[n-i-1];
 	a[n-i-1]=t;
 }
 for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
