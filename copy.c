#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp1,*fp2;
   char ch;
   fp1=fopen("Movies.txt","r");
   if(fp1==NULL)
   {
   	printf("file not created");
   	 exit(0);
   }
   fp2=fopen("Movie.txt","w");
   if(fp2==NULL)
   {
   	printf("file not created");
   	 exit(0);
   }
   while((ch=fgetc(fp1))!=EOF)
   {                                   
   	 fputc(ch,fp2);
   }
   printf("File is copied");
   fclose(fp1);
   fclose(fp2);
}
