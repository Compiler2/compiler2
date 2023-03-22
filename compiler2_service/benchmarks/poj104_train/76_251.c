#include <header.h>

int main_bench()
{
int n,i,k,q,l;
my_scanf("%d",&n);
struct qujian{
int x,y;
}asd[50001];
for(i=0;i<n;i++)
{my_scanf("%d %d",&(asd[i].x),&(asd[i].y));
}
for(i=0;i<n;i++)
{for(l=0;l<n-1;l++)
{if(asd[l].x>asd[l+1].x)
{k=asd[l].x;
asd[l].x=asd[l+1].x;
asd[l+1].x=k;
}
if(asd[l].y>asd[l+1].y)
{k=asd[l].y;
asd[l].y=asd[l+1].y;
asd[l+1].y=k;
}
}
}
q=1;

for(i=asd[0].x;i<=asd[n-1].y;i++)
{for(l=0;l<n;l++)
{if(asd[l+1].x>asd[l].y)
{
if((i<=asd[l+1].x)&&(i>=asd[l].y))
{q=0;}
}
}
}
if(q==1)
{my_printf("%d %d",asd[0].x,asd[n-1].y);}

else if(q==0)
{my_printf("no");}

return 0;
}
