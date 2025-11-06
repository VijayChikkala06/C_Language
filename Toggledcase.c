#include <stdio.h>   
int main()  
{  
char str[30];  
int i;  
printf (" Enter the string: ");  
scanf ("%[^\n]",str);
 for (i=0;str[i]!='\0';i++)  
 {  
 if(str[i]>='A'&&str[i]<='Z'){
 str[i] = str[i] + 32;
}
}
printf ("\%s", str);  
return 0;  
}  

