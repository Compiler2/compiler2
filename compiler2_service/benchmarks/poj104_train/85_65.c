#define NUM_ITER 1503454

#include <header.h>


int main_bench()
{
	char s[100],sn;
	int n,i,j,k;
	gets(&sn);
	n=atoi(&sn);
    for (i=0;i<n;i++)
	{
		k=0;
       gets (s);
	   if ((s[0]>=65&&s[0]<=90)||(s[0]>=97&&s[0]<=122)||(s[0]==95))
	   {
		   for (j=1;s[j]!='\0';j++)
		   {
               if( !((s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122)||(s[j]==95)||(s[j]>=48&&s[j]<=57)))
			   {
				   my_printf("no\n");
				   k=1;
				   break;
			   }
			  
			   
		   }
		   if (k==0)
			   my_printf ("yes\n");
	   }
	   else 
		   my_printf ("no\n");
	}
	return 0;
}