#include <header.h>

int main_bench()
{
   int i,n,k,j;
   my_scanf("%d",&n);
   char s[256];
   for(i=1;i<n+1;i++)
   {
	   my_scanf("%s",s);
       strlen(s);
       k=strlen(s);
       char ss[256];
       for(j=0;j<k;j++)
	   {
		   if(s[j]=='A')
		   {
			   ss[j]='T';
		   }
		   if(s[j]=='T')
		   {
			   ss[j]='A';
		   }
		   if(s[j]=='G')
		   {
			   ss[j]='C';
		   }
		   if(s[j]=='C')
		   {
			   ss[j]='G';
		   }
	   }
	   ss[j]='\0';
	   my_printf("%s\n",ss);
   }
   return 0;
}

