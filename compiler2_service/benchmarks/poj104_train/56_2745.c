#include <header.h>

void Reverse(int n)
{
     if(n>0)
	 {
        my_printf("%d",n%10);
        Reverse(n/10);
	 }
}
int main_bench()
{
     int num;
    my_scanf("%d",&num);
     Reverse(num);
     my_printf("\n");
     return 0;
}