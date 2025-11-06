#include<stdio.h>
int main() {
    char str[100];
    scanf("%s",str);
    int len=0,i;
    for(i=0;str[i]!='\0';i++){
    	len++;
	}
    for(i=0;i<len/2;i++){
       char t=str[i];
       str[i]=str[len-i-1];
       str[len-i-1]=t;
	}
    printf("Reversed string is: %s",str);
    return 0;
}

