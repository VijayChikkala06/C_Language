#include<stdio.h>
int main(){
	char a[1000],temp,flag=0;
	int len=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++){
		len++;
	}
	for(i=0;i<len/2;i++){
	    temp=a[i];
	    a[i]=a[len-i-1];
	    a[len-i-1]=temp;
}
printf("Reversed string is : %s",a);
}
