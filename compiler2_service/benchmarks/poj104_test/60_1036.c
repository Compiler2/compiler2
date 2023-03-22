#include <header.h>

int sushu(int m);
int main_bench()
{
    int n,s,i,j,k,l=0;
	my_scanf("%d",&n);
	for(i=1;i<n-1;i++){
        s=sushu(i);	    
		if(s==1) {
			k=i;
			k+=2;
			j=sushu(k);
			if(j==1) {my_printf("%d %d\n",k-2,k); l++;}
		}
	}
	if(l==0) my_printf("empty");
	return 0;
}
int sushu(int m)
{
    int i,s=0;
	for(i=2;i<m;i++){
		if(m%i==0) {
			s=0;
			break;
		}
		else s++;
	}
	if(s!=0) return 1;
	else return 0;
}