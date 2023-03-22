#include <header.h>

int main_bench()
{int n=0,p,i,j,t,k;
int sl[301],cz[301];
for(i=0;i<301;i++)
	{my_scanf("%d%d",&(sl[i]),&(cz[i]));
		if(sl[i]==0){break;}
		n=n+1;
	}
	k=1;
for(t=0;t<n;t++){
	for(i=1;i<=sl[t];i++){
		k=(k+cz[t]-1)%i+1;}
	my_printf("%d\n",k);
	}
return 0;
}
