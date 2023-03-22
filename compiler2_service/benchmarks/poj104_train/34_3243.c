#define NUM_ITER 298897

#include <header.h>

int move(int i)
{int j=i/2,k=i*3+1;
	if(i==1)
my_printf("End");
else if(i%2==0)
{
my_printf("%d/2=%d\n",i,j);
return(j);
}
else
{
my_printf("%d*3+1=%d\n",i,k);
return(k);
}
}
void hanoi(int n)
{int z;
	if(n==1)
move(n);
else
{z=move(n);
hanoi(z);
}
}
int main_bench()
{  
	int a;
my_scanf("%d",&a);
hanoi(a);
}