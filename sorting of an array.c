#include <stdio.h>
int main (){
   int num[20];
   int i, j, a, n;
   printf("enter number of elements in an array :\n");
   scanf("%d", &n);
   printf("Enter the elements :\n");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i){
      for (j =0; j <n-i-1; ++j){
         if (num[j] > num[j+1]){
            a = num[j];
            num[j] = num[j+1];
            num[j+1] = a;
         
      }
   }
}
   printf("The numbers in ascending order is\n");
   for (i = 0; i < n; ++i){
      printf("%d\n", num[i]);
   }
   return 0;
}

