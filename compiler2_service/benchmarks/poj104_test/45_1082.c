#define NUM_ITER 1164308

#include <header.h>

int main_bench()
{
 char a[50],b[50];
 int i,j,k,m=0,p=0,d=1;
 int n[50];
 my_scanf("%s%s",a,b);
  for(j=0;b[j]!='\0';j++)
  {
    if(a[0]==b[j])
    { 
      m++;}
  }
  n[0]=0;
  for(i=1;i<m+1;i++)
 { 
   for(j=n[i-1];b[j]!='\0';j++)
  {
    if(a[0]==b[j]&&d==1)
    { 
       n[i]=j;
      d=0;
       }
  }
 }
 for(k=1;k<m+1;k++)
{ 
  for(i=0;a[i]!='\0';i++)
  { if(a[i]==b[n[k]+i])
    { p++;}
   }
  if(p==strlen(a))
  {my_printf("%d",n[k]);}
}
 return 0;
}
     
     