#define NUM_ITER 581

#include <header.h>

int main_bench()
{
	int i,k,n,l,s[100][100],m,a;
	my_scanf("%d%d",&n,&l);
	for(i=0;i<n;i++){
		for(k=0;k<l;k++){
			my_scanf("%d",&s[i][k]);
		}
	}
	if(n>=l){
		for(m=0;m<l;m++){
		    for(i=0,k=m;i<n,k>=0;i++,k--){
			    my_printf("%d\n",s[i][k]);
			}
		}
		for(m=l;m<n;m++){
		    for(i=m+1-l;i<=m;i++){
				k=m-i;
			    my_printf("%d\n",s[i][k]);
			}
		}
        for(m=n;m<n+l-1;m++){
		    for(i=m+1-l;i<n;i++){
				k=m-i;
			    my_printf("%d\n",s[i][k]);
			}
		}
	}
	else{
		for(m=0;m<n;m++){
		    for(i=0,k=m;i<n,k>=0;i++,k--){
			    my_printf("%d\n",s[i][k]);
			}
		}
		for(m=n;m<l;m++){
			for(i=0,k=m;i<n,k>m-n;i++,k--){
				my_printf("%d\n",s[i][k]);
			}
		}
	    for(a=1;a<n;a++){
		    for(i=a,k=l-1;i<n,k>=l-n+a;i++,k--){
			    my_printf("%d\n",s[i][k]);
			}
		}
	}
	return 0;
}