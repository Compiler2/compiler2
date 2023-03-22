#include <header.h>

int main_bench(){
int n,k,sz[1000],b=0,c,q,i,j,e;
my_scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
my_scanf("%d",&sz[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		q=sz[i]+sz[j];
		if(q==k) 
		{
			my_printf("yes");
			return 0;
		}
	}
}
my_printf("no");

   


return 0;
}


