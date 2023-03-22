#include <header.h>

int main_bench()
{int n,v[20000],m=0,s[20000],p=0;
 my_scanf("%d",&n);
 for(int i=0;i<=n-1;i++)
 {
   my_scanf("%d",&v[i]);
 }
for(int j=1;j<=n-1;j++)
 { 
  for(int k=0;k<=j-1;k++)
   {
     if(v[j]!=v[k]) 
     {p++;}
   } 
   if(p==j){s[m]=v[j];m++;}
   p=0;
 }
if(m==0)
 {my_printf("%d",v[0]);}
else
{my_printf("%d ",v[0]);}
for(int k=0;k<=m-1;k++)
 {
   if(k==m-1){my_printf("%d",s[k]);}
   else {my_printf("%d ",s[k]);}     
 }

}
