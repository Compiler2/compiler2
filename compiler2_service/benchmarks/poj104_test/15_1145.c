#define NUM_ITER 681

#include <header.h>

int main_bench()
{
	int n,u[1000][1000],i,j,chang=0,bian=0,sum;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		my_scanf("%d",&u[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(u[i][j]==0){
				chang=chang+1;
			}
		}
		if(chang!=0){
			break;
		}
	}

	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(u[i][j]==0){
				bian=bian+1;
			}
		}
		if(bian!=0){
			break;
		}
	}
   sum=(chang-2)*(bian-2);
  my_printf("%d",sum);
	
      return 0;	
}

