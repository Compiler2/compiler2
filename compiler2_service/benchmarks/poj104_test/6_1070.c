#define NUM_ITER 31

#include <header.h>

int main_bench()
{   int k,x,i,j,sum;
    int m,n;
	int a[100][100],b[100];
	my_scanf("%d",&k);
	for(x=0;x<k;x++){
		sum=0;
        my_scanf("%d %d",&m,&n);
		if((m>=3)&(n>=3))
		{
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				my_scanf("%d",&a[i][j]);}
		}
		for(i=0;i<m;i++){sum+=a[i][0];}
		for(i=0;i<m;i++){sum+=a[i][n-1];}
		for(j=0;j<n;j++){sum+=a[0][j];}
		for(j=0;j<n;j++){sum+=a[m-1][j];}
		sum=sum-a[0][0]-a[m-1][0]-a[0][n-1]-a[m-1][n-1];
		b[x]=sum;
	    }
	    else
		{for(i=0;i<m;i++){
		     for(j=0;j<n;j++)
			 {my_scanf("%d",&a[i][j]);
sum=sum+a[i][j];}
		}
		 b[x]=sum;
	    }
	}
	for(x=0;x<k;x++)
		my_printf("%d\n",b[x]);
	return 0;
}