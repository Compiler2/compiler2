#define NUM_ITER 29899

#include <header.h>


int main_bench()
{
	int n,i,j,x;
	char a[100][20];

	my_scanf("%d",&n);

	for(i=0;i<n;i++){
		x=0;
		
        
		my_scanf("%s",&a[i]);
		
		
		x=strlen(a[i]);
		if(a[i][x-2]=='n'){
			a[i][x-3]='\0';
			a[i][x-2]='\0';
			a[i][x-1]='\0';
		}
		else{
			a[i][x-2]='\0';
			a[i][x-1]='\0';
			
		}
		
	}

	for(i=0;i<n;i++){
		my_printf("%s\n",a[i]);
	}
	return 0;
}

