#define NUM_ITER 7059

#include <header.h>

int main_bench()
{
	int n,i,x,j,k,p,s=0;
	int month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=0;
		my_scanf("%d %d %d",&x,&j,&k);
		if(x%4==0&&x%100!=0||x%400==0)
		{
			if(j<k)
			{
               for(p=j;p<k;p++)
			   {
				   s+=month2[p];
			   }
			   if(s%7==0)
			   {
				   my_printf("YES\n");
			   }
			   else
			   {
				   my_printf("NO\n");
			   }
			}
			else if(j>k)
			{
               for(p=k;p<j;p++)
			   {
				   s+=month2[p];
			   }
			   if(s%7==0)
			   {
				   my_printf("YES\n");
			   }
			   else
			   {
				   my_printf("NO\n");
			   }
			}
		}
		else
		{
           if(j<k)
		   {  
               for(p=j;p<k;p++)
			   {
				   s+=month1[p];
			   }
			   if(s%7==0)
			   {
				   my_printf("YES\n");
			   }
			   else
			   {
				   my_printf("NO\n");
			   }
			}
			else if(j>k)
			{
               for(p=k;p<j;p++)
			   {
				   s+=month1[p];
			   }
			   if(s%7==0)
			   {
				   my_printf("YES\n");
			   }
			   else
			   {
				   my_printf("NO\n");
			   }
			}
		}
	}
	return 0;
}