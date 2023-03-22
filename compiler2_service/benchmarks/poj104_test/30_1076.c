#define NUM_ITER 66086

#include <header.h>


int t;
int fun(int n)
{
int x;
if (n % 7 == 0) return 0;
while (n >= 10){
x= n - n/10*10;
if (x == 7) return 0;
n=n/10;
}
if (n % 7 == 0) return 0;
return 1;
}

int main_bench()
{
 int n;
 int i,s = 0;
 my_scanf("%d",&n);
 for (i = 1;i <= n;++i)
 {

s = s + i*i*fun(i);    
 }
 my_printf("%d",s);
 return 0;
} 