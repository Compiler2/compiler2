#define NUM_ITER 1155195

#include <header.h>

char c[500];
int f(int e0,int s0);
int main_bench(){
	int i,j,k,e,s;

	my_scanf("%s",c); 
	int len;
	len=strlen(c);
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			if(j-i>=0&&i+j+1<=len){
				if(c[j-i]==c[i+j+1]){
					s=j-i;
					e=i+j+1;
					if(f(e,s)){
					for(k=s;k<=e;k++)
						my_printf("%c",c[k]);
					my_printf("\n");
					}
				}
			}
		}
	}
	return 0;
}
int f(int e0,int s0){
	int i0,sum=0;

	for(i0=s0;i0<=e0;i0++){
		if(c[i0]!=c[s0+e0-i0])
			sum++;
	}
	if(sum==0)
		return 1;
	else return 0;
}