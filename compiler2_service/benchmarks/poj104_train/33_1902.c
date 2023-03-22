#define NUM_ITER 26089

#include <header.h>

int main_bench()
{
	int n,i,len,j;
	char a[256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		len=strlen(a);
		for(j=0;j<len;j++){
			switch(a[j]){
			case 'A':a[j]='T';break;
			case 'C':a[j]='G';break;
			case 'G':a[j]='C';break;
			case 'T':a[j]='A';break;
			}


			
		}
		my_printf("%s\n",a);
	}



	
	return 0;
}
