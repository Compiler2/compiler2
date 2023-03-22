#define NUM_ITER 43162

#include <header.h>

int Compare1(const void*elem1,const void*elem2)
{
    int*p1,*p2;
    p1=(int*)elem1;
     p2=(int*)elem2;
    return(*p1)-(*p2);
}
int Compare2(const void*elem1,const void*elem2)
{
    int*p1,*p2;
    p1=(int*)elem1;
     p2=(int*)elem2;
    return(*p2)-(*p1);
}
main_bench()
{
int n;
my_scanf("%d",&n);
int i,p,q;
p=q=0;
float m[n],f[n];
for(i=0;i<n;i++)
{
char sex[7];
my_scanf("%s",sex);
if(sex[0]=='m')
{
my_scanf("%f",&m[p]);
p++;
}
if(sex[0]=='f')
{
my_scanf("%f",&f[q]);
q++;
}
}
qsort(m,p,sizeof(float),Compare1);
for(i=0;i<p;i++)
my_printf("%.2f ",m[i]);
qsort(f,q,sizeof(float),Compare2);
for(i=0;i<q;i++)
{
    if(i==q-1)
my_printf("%.2f",f[i]);
else
my_printf("%.2f ",f[i]);
}
}
