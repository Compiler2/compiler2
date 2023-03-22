#define NUM_ITER 1007051

#include <header.h>

int main_bench()
{
 int i,x=0,n1,n2,n;
 char a[80],b[80];
 gets(a);
 gets(b);
 n1=strlen(a);
 n2=strlen(b);
 if(n1<=n2) n=n2;
 else n=n1;
 for(i=0;i<n;i++)
 {
 	if(a[i]>='a'&&a[i]<='z')
 		{a[i]=a[i]-32;}
	 if(b[i]>='a'&&b[i]<='z')
 	{b[i]=b[i]-32;}
 }  
 for(i=0;i<n;i++)
{ 
  if(a[i]==b[i])
  x=x+1;
  else
  if(a[i]>b[i]) {my_printf(">");break;}
  else
  if(a[i]<b[i]) {my_printf("<"); break;}
}
 if(x==n)
 my_printf("=");
}
