#include <header.h>




int main_bench(){
	int n,i,j,k,a,b;
	double g,s[48],m[48],f[48];
	char qb[48][9];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s %lf",qb[i],&s[i]);
	}
	j=0;
	k=0;
	for(i=0;i<n;i++){	
		if(strlen(qb[i])==4){
			m[j]=s[i];
			j++;
		}
		else{
			f[k]=s[i];
			k++;
		}
	}
	for(a=1;a<=j;a++){
		for(b=0;b<j-a;b++){
			if(m[b]>m[b+1]){
				g=m[b];
				m[b]=m[b+1];
				m[b+1]=g;
			}
		}
	}
	for(a=1;a<=k;a++){
		for(b=0;b<k-a;b++){
			if(f[b]<f[b+1]){
				g=f[b];
				f[b]=f[b+1];
				f[b+1]=g;
			}
		}
	}
	for(a=0;a<j;a++){
		if(a==0)
			my_printf("%.2lf",m[a]);
		else
			my_printf(" %.2lf",m[a]);			
	}
	for(b=0;b<k;b++){
		my_printf(" %.2lf",f[b]);
	}
	return 0;	
}
