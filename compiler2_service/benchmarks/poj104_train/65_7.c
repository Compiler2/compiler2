#define NUM_ITER 37669

#include <header.h>

int main_bench()
{int a,n,b,c=0,d=0,i;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{my_scanf("%d %d",&a,&b);
if (a==0)
{if(b==1)
c+=1;
if(b==2)
d+=1;
}

if (a==1)
{if(b==2)
c+=1;
if(b==0)
d+=1;
}

if (a==2)
{if(b==1)
d+=1;
if(b==0)
c+=1;
}
}
if(c>d)
my_printf("A");

if(c<d)
my_printf("B");

if(c==d)
my_printf("Tie");

return 0;
}