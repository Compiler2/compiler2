#include <header.h>

int main_bench(){
    int n,i,k,s[10000];
	int a=0,b,c;
	my_scanf("%d",&n);
	s[0]=n;
	if(n==1){
		my_printf("End");
	}
	if(n!=1){
	for(i=1;;i++){
		if(s[i-1]%2==1){
			s[i]=3*s[i-1]+1;
			my_printf("%d*3+1=%d\n",s[i-1],s[i]);
		}
		if(s[i]==1){
			my_printf("End");
			break;
		}
		if(s[i-1]%2==0){
			s[i]=s[i-1]/2;
			my_printf("%d/2=%d\n",s[i-1],s[i]);
		}
		if(s[i]==1){
			my_printf("End");
			break;
		}
	}
	}


		

	return 0;
}