#define NUM_ITER 376525

#include <header.h>

int main_bench()
{
   int i,j,t,k;
   my_scanf("%d\n",&t);
   for(i=0;i<t;i++)
   {
	   int a[256],len,m=0;
	   char c[10000];
	   memset(a,0,sizeof(a));
	   my_scanf("%s",c);
	   len=strlen(c);
	   for(j=0;j<len;j++)a[c[j]]++;
	   for(j='a';j<'z';j++)
	   {
	   if (a[j]==1) m++;
		}
        if(m==0)
	   {
		   my_printf("no");
		   return 0;
	   }
	   for(j=0;j<len;j++)
	   { 
	       if(a[c[j]]==1)
		   {
				   my_printf("%c\n",c[j]);
				   goto loop;	   
		   }
	   }
       loop:
	   continue;
   }
}