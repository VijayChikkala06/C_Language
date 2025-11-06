#include<stdio.h>
  int majorityElement(int* nums, int numsSize) {
    int maj = nums[0];
    int count=1;
    for(int i=1;i<numsSize;i++){
        if(count==0){
            maj=nums[i];
            count=1;
        }
        else if(maj==nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return maj;
}
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int num=majorityElement(a,n);
    printf("maj=%d",num);   
}
