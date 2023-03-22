#include <header.h>

  int main_bench()
{
	  int a,b,n,i;
	  int p=0,q=0;
	  my_scanf("%d",&n);
	     for(i=0;i<n;i++)
		 {
		   my_scanf("%d%d",&a,&b);
		    if (a==2&&b==0)
			{p+=1;}
			else if(a==1&&b==2)
			{p+=1;}
			else if(a==0&&b==1)
			{p+=1;}
		    else if(b==2&&a==0)
			{q+=1;}
			else if(b==1&&a==2)
			{q+=1;}
			else if(b==0&&a==1)
			{q+=1;}
		    else if(a=b)
			{p+=0;}
		 }
		 
		 if(p>q)
		 {my_printf("A");}
		 else if(p<q)
		 {my_printf("B");}
         else if(p=q)
		 {my_printf("Tie");}
		 








           return 0;
	   }