#include <header.h>

int main_bench()
{int a,b[3],c[3],i,n=0;
 my_scanf("%d",&a);
 if(a%3==0||a%5==0||a%7==0)
 { if(a%3==0) b[0]=3;
   else b[0]=0;
   if(a%5==0) b[1]=5;
   else b[1]=0;
   if(a%7==0) b[2]=7;
   else b[2]=0;

   for(i=0;i<3;i++)
	   if(b[i]!=0)
	   {c[n]=b[i];
	   n++;
	   }
   for(i=0;i<n-1;i++)
	   my_printf("%d ",c[i]);
   my_printf("%d\n",c[n-1]);

 }
  else
	  my_printf("n\n");
}