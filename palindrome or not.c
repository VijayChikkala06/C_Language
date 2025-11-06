#include<stdio.h>
int main(){
	char a[1000],temp,flag=0;
	int len=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++){
		len++;
	}
	for(i=0;i<len/2;i++){
	    if(a[i]!=a[len-i-1]){
	    flag=1;
			break;
		}
		else {
		flag=0;	
		}
}
if(flag==1){
	printf(" Not a Palindrome string");
}
else printf("palindrome string");
}
