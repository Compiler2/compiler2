#include <header.h>

struct point{
	int a;
	int b;
};

int main_bench(){
	int n,i,j=0,A,B,k;
	my_scanf("%d",&n);
	struct point range[n];
	for(i=0;i<n;i++){            
		my_scanf("%d%d\n",&(range[i].a),&(range[i].b));
	}
	A=range[0].a;     
	B=range[0].b;  
        for(k=0;k<n;k++){                  
	  for(i=1;i<n;i++){
		if(!(A>range[i].b||B<range[i].a)){
			if(B<range[i].b){
                           B=range[i].b;
                        }
			if(A>range[i].a){
			  A=range[i].a;
			}
		}
	  }
        }
 	for(i=0;i<n;i++){
          if(A>range[i].b||B<range[i].a){
             j++;
          }
        }
	if(j==0){
		my_printf("%d %d",A,B);
	}else{
		my_printf("no");
	}
	
	return 0;
}
