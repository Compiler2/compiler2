#define NUM_ITER 1285712

#include <header.h>

int main_bench()
{int b,i,r,x,y,z,n;
char a[600];
my_scanf("%s",a);
n=strlen(a);
for(i=2;i<=n;i++)
{for(r=0;r<=n-i;r++)
{z=0;
for(y=0;y<=i/2;y++)
{if(a[r+y]!=a[r+i-1-y]){z=1;break;}

}
if(z==0)
for(b=r;b<=r+i-1;b++)
my_printf("%c",a[b]);
if(b==r+i-1)
{my_printf("\n");b=0;}
}
}
}