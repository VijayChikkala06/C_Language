#include<stdio.h>
int main()
{
	int a[20],n,i,se=0,so=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0)
	   {
	    se=se+a[i]; 
	   }
	   else if(a[i]%2==1){
	   	so=so+a[i];
	   }
	}
	if(se>so)
	{
		printf("%d",se-so);	
	}
	else if(so>se) 
	{
	printf("%d",so-se);
}

	return 0;
}
