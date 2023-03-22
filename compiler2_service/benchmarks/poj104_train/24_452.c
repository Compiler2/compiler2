#define NUM_ITER 190559

#include <header.h>

int main_bench()
{
    char ch[1000];
    int a[50]={0};
    gets(ch);
    int m;
    m=strlen(ch);
    int i,j=0;
    for(i=0;i<=m-1;i++)
    {if(ch[i]==' '||ch[i]=='\n')
    j++;
    else 
    a[j]++;}
    int max=0,min=100,q,p;
    for(i=0;i<=j;i++)
    {if(max<a[i])
    {max=a[i];
    q=i;}
    if(min>a[i])
    {min=a[i];
    p=i;}
}
if(q==0)
{for(i=0;ch[i]!=' ';i++)
my_printf("%c",ch[i]);my_printf("\n");}
else
{int num=0;

for(i=0;i<=m-1;i++)
{ if(ch[i]==' ')
  num++;
  else if(num==q)
  my_printf("%c",ch[i]);
}
  my_printf("\n");
  
  
    
    

}
if(p==0)
{for(i=0;ch[i]!=' ';i++)
my_printf("%c",ch[i]);
my_printf("\n");}
else 
{int mum=0;
for(i=0;i<=m-1;i++)
{if(ch[i]==' ')
 mum++;
else if(mum==p)
my_printf("%c",ch[i]);
if(mum==p+1)
  {my_printf("\n");
  break;}
}}

    
    
    
    
    
    
    
  

  return 0;
}
