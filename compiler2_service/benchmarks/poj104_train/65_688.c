#define NUM_ITER 37690

#include <header.h>

int main_bench()
{
	int n,sz[200][2],i,j,a,b;
	my_scanf("%d",&n);
	a=0;
	b=0;
    for(i=0;i<n;i++)
	{
       my_scanf("%d%d",&sz[i][1],&sz[i][2]);
       if(sz[i][1]==0&&sz[i][2]==1){
               a++;
	   }
       if(sz[i][1]==0&&sz[i][2]==2){
             b++;
	   }
       if(sz[i][1]==1&&sz[i][2]==0){
               b++;
	   }
       if(sz[i][1]==1&&sz[i][2]==2){
             a++;
	   }
       if(sz[i][1]==2&&sz[i][2]==0){
               a++;
	   }
       if(sz[i][1]==2&&sz[i][2]==1){
             b++;
	   }
       if(sz[i][1]==sz[i][2]){
            continue; 
	   }
	}
	if(a>b){
		my_printf("A");
	}
	else if(a<b){
        my_printf("B");
    }
	else{
        my_printf("Tie");
	}
	return 0;
}