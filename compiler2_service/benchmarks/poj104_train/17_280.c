#define NUM_ITER 16724

#include <header.h>

int main_bench()
{
 int i,j,k,l,n,m;
 char a[150],b[150];
 for(m=0;m<1000;m++)
 {for(i=0;i<150;i++)
   a[i]=0,b[i]=0;
  my_scanf("%s",a);
  l=strlen(a);
  if(l==0) break;
  for(i=0;i<l;i++)
   b[i]=a[i];
  for(i=0;i<l;i++)
   for(j=0;j<l;j++)
    if(a[j]=='(')
    {for(k=j+1;k<l;k++)
     {if(a[k]=='(') break;
      if(a[k]==')') 
      {a[j]='a',a[k]='a';break;}}}
  my_printf("%s\n",b);
  for(i=0;i<l;i++)
  {if(a[i]=='(') my_printf("$");
   else if(a[i]==')') my_printf("?");
   else my_printf(" ");}
  my_printf("\n");
  
  }
}
