#define NUM_ITER 231489

#include <header.h>


int main_bench()
{ char b[100][20]={0};
char a[100]={0};
   int i,n,j,t;
gets(a);
n=0;
for(i=0;a[i]!='\0';i++)
if(a[i]==' ')n=n+1;

n=n+1;
t=0;

for(i=0;i<n;i++)
{
 for(j=0;j<100;j++)
 {if(a[t]!=' ') {b[i][j]=a[t];t=t+1;}
 if(a[t]==' ')break;
 }
 t=t+1;
}
my_printf("%s",b[n]);
for(i=n-1;i>0;i=i-1)
my_printf("%s ",b[i]);



my_printf("%s",b[0]);

}
