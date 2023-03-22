#include <header.h>

int main_bench()
{
	int n,k,i,j;
	int c1=0;
	int c2=0;
	int a[100000];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	   my_scanf("%d",&a[i]);
    my_scanf("%d",&k);
    for (i=0;i<n;i++){
       if (a[i]==k) c2++;
    }
    for (i=0;i<n;i++){
       if (a[i]==k){
	      for (j=i+1;j<n;j++){
               if (a[j]!=k){
               	  a[i]=a[j];
               	  a[j]=k;
               	  break;
               }
	      }
       }
    }
    for (i=0;i<n-c2-1;i++)
	   my_printf("%d ",a[i]); 
	   my_printf("%d",a[n-c2-1]);
return 0;	   
}
