#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp1,*fp2,*fp3;
	char msg[100],c;
	fp1=fopen("a.txt","r");
	if(fp1==NULL){
		printf("a not exist");
		exit(0);
	}
	fp2=fopen("b.txt","r");
	if(fp2==NULL){
		printf("b not exist");
		exit(0);
	}
	fp3=fopen("c.txt","w");
	if(fp3==NULL){
		printf("c not exist");
		exit(0);
	}
	while((c=fgetc(fp1))!=EOF){
		fputc(c,fp3);
	}
	while((c=fgetc(fp2))!=EOF){
		fputc(c,fp3);
	}
	printf("File is merged");
		fclose(fp1);
		fclose(fp1);
		fclose(fp1);
		return 0;	
		}
