#define NUM_ITER 26059

#include <header.h>

int main_bench(){
	int n,j,i,l;
	char z[256];my_scanf("%d",&n);
	for(j=0;j<n;j++)
		
	
	{my_scanf("%s",z);l=strlen(z);
	for(i=0;i<l;i++){if(z[i]=='A')z[i]='T';else{if(z[i]=='T'){z[i]='A';}else{if(z[i]=='C'){z[i]='G';} else{ z[i]='C';};};};}

	my_printf("%s\n",z);}
return 0;
}