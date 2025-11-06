#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
	printf("enter the no.of rows and coloms of 1st matrix:\n");
	scanf("%d%d",&m,&n);
	printf("enter the no.of rows and coloms of 2nd matrix:\n");
	scanf("%d%d",&p,&q);
	if(n==p)
	{
		printf("matrix1 elements are\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("matrix2 elements are\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<p;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("multipul of two matrix is:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%4d ",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("matrix not possible..");
	}
	return 0;
}
