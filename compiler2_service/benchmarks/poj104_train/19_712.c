#define NUM_ITER 914889

#include <header.h>

main_bench()
{
 int i,j,m,n;
 char s[100],a[100],b[100]; 
 gets(s);
 gets(a);
 gets(b);
 n=strlen(s);
 m=strlen(a);
 for(i=0;i<=n-1;i++)
 {
  if(i==0&&s[0]==a[0])
  {
   for(j=1;j<=m-1;j++)
	if(s[j]!=a[j]) 
	break;
	if(j==m&&s[m]==' ')
	{
	 my_printf("%s",b);
	 i=i+m;
	}
   }
   if(s[i]==' '&&s[i+1]==a[0])
   {
	 for(j=1;j<=m-1;j++)
	  if(s[i+j+1]!=a[j]) break;
	  if(j==m&&(s[i+j+1]==' '||s[i+j+1]=='\0'))
	  {
		my_printf(" %s",b);
		i=i+m+1;
	  }
	 }
	 if(s[i]!='\0') 
		 my_printf("%c",s[i]);
 }
 }