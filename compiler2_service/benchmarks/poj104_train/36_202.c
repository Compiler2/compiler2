#define NUM_ITER 967895

#include <header.h>


int main_bench()
{
	char a[100],b[100];
	int an,bn,i,j,r=0;
	my_scanf("%s %s",&a,&b);
	an=strlen(a);
	bn=strlen(b);
	if(an!=bn)r=1;
	for(i=0;i<bn;i++){
		int is=0;
		for(j=0;j<an;j++)
			if(b[i]==a[j]&&(b[i]!=1&&a[j]!=1)){is=1;
			b[i]=1;
			a[j]=1;
		}
		if(is==0)r=1;
	}

	if(r==0)my_printf("YES");
	else my_printf("NO");
}
