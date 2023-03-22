#define NUM_ITER 234272

#include <header.h>


int main_bench()
{int haha(int a,int b,int s[5][5]);
int t[5][5];
int m,n,i,j,c;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{my_scanf("%d",&t[i][j]);}
my_scanf("%d%d",&m,&n);
c=haha(m,n,t);
if(c==0)
my_printf("error");
else
{
for(i=0;i<5;i++)
{for(j=0;j<4;j++)
{my_printf("%d ",t[i][j]);}
my_printf("%d",t[i][4]);
my_printf("\n");}
}
return 0;
}
int haha(int a,int b,int s[5][5])
{
int k[5];
int i;
if(a<0||a>4||b<0||b>4)
return 0;
else
{for(i=0;i<5;i++)
{k[i]=s[a][i];
s[a][i]=s[b][i];
s[b][i]=k[i];
}
return 1;
}
}