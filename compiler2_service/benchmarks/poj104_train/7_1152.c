#define NUM_ITER 949498

#include <header.h>

int main_bench()
{
   char str[257],substr[257],rep[257];
   int i,j=0,m,n,g=0;
   my_scanf("%s",str);
   my_scanf("%s",substr);
   my_scanf("%s",rep);
   m=strlen(str);
   n=strlen(substr);
   for(i=0;i<m;i++)
	   if(str[i]==substr[j]&&g<n)
	   {
		   j++;
           g++;
	   }
	   else if(g>=n)
		   break;
	   else {g=0;j=0;}
   if(g==n)
	   for(j=0,i=i-n;j<n;j++,i++)
	   {
		   str[i]=rep[j];
	   }
   my_printf("%s",str);
   return 0;
}
