#include<stdio.h>
int main(){
	FILE *fp1,*fp2,*fp3;
	char c;
	fp1=fopen("files1.txt","r");
	if(fp1==NULL){
		printf("File not created");
	}
		fp2=fopen("files2.txt","r");
	if(fp2==NULL){
		printf("File not created");
	}
		fp3=fopen("files3.txt","w");
	if(fp3==NULL){
		printf("File not created");
	}
	while(!feof(fp1)){
	c=getc(fp1);
	fputc(c,fp3);
	}
		while(!feof(fp2)){
	c=getc(fp2);
	fputc(c,fp3);
	}
	printf("File is merged");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
