#include <stdio.h>
int main() {
  int r,c,a[10][10],b[10][10],sum[10][10],i,j,p,q;
  int m,n;
  printf("Enter the number of rows and columns for 1st matrix :\n");
  scanf("%d%d", &r,&c);
  printf("Enter the number of rows and columns for 2nd matrix :\n");
  scanf("%d%d", &m,&n);
  if(r==m&&c==n){
   printf("Enter %d elements of 1st matrix:\n",r*c);
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &a[i][j]);
    }
  printf("Enter %d elements of 2nd matrix:\n",m*n);
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
      scanf("%d", &b[i][j]);
    }
    printf("\n1st matrix is: \n");
  for (i = 0; i < r; ++i){  
    for (j = 0; j < c; ++j) {
      printf("%d   ", a[i][j]);
    }
    printf("\n\n");
}
  printf("\n2nd matrix is: \n");
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++) {
      printf("%d   ",b[i][j]);
    }
    printf("\n\n");
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices is: \n");
  for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
    }
    printf("\n\n");
}
}
else printf("Addition of matrices is not possible");
  return 0;
}

