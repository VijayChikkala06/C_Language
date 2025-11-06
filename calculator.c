#include<stdio.h>
#include<stdlib.h>
int  main()
{
	int a,b;
	char n;
		
	printf("Enter a,b values :");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Enter arthimetic operator :");
	scanf("%c", &n);

	switch (n)
	{
		case '+': printf("ADD is %d\n",a+b);
		break;
		case '-': printf("SUB is %d\n",a-b);
		break;
		case '*': printf("MULTIPLICATION is %d\n",a*b);
		break;
		case '/': printf("DIV is %d\n",a/b);
		break;
		case'%': printf("MOD is %d\n",a%b);
		break;
		default : printf("INVALID OPERATION");	
	}
	return 0;
	
}
