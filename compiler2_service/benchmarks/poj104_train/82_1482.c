#define NUM_ITER 34874

#include <header.h>

int main_bench(){
	int a,b,i,n,m=0,p=-1,k=0;
	int sz[150]={0};
	my_scanf("%d",&n);
	if(n==1){
	my_scanf("%d%d",&a,&b);
	if(a>=90&&a<=140&&b>=60&&b<=90){
		p=0;
		}else{
			p=-1;
		}	
	}if(n>1){
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			sz[i]=1;
		}if(i>0){
			if(sz[i-1]==1&&sz[i]==1){
				m++;
				if(m>p){
				p=m;
			    }
			}else{
				m=0;
			}
			
		}
		
	}
	}if(p==-1){
	for(i=0;i<n;i++){
		if(sz[i]==1){
			k++;
		}
	}if(k!=0){
		p=0;
	}
}
	my_printf("%d",p+1);
	return 0;
}