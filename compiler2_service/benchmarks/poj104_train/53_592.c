#include <header.h>

int main_bench()
{ 
   int a[300]; 
   int n,i,j,k,l;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   my_scanf("%d",&a[i]);
   for(j=0;j<n;j++) 
   for(k=j+1;k<n;k++)
   if(*(a+j)==*(a+k)) 
   *(a+k)=0; 
   my_printf("%d",*a);
   for(l=1;l<n;l++) 
   if(*(a+l)!=0) 
   my_printf(",%d",*(a+l));
}