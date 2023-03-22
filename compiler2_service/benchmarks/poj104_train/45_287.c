#define NUM_ITER 1168442

#include <header.h>

int main_bench()
{
char a[50],b[50];
int i,j,k;
my_scanf("%s",a);my_scanf("%s",b);
for(i=0;b[i]!='\0';i++)
{k=i;
for(j=0;a[j]!='\0'&&a[j]==b[k];j++,k++)
;
if(a[j]=='\0')break;}
my_printf("%d",i);
}