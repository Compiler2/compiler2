#include <header.h>


int main_bench()
{
int  i,j,t,l,p,sum=0;

double b,n;

char z[500],s[500];

my_scanf("%lf",&n);

my_scanf("%s",z);

my_scanf("%s",s);

l=strlen(z);

p=strlen(s);

if(l!=p)
{
  

  my_printf("error");
}
else
{
   for(i=0;i<l;i++)
   {
      if(z[i]=='A'&&s[i]=='A') sum++;

	  else  if(z[i]=='T'&&s[i]=='T') sum++;

	  else  if(z[i]=='C'&&s[i]=='C') sum++;

	  else  if(z[i]=='G'&&s[i]=='G') sum++;

	  else if((z[i]!='A'&&z[i]!='T'&&z[i]!='C'&&z[i]!='G')||(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G'))
	  {
		 t=0;
		 
		 break;
	  }
   }

   if(t==0) my_printf("error");

   else 
   {
	   b=(double)sum/l;

	   if(b>n)
	   my_printf("yes");

	   else my_printf("no");
   }
}
 
 
 
 

return 0;



}