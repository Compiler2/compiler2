#include <header.h>

int main_bench()
{
 int a,b,i,m,n,j,k=0,t,g[100],l;
 my_scanf("%d %d",&a,&b);
 for(i=a;i<=b;i++)
 {t=i;m=1;n=0;
 while(t!=0)
 {m=t%10;t=t/10;n=n*10+m;}
 if(n==i)
 {for(j=2;j<i/2;j++)
 {if(i%j==0) break;
 if(j==i/2-1) {g[k]=i;k=k+1;}
 }
 }
 }
 if(k==0) my_printf("no");
 else my_printf("%d",g[0]);
 for(l=1;l<k;l++)
 {my_printf(",%d",g[l]);}
}