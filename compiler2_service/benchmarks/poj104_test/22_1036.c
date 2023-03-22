#include <header.h>

int main_bench()
{
int a[300],n,i,j,max,sec;
char c;
i=0;
do
{
my_scanf("%d%c",&a[i],&c);
i++;
}
while(c!='\n');
n=i;
max=a[0];
sec=-1;;
for(i=1;i<n;i++)
{
if(a[i]>max){sec=max;max=a[i];}
else if(a[i]<max&&a[i]>sec)sec=a[i];
else ;
}
if(sec!=-1) my_printf("%d",sec);
else my_printf("No");
return 0;
}