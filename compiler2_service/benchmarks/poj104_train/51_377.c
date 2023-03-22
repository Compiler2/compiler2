#define NUM_ITER 603959

#include <header.h>

int main_bench()
{
char c[10000],a[500][10]={0},b[10]={0};
int n,x=0,count[500]={0},max=0;
my_scanf("%d\n",&n);
gets(c);
for (int i=0;i+n<=strlen(c);i++)
    {
    for (int j=0;j<n;j++)
        {
        b[j]=c[i+j];
        }
    int pp=0;
    for (int j=0;j<x;j++)
        if (strcmp(b,a[j])==0)
        {
        pp=1;
        count[j]++;
        break;
        }
    if (pp==0) 
       {
       strcpy(a[x],b);
       x++;
       }
    }
for (int i=0;i<x;i++)
    {
    if (count[i]>max)
       {
       max=count[i];
       }
    }
if (max==0) {my_printf("NO");return 0;}
my_printf("%d\n",max+1);
for (int i=0;i<x;i++)
    {
    if (count[i]==max) 
       my_printf("%s\n",a[i]);
    }
}
