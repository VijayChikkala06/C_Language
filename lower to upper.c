#include <stdio.h>   
int main ()  
{  
char s[1000];  
int i,dig=0;   
scanf (" %s", &s); 
 for (i=0;s[i]!='\0';i++)  
 {  
 if(s[i]>='0'&&s[i]<='9'){
		dig=dig+s[i];
	}
	}
printf ("%d",dig);  
return 0;  
}  

