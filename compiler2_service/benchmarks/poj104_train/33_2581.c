#define NUM_ITER 23446

#include <header.h>

int main_bench()
{
	char jianji[1000][256];
	int n,i,k,m;
	my_scanf("%d",&n);

		for(i=0;i<n;i++){
my_scanf("%s",&jianji[i]);
		}
		for(i=0;i<n;i++){
		m=strlen(jianji[i]);
		for(k=0;k<m;k++){
			if(jianji[i][k]=='A'){
				jianji[i][k]='T';
			}else{
				if(jianji[i][k]=='T'){
				jianji[i][k]='A';
				}else{
					if(jianji[i][k]=='C'){
				jianji[i][k]='G';
					}else{
						if(jianji[i][k]=='G'){
				jianji[i][k]='C';
		}
	}
		}
			}
		}
		}
				for(i=0;i<n;i++){
		my_printf("%s\n",jianji[i]);	
				}

return 0;
}
