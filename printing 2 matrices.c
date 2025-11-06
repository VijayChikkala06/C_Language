#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char s1[100],s2[100];
	scanf("%s",s1);
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]>='A'&&s1[i]<='Z')
		s1[i]=s1[i]+32;
		if(s2[i]>='A'&&s2[i]<='Z')
		s2[i]=s2[i]+32;
	}
	n=strcmp(s1,s2);
	printf("%d",n);
}