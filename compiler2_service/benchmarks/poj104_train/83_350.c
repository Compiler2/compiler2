#define NUM_ITER 23673

#include <header.h>

int main_bench()
{ int n,i,b[100];
float d[100],s=0,a[100],c=0;
my_scanf("%d\n",&n);
for(i=0;i<n;i++)
{my_scanf("%f",&a[i]);}
for(i=0;i<n;i++)
{my_scanf("%d",&b[i]);}
for(i=0;i<n;i++)
{if(b[i]<=100&&b[i]>=90) d[i]=(float)(4.0*a[i]);
else if(b[i]<=89&&b[i]>=85) d[i]=(float)(3.7*a[i]);
else if(b[i]<=84&&b[i]>=82) d[i]=(float)(3.3*a[i]);
else if(b[i]<=81&&b[i]>=78) d[i]=(float)(3.0*a[i]);
else if(b[i]<=77&&b[i]>=75) d[i]=(float)(2.7*a[i]);
else if(b[i]<=74&&b[i]>=72) d[i]=(float)(2.3*a[i]);
else if(b[i]<=71&&b[i]>=68) d[i]=(float)(2.0*a[i]);
else if(b[i]<=67&&b[i]>=64) d[i]=(float)(1.5*a[i]);
else if(b[i]<=63&&b[i]>=60) d[i]=(float)(1.0*a[i]);
else if(b[i]<60) d[i]=0;
}
for(i=0;i<n;i++)
{s=(float)(s+d[i]);c=(float)(c+a[i]);
}
s=(float)(s/c);
my_printf("%.2f",s);
}