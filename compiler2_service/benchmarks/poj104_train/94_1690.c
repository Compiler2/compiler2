#include <header.h>

int main_bench(){
	int sz[500];
	int n;
	my_scanf("%d",&n);
	int a=0;
	for(int i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		if(sz[i]%2!=0)
			a++;
	}
    int e;
    for(int k=1;k<=n;k++){
	   for(int i=0;i<n-k;i++){
		  if(sz[i]>sz[i+1]){
					e=sz[i+1];
					sz[i+1]=sz[i];
					sz[i]=e;
			}
	}
}

    for(int m=0,b=0;m<n;m++){
		if(sz[m]%2!=0){
			b++;
			if(b==a)
				my_printf("%d",sz[m]);
			else
				my_printf("%d,",sz[m]);
		}
	}
	return 0;
}

