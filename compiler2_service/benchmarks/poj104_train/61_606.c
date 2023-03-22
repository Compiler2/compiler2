#include <header.h>

int main_bench(){
	int n,i,m,j,r;
	int sz[1000];
	int s[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){		
		s[0]=1;
	    s[1]=1;
	my_scanf("%d",&m);
	if(m==1||m==2){
		sz[i]=1;
	}
	else{
	for(j=2;j<m;j++){
      r=s[j-1]+s[j-2];
	  s[j]=r;
           	}
	    sz[i]=r;
	}
	}
	for(i=0;i<n;i++){
	my_printf("%d\n",sz[i]);
	}
	return 0;
}
