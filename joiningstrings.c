#include<stdio.h>
int main() {
    int i, len1 = 0, len2 = 0;
    char s1[100], s2[100];
    printf("Enter your String1: \n");
    	scanf("%s",s1);
    getchar(); 
	  printf("Enter your String1: \n");  
    	scanf("%s",s2);
    for (i = 0; s1[i] != '\0'; i++) {
        len1++;
    }
    for (i = 0; s2[i] != '\0'; i++) {
        len2++;
    }
    for (i = 0; s2[i] != '\0'; i++) {
        s1[len1] = s2[i];
        len1++;
    }
    s1[len1] = '\0';
    printf("\nJoined string is: %s", s1);
    printf("\n24B11CS477");
    return 0;
}


