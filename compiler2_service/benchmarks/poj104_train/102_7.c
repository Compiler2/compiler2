#include <header.h>

int main_bench()
{
int n; 
my_scanf("%d",&n);
double m[40],f[40];
int nm=0,nf=0;
int i;
for (i=0; i<n; i++)
{
char sex[7]; 
double h;
my_scanf("%s%lf",sex,&h);
if (sex[0]=='m') 
{
nm++;
m[nm-1]=h;
}
else 
{
nf++;
f[nf-1]=h;
}
}

int j;
for (i=0; i<nm-1; i++)
for (j=i+1; j<nm; j++)
if (m[i]>m[j])
{
double t=m[i];
m[i]=m[j];
m[j]=t;
}

for (i=0; i<nf-1; i++)
for (j=i+1; j<nf; j++)
if (f[i]<f[j])
{
double t=f[i];
f[i]=f[j];
f[j]=t;
}

for (i=0; i<nm; i++) my_printf("%.2lf ",m[i]);
for (i=0; i<nf; i++) 
{
my_printf("%.2lf",f[i]);
if (i<nf-1) my_printf(" "); else my_printf("\n");
}

return 0;
}

