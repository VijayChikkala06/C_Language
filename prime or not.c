#include<stdio.h>
int main(){
	int i,j,n,flag=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	if(n==1){
		printf("Not a prime");
	}
	else{
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d is prime",n);
	}
	else printf("%d is not a prime",n);
}
}
