#include <header.h>

int jiaogu(int n)
{if(n==1) my_printf("End");
else 
{if(n%2==1) {my_printf("%d*3+1=%d\n",n,3*n+1);jiaogu(3*n+1);}
else {my_printf("%d/2=%d\n",n,n/2);jiaogu(n/2);}
}
return 0;
}

int main_bench()
{int n;
my_scanf("%d",&n);
jiaogu(n);
return 0;
}