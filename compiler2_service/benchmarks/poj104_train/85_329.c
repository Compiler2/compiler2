#define NUM_ITER 30438

#include <header.h>

main_bench()
{
   char s[21];
   int i,n,len,j,x=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   x=0;
	   my_scanf("%s",s);
	   len=strlen(s);
	   if((s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z')||s[0]=='_')
	   {
		   for(j=1;j<len;j++)
		   {
		       if((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9')||(s[j]=='_'))    x=x+0;
			   else x=x+1;
		   }
	       if(x==0)  my_printf("yes\n");
	       else  my_printf("no\n");
	   }
	   else my_printf("no\n");
   }
}