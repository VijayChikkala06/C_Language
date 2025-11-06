#include<stdio.h>
int main(){
	int a[10][10],i,j,row,col;
	int transpose[10][10];
	printf("Enter the number of rows and columns :\n");
	scanf("%d%d",&row,&col);
	printf("Enter %d elements:\n",row*col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nEntered matrix is :\n");
	for (i = 0; i < row; ++i){
    for (j = 0; j < col; ++j) {
      printf("%d   ", a[i][j]);
    }
    printf("\n\n");
  }
  for (i = 0; i < row; ++i)
  for (j = 0; j < col; ++j) {
    transpose[j][i] = a[i][j];
  }
  printf("\nTranspose of the matrix:\n");
  for (i = 0; i < col; ++i){
  for (j = 0; j < row; ++j) {
    printf("%d  ", transpose[i][j]);
  }
  printf("\n\n");  
}
}
 
