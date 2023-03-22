#define NUM_ITER 1076935

#include <header.h>

int main_bench()
{char zi[105],shuzu[105];
int i,j;
gets(zi);
for(i=0;i<=strlen(zi)-1;i++)
{shuzu[i]=zi[i]+zi[i+1];}
shuzu[i-1]=zi[0]+zi[i-1];
for(i=0;i<=strlen(zi)-1;i++)
{my_printf("%c",shuzu[i]);}





 
getchar();
getchar();

}   