#include<stdio.h>
#include<math.h>
int main()
{
	//a=coeff of x^2, b=coeff of x, c=constant, d=discriminant
	int a,b,c,d;
	float r1,r2;
	printf("Enter the coefficients a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
    {
    	printf("The roots are real and equal\n");
	r1=r2=-b/(2*a);
	printf("root1=%.2f root2=%.2f",r1,r2);
    }   
	else if(d>0){
		r1=-b+sqrt(b*b-4*a*c)/(2*a);
		r2=-b-sqrt(b*b-4*a*c)/(2*a);
		printf("The roots are real and distinct\n");
	    printf("root1=%.2f root=%.2f",r1,r2);	
	}
	else
	{
	printf("The roots are imaginary");
	 }
	 return 0;
	}
