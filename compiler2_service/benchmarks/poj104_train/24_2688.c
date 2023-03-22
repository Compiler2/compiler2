#define NUM_ITER 34868

#include <header.h>

int main_bench()
{int n,i;
char a[30],max[30],min[30];
my_scanf("%d\n",&n);
my_scanf("%s",a);
strcpy(max,a); strcpy(min,a);
for(i=2;i<=n;i++)
{my_scanf("%s",a);
if(strlen(a)<strlen(min)) strcpy(min,a);
if(strlen(a)>strlen(max)) strcpy(max,a);
}
puts(max); puts(min);
return 0;
}