#include <header.h>

void ysfwt(int n,int m)
{ 
	int i,s=0;  
	for(i=2;i<=n;i++) s=(s+m)%i; 
    my_printf("%d\n",s+1);
}
int main_bench()
{
	int j,n,m;
	for(j=0;;j++)
	{my_scanf("%d %d",&n,&m);
	if(m!=0&&n!=0) ysfwt(n,m);
	else break;}
}


