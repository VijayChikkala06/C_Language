#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp1;
	char msg[100],c;
	fp1=fopen("movies.txt","w+");
	if(fp1==NULL){
		printf("File not exist");
		exit(0);
	}
	printf("Enter your data:\n");
	scanf("%[^*]",msg);
	fputs(msg,fp1);
	printf("Data written\n");
		rewind(fp1);
	printf("Data in file is:\n");
			c=fgetc(fp1);
		while(c!=EOF){
		printf("%c",c);
		c=fgetc(fp1);
	}
		fclose(fp1);
		return 0;	
		}
