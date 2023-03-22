#define NUM_ITER 5719

#include <header.h>


int main_bench() 
{ 
int a[100]; 
int k; 
my_scanf("%d",&k); 
for(int i=0 ;i < k;i++){ 
my_scanf("%d", &(a[i])); 
} 
for(int j=0;j<k-1;j++) 
for(int i=0;i<k-1-j;i++) 
{ 
if(a[i]<=a[i+1]) 
{ 
int p=a[i]; 
a[i]=a[i+1]; 
a[i+1]=p; 
} 
} 
my_printf("%d\n%d",a[0],a[1]); 
return 0; 
} 