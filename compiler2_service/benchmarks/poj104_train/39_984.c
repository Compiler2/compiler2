#define NUM_ITER 460

#include <header.h>

int main_bench()
{
 int g[101],c[101],e[101],i,m,n,mon[101],max=0,sum=0,j;
 char name[101][20],west[101],leader[101];
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   for(j=0;;j++)
    {my_scanf("%c",&name[i][j]);
     if(name[i][j]==' ') break;}
   my_scanf(" %d%d",&g[i],&c[i]);
   my_scanf(" %c %c ",&leader[i],&west[i]);
   my_scanf("%d\n",&e[i]);
   mon[i]=0;
   if(g[i]>80 && e[i]>=1) mon[i]=mon[i]+8000;
   if(g[i]>85 && c[i]>80) mon[i]=mon[i]+4000;
   if(g[i]>90) mon[i]=mon[i]+2000;
   if(g[i]>85 && west[i]=='Y') mon[i]=mon[i]+1000;
   if(c[i]>80 && leader[i]=='Y') mon[i]=mon[i]+850;
   }
 for(i=0;i<n;i++)
  {
  if(mon[i]>max) {max=mon[i];m=i;}
  sum=sum+mon[i];
  }
 for(j=0;;j++)
 { if(name[m][j]!=' ') 
   my_printf("%c",name[m][j]);
   else {my_printf("\n");break;}
 }
 my_printf("%d\n%d",mon[m],sum);
 return 0;
}