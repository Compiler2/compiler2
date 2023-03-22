#define NUM_ITER 38916

#include <header.h>

int main_bench()
{
	int n,a[100],b[100],i,j,c[100],k=0,e;
	my_scanf("%d",&n);
	c[0]=0;
for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}

if(n==1){
if(a[0]<=140&&a[0]>=90&&b[0]>=60&&b[0]<=90) my_printf("1");
else my_printf("0");
}

if (n!=1){
		for(i=0;i<n;i++){
		if(a[i]<=140&&a[i]>=90&&b[i]>=60&&b[i]<=90){
			k++;
		for(j=(i+1);j<n;j++){
			if (a[j]>140||a[j]<90||b[j]<60||b[j]>90) break;
		}
			c[k]=j-i;
		}
	}
	for(i=0;i<k;i++){
		if(c[i]>c[i+1]){
			e=c[i];
			c[i]=c[i+1];
			c[i+1]=e;
		}
	}
	my_printf("%d",c[k]);
}
	return 0;



	
}

	   
       
