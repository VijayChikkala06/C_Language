#include<stdio.h>
#include<string.h>
int main(){
   char s1[100],s2[100],s3[100];
   int len1=0,len2=0;
   printf("Enter the string1: ");
   gets(s1);
   printf("Enter the string2: ");
   gets(s2);
   len1=strlen(s1);
   len2=strlen(s2);
   printf("\nlength of s1 = %d\nlength of s2 = %d",len1, len2);
   strrev(s1);
   strrev(s2);
   printf("\nreversed string1 is: %s\nreversed string2 is: %s",s1,s2);
   strrev(s1);
   strrev(s2);
   strcat(s1,s2); 
   printf("\nAfter joining: %s",s1 );
   strcpy(s3,s1);
   printf("\ncopied str :%s\n",s3);
   int d = strcmp(s2,s3);
   printf("Diff : %d",d);
   return 0;
}
