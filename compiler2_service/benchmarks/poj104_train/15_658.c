#include <header.h>

int main_bench(){
	int length,i,j,temp,start=-1,end;
	my_scanf("%d",&length);
	for(i=0;i<length;i++)
		for(j=0;j<length;j++){
			my_scanf("%d",&temp);
			if(temp==0){
				if(start==-1) start=i*length+j;
				end=i*length+j;
			}
		}
	my_printf("%d",(end/length-start/length-1)*(end%length-start%length-1));
}