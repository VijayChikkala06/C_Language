#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int i;
	printf("enter any string:");
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i+1]>='A'&&s1[i+1]<='Z')
		{
			s1[i+1]=s1[i+1]+32;
		}
		if(s1[0]>='a'&&s1[0]<='z')
		{
			s1[0]=s1[0]-32;
		}
		if(s1[i]=='.'||s1[i]=='!'||s1[i]=='?')
		{
			s1[i+1]=s1[i+1]-32;  
		}
	}
	printf("\n sentential case string: %s",s1);
	return 0;
}
