#include <header.h>

int main_bench()
{
	int n,k,he=0, shu[1000],i,j,c=0,d=0;
	my_scanf ("%d %d", &n, &k);
	for (i=0; i<n; i++)
		my_scanf ("%d", &shu[i]);
    for (i=0;i<n; i++){
		for (j=i+1;j<n;j++){
			he=shu[i]+shu[j];
			if (he==k)
				d++;
			c++;
			}
	}
	if (d==0)
		my_printf ("no");
	else 
		my_printf ("yes");
	return 0;
}

