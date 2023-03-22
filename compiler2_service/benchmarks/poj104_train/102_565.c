#include <header.h>

int main_bench(){
	int i,k,n;
	double sz[99],e;
	char tmp[9],sex[99][99];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s%lf",sex[i],&sz[i]);
	
	}
	for(k=0;k<n;k++){
		for(i=0;i<(n-k);i++){
			if(sex[i][0]=='m'&&sex[i+1][0]=='m'&&sz[i]>sz[i+1]||sex[i][0]=='f'&&sex[i+1][0]=='m'||sex[i][0]=='f'&&sex[i+1][0]=='f'&&sz[i]<sz[i+1])
			{
				strcpy(tmp,sex[i]);
				strcpy(sex[i],sex[i+1]);
				strcpy(sex[i+1],tmp);
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
			}
		}
	}
	for(i=0;i<n;i++){
		if(i==0){
			my_printf("%.2lf",sz[i]);
		}else{
			my_printf(" %.2lf",sz[i]);
		}
	}





return 0;

}