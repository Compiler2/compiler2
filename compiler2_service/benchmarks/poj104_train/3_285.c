#include <header.h>

int main_bench()
{
   int n,k,i,m[1000],a;
   my_scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
	   my_scanf("%d",&(m[i]));
       for(a=0;a<i;a++){
		   if(k==m[a]+m[i]){
			   my_printf("yes\n");
		       goto abc;
		   }
	   }
   }
   my_printf("no\n");
abc:	return 0;
}
