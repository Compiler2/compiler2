#include <header.h>

int main_bench()
{
int n,i;
double t,s,h,y,lt,ls,lh,ly;
int k[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d ",&k[i]);
if(k[i]<=18)
t++;
else if(k[i]>18&&k[i]<=35)
s++;
else if(k[i]>35&&k[i]<=60)
h++;
else if(k[i]>60)
y++;
}
t=(double)t/n;
s=(double)s/n;
h=(double)h/n;
y=(double)y/n;
lt=100*t;
ls=100*s;
lh=100*h;
ly=100*y;
my_printf("1-18: %.2lf%\n",lt);
my_printf("19-35: %.2lf%\n",ls);
my_printf("36-60: %.2lf%\n",lh);
my_printf("60??: %.2lf%\n",ly);
return 0;
}
