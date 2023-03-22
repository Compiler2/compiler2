#include <header.h>

int main_bench()
{
    int n,s[100000],m,i,tmp=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&s[i]);
}
    my_scanf("%d",&m);
	for(i=0;i<n;i++)
    {
       if((s[i]!=m)&&(tmp==0)) 
	   {
		   my_printf("%d",s[i]);
		   tmp=1;
	   }
	   else if((s[i]!=m)&&(tmp==1))
	   {
		   my_printf(" %d",s[i]);
	   }
	   
    }
   return 0;
}