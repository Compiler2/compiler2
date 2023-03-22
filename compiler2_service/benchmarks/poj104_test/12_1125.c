#define NUM_ITER 338784

#include <header.h>

int main_bench()
{
	int a,b[100][15],c,i,m,x,y,n,e;
	c=0;
    i=0;
		for(m=0;m<16;m++){
			my_scanf("%d",&a);
			  if(a!=0){
		        b[i][m]=a;
				}
			  if(a==0){
				 	for(x=0;x<m;x++){
					 for(y=0;y<m;y++){
						n=b[i][x]/b[i][y];	
						e=b[i][x]%b[i][y];
                           if(n==2&&e==0){
							c++;
						}
					}	
				}
			my_printf("%d\n",c);
			 c=0;
			 m=-1;
			 i++;
		} 
		if(a==-1)
				break;
		}
		return 0;
		}
