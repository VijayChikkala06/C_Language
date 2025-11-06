#include<stdio.h>
int main()
{
	int a, b, c;
	int big;
	printf("Enter any THREE numbers :");
	scanf("%d%d%d",&a,&b,&c);
	big=(a>b&&a>c)?a:(b>c)?b:c;
	printf("Largest of THREE numbers is %d",big);
	return 0;
	}
