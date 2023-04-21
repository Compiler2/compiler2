#define NUM_ITER 29448

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	char zfc[1000][42];
	int i;
	for(i=0;i<n;i++){
		my_scanf("%s",zfc[i]);
	}
	int len=0,k;
	for(i=0;i<n;i++){    
        len=len+strlen(zfc[i])+1;
	  if(i<n-1){
		if(len<=80){
            k=len+strlen(zfc[i+1])+1;
			if(k>81){
				 my_printf("%s",zfc[i]);
			}
			if(k<=81){
				 my_printf("%s ",zfc[i]);
			}
		}
		if(len==81){
			my_printf("%s\n",zfc[i]);
			len=0;
		}
		if(len>81){
			my_printf("\n%s ",zfc[i]);
			len=strlen(zfc[i])+1;
		}
	  }
	  if(i==n-1){
		  my_printf("%s",zfc[n-1]);
	  }

	}
	return 0;
}
