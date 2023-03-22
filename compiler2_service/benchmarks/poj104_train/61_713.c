#include <header.h>

int main_bench(){
int n,i,m,j,d;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
       my_scanf("%d",&m);
	   if( m == 1 || m == 2 )
	   {
		   my_printf("%d\n",1);
		   continue;
	   }
	   int a = 1;
	   int b = 1;
	   for( j = 3; j <= m; j++ )
	   {
		   d = a + b;
		   a = b;
		   b = d;
	   }
	   my_printf("%d\n", d );
	}
	return 0;

}