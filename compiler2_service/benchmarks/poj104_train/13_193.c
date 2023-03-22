#include <header.h>

int main_bench()
{
	int n,i,j;

     my_scanf("%d",&n);

    int a[30000]={0};

     for (i=0;i<=n-1;i++)
{ 
my_scanf("%d",&a[i]);

}
my_printf("%d",a[0]);
for (i=0;i<=n-1;i++)
   
{
  for (j=0;j<=n-1;j++)
   {
if (a[i]==a[j]) break;


if (j==i-1) 
{ 

	my_printf(" ");
	my_printf("%d",a[i]);


}
}

}

return 0;
}
