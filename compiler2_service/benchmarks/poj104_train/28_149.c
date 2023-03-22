#define NUM_ITER 74136

#include <header.h>

int main_bench()
{
int n[301];
int j,i=0,f=0;
for(j=0;j<301;j++) n[j]=0;

char c;
my_scanf("%c",&c);
while(c!='\n')
{if(c!=' ') {n[i]++;f=1;}
else if(c==' '&&f) {i++;f=0;}
my_scanf("%c",&c);}
my_printf("%d",n[0]);
for(j=1;j<=i;j++) my_printf(",%d",n[j]);
my_printf("\n");
}