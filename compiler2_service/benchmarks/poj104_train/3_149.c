#include <header.h>

int main_bench()
{  int i,j,n,k;
   int m=0;
	int a[1000];   
   my_scanf("%d",&n);
   my_scanf("%d",&k);
   for(i=0;i<n;i++)
   my_scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {for(j=i+1;j<n;j++)
   {
	   if(a[i]+a[j]==k)
       m++;
   }
   }
   if(m!=0)
	   my_printf("yes");
   if(m==0)
	   my_printf("no");
   return 0;
}

