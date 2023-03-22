#define NUM_ITER 453422

#include <header.h>

int main_bench()
{char a[50],b[50];
int i,j=0,x,y;
my_scanf("%s%s",a,b);
x=strlen(a);
for(i=0;i<50;i++)
{if(b[i]==a[j])
j++;
if(j>(x-1)&&j!=0)break;
}
my_printf("%d",i+1-x);
}
