#define NUM_ITER 29875

#include <header.h>

int main_bench()
{
	int n,i,a=0,b=0,j;
	char s[20];
	double m[1000],w[1000],t=1.50,z;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s %lf",s,&t);
		if(s[0]=='m'){
			m[a]=t;
			a++;
		}else if(s[0]=='f'){
			w[b]=t;
			b++;
		}
	}



	for(i=1;i<a;i++){
		for(j=0;j<a;j++){
			if(m[j]<m[j+1]){
				z=m[j];
				m[j]=m[j+1];
				m[j+1]=z;
			}
		}
	}

	for(i=1;i<b;i++){
		for(j=0;j<b;j++){
			if(w[j]<w[j+1]){
				z=w[j];
				w[j]=w[j+1];
				w[j+1]=z;
			}
		}
	}


	for(i=a-1;i>=0;i--){
		my_printf("%.2lf ",m[i]);
	}


	for(i=0;i<b;i++){
		if(i<b-1){
			my_printf("%.2lf ",w[i]);
		}else if(i==b-1){
			my_printf("%.2lf",w[i]);	
		}
	}

	return 0;
}
