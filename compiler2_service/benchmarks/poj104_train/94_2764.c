#define NUM_ITER 6228

#include <header.h>

int main_bench()
{
    int n,i,j,num,js;
    int sz[500];
	my_scanf("%d\n",&n);
    for(i=0;i<n;i++){
	my_scanf("%d", &(sz[i]));
	}
       num=0;
    for(i=0;i<n;i++){
	if(sz[i]%2==1){
		    num++;
		}
	}
	i=0;
	js=1;
	while(i<num){
        for(j=0;j<n;j++){
		    if(sz[j]==js){
			    my_printf("%d",sz[j]);	
		        i=i+1;
                   if(i<num){
            my_printf(",");}
				
			}
		}
	js=js+2;
	}

	return 0;
}