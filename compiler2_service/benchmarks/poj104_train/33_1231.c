#define NUM_ITER 23762

#include <header.h>

int main_bench(){
	
char in[10000][256];
	
char out[10000][256];
	
int n,i;
	

	
my_scanf("%d",&n);
	
for(i=0;i<n;i++){
	
	
my_scanf("%s",in[i]);
	
   int m=strlen(in[i]);
	
	
 for(int j=0;j<m;j++){
	
	
	
if(in[i][j]=='A')
	
	
	
	
{out[i][j]='T';}
	
	
	
else if(in[i][j]=='T')
	
	
	
	
{out[i][j]='A';}
	
	
	
else if(in[i][j]=='C')
	
	
	
	
{out[i][j]='G';}
	
	
	
else{out[i][j]='C';}
	
	
}
	
	
my_printf("%s\n",out[i]);
	
}
	

	
return 0;
}

