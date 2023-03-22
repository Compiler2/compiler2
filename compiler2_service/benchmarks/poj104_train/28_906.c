#define NUM_ITER 1506736

#include <header.h>

int main_bench()
{
	char zfc[300*50];
	int i,j,sz[300],m=0;
	gets(zfc);
	for(i=0;zfc[i]!=0;i++){
		if(zfc[i]!=' '){
			for(j=i+1;zfc[j]!=0&&zfc[j]!=' ';j++){
			}
			sz[m]=j-i;
			m++;
			if(zfc[j]==0){
				break;
			}
			else{
				i=j;
			}
		}
	}        
	for(i=0;i<m-1;i++){
	     my_printf("%d,",sz[i]);
	}
	my_printf("%d",sz[m-1]);
	return 0;
}
