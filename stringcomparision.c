#include<stdio.h>
int main(){
	int i,len1=0,len2=0,flag=0,c;
	char a[100],b[100];
	printf("Enter your Strings: \n");
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++){
		 len1++;
	}
	for(i=0;b[i]!='\0';i++){
		 len2++;
	}
	if(len1==len2){
		i=0;
	while(a[i]!='\0'&&b[i]!='\0'){
		if(a[i]!=b[i]){
			flag=1;
			break;
		}
		i++;
	}
	} 
	else flag=0;
	if(flag==1){
		printf("Strings are not same");
	}
	else{
	 printf("Strings are Same");
}
}
	
	
