#include <header.h>


int main_bench()
{
	int j,n,i,zs[300],nzs[300],k=0,jihao[300];
	my_scanf ("%d",&n);
	for (i=0;i<n;i++){
		jihao[i]=-100;
	}
	for (i=0;i<n;i++){
		my_scanf ("%d",&zs[i]);
	}
    for (i=n-1;i>0;i--){
        for (j=i-1;j>=0;j--){
			if (zs[i]==zs[j]){
			jihao[i]=i;
			break;
            }
		}
	}
	for (i=0;i<n;i++){
			if (i!=jihao[i]){
				nzs[k]=zs[i];
                k++;
            }
	}
	for (i=0;i<k-1;i++){
		my_printf ("%d,",nzs[i]);
	}
	my_printf ("%d",nzs[k-1]);
	return 0;
}