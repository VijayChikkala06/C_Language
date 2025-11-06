#include<stdio.h> 
int main() 
{ 
int a[20], n, i, max,min,minp;
scanf("%d", &n);
for(i=0; i<n; i++) 
{ 
scanf("%d", &a[i]); 
} 
max=a[0]; 
for(i=0; i<n; i++) 
{ 
if(a[i]>max) 
{ 
max=a[i]; 
} 
} 
min=a[0]; 
for(i=0; i<n; i++) 
{ 
if(a[i]<min) 
{ 
min=a[i]; 
minp=i+1;
} 
}
printf("max= %d\nmin= %d,&%d", max,min,minp); 
}
   
 
 
 
 
 

