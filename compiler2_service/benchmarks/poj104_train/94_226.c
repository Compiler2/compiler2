#define NUM_ITER 17303

#include <header.h>


int main_bench()
{
	int a[1000];
	int s[1000];
	int n,k=0,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&(a[i]));
	}
     for(i=0;i<n;i++){
		 if(a[i]%2!=0){
			 s[k]=a[i];
			 k++;
		 }
	 }
	for(int m=1;m<=k;m++){
		for(int i=0;i<k-m;i++){
			if(s[i]>s[i+1]){
				int t=s[i+1];
				s[i+1]=s[i];
				s[i]=t;
			}
		}
	}
	for(i=0;i<k;i++){
		if(i==0){
		my_printf("%d",s[i]);
		}
		else 
			my_printf(",%d",s[i]);
	}
	return 0;
}
