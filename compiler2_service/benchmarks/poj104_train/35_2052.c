#define NUM_ITER 461

#include <header.h>

int main_bench()
{
	int m,n,i,t=0,j,a[100][100],b[100]={0},c[100];
    my_scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&a[i][j]);
			if(a[i][j]>b[i])
				b[i]=a[i][j];
		}
	}
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			c[j]=a[0][j];
			if(a[i][j]<c[j])
				c[j]=a[i][j];
		}
	}	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(b[i]==c[j]){
		      my_printf("%d+%d",i,j);
              t=1;
			}
		}
	}
	if(t==0)
		my_printf("No");
	return 0;
}



