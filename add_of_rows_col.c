#include<stdio.h>
int main(){
	int a[10][10],i,j,row,col,sum=0;
	printf("Enter the number of rows and columns :\n");
	scanf("%d%d",&row,&col);
	printf("Enter %d elements:\n",row*col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
				sum=sum+a[i][j];
	}
			printf("\n");
	}
	printf("\nEntered matrix is :\n");
	for (i = 0; i < row; ++i){
    for (j = 0; j < col; ++j) {
      printf("%d   ", a[i][j]);
    }
    printf("\n\n");
}
	printf("Trace of a matrix is :%d",sum);

}
