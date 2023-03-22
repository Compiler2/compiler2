#include <header.h>

int main_bench()
{
	int n, i, j, num[20000] , st[91] , tot=0 ;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)my_scanf("%d",&num[i]);
	for( i=0 ; i<n ; i++ )
	{
	  for( j=0 ; j<i ; j++ ) if(num[j]==num[i])break;
	  
	  if( j==i ) st[++tot]=num[i];
	}
	for( i=1 ; i<tot ; i++ ) my_printf("%d ",st[i]);
	my_printf("%d",st[tot]);
}
