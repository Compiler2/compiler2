#define NUM_ITER 103321

#include <header.h>

int main_bench(){ 
	int p,q,y;
    int sz[5][5];
    for(int row=0;row<5;row++){
		for(int col=0;col<5;col++){
            my_scanf("%d",&sz[row][col]);
		}
	}
	

	y=0;
	
	for(int row=0;row<5;row++){
		for(int col=0;col<5;col++){
			p=0;
			q=0;
            for(int m=0;m<5;m++){
				if(m!=col&&sz[row][col]>sz[row][m]){
				   p+=1;
				}
				if(m!=row&&sz[row][col]<sz[m][col]){
				   q+=1;
				}
			}
						if(p==4&&q==4){
				my_printf("%d %d %d",row+1,col+1,sz[row][col]);
                y+=1;
		
			}
		}
    }
	
	if(y==0){
		my_printf("not found");
   
		}

    return 0; 
  } 
