#define NUM_ITER 569

#include <header.h>

int main_bench(){
    int n,sz[100000],b=0,c,f=0,d,e,i,row1,row2,col1,col2;
    my_scanf("%d",&n);
    for(i=0;i<n*n;i++){
		my_scanf("%d",&sz[i]);
		if(sz[i]==0){
		b+=1;
		if(b==1)
		d=i;
	    }
	}
	for(i=0;i<n*n;i++){
	    if(sz[i]==0){
		f+=1;
		if(f==b)
		e=i;
	    }
	}
	row1=d/n;
	col1=d%n;
	row2=e/n;
	col2=e%n;
	c=(col2-col1+1)*(row2-row1+1)-b;
	my_printf("%d",c);
	    return 0;
}
              