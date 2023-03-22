#include <header.h>

int main_bench()
{
	char a[500];
	int m,n,N,i,j,k,B,x;
	gets(a);
	N=strlen(a);
	for(k=2;k<N;k++){
		for(B=1,j=0;j<N-k+1;j++){
			for(m=j,n=m+k-1;m<n;m++,n--){
				if(a[m]==a[n]) B=1;
				else  {B=0;break;}
			}
		if(B==1) {for(i=j,x=0;x<k;i++,x++) my_printf("%c",a[i],m,n);my_printf("\n");}
		}
	}
	return 0;
}
