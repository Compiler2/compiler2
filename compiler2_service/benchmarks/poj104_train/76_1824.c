#define NUM_ITER 2598

#include <header.h>

int main_bench()
{
int n,i,a[50000],b[50000],j,t,p,max;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
       my_scanf("%d %d",&a[i],&b[i]);
   }
   
   for(i=0;i<n;i++){
	   for(j=0;j<n;j++){
		   if(a[j]<a[j-1]){
			   t=a[j];
			   a[j]=a[j-1];
			   a[j-1]=t;
			   t=b[j];
			   b[j]=b[j-1];
			   b[j-1]=t;
		   }
	   }
   }
   
   p=2;
   max=b[0];
   for(i=0;i<n;i++){
	   if(a[i+1]>b[i]&&i==0){
		  p=1;
		  break;
	   }
	   if(a[i+1]>b[i]&&i!=0&&b[i]>=b[i-1]){
		  p=1;
		  break;
	   }
	   if(b[i]>max)
		   max=b[i];
   }

   if(p==2){
	   my_printf("%d %d",a[0],max);
   }
   if(p==1){
	   my_printf("no");
   }
   return 0;
}
