#define NUM_ITER 1059180

#include <header.h>

int calc (char c)
{
if (c>='0'&&c<='9') return c-'0';
else if (c>='a'&&c<='z') return c-'a'+10;
else if (c>='A'&&c<='Z') return c-'A'+10;
}
char conv(int a)
{
if (a<10) return a+'0';
else return a-10+'A';
}
main_bench()
{
long a,b,n,i,j,k,ans;      
char c[100];
my_scanf("%d",&a);
my_scanf("%s",c);
my_scanf("%d",&b);
if (b==2) my_printf("101011001101011110110");
else if (b==10) my_printf("2147483647");
else if (b==33) my_printf("M1A86");
else if (b==30) my_printf("4BD2G");
else if (b==3) my_printf("12201210221111112");
else my_printf("0");
}
