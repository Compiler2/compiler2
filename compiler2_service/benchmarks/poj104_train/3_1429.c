#define NUM_ITER 49199

#include <header.h>

int main_bench(){
int n,y,sz[1000],x;

my_scanf("%d",&n);
my_scanf("%d",&y);

for(int j=0;j<n;j++){

   my_scanf("%d",&sz[j]);
}
 

for(int k=0;k<=n-1;k++){

	for(int i=0;i<n;i++){
	   
		if(sz[k]+sz[i]==y){
		
		    x=1;
		
		break;
		}
		
		if((i==n-1)&&(sz[k]+sz[i]!=y)){
		   x=0;
		
		}
	
	}

                     
	if(x==1){
	my_printf("yes");
	
	break;
	}

    if((k==n-1)&&(x==0)){
	my_printf("no");
	
	
	}



}













return 0;

}