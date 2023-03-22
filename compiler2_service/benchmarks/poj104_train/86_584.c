#include <header.h>

int main_bench()
{
	int m=0,n,a[100][101],b[100],i,j,k;
	my_scanf("%d",&n);
	for(j=0;j<n;j++){
		my_scanf("%d",&m);
		if(m==0){
			b[j]=60;
			continue;
		}
		for(i=0;i<m;i++)
			my_scanf("%d",&a[j][i]);
		if(a[j][0]>60){
			b[j]=60;
			continue;
		}
		for(i=0;i<m;i++){
			a[j][i]+=(i+1)*3;
		}
		i--;
		for(k=0;a[j][i]>63;i--,k++);
		if(a[j][i]<64&&a[j][i]>60)
			b[j]=a[j][i]-(i+1)*3;
		else 
			b[j]=60-3*(m-k);
	}
	for(i=0;i<n;i++)
		my_printf("%d\n",b[i]);
	return 0;
}
