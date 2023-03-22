#define NUM_ITER 956

#include <header.h>

int main_bench()
{
	int t,i,a,j,k,b,s[100000];
	char zf[100000];
	my_scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++){
		b=1;
		memset(zf,0,sizeof(zf));
		my_scanf("%s",zf); 
		getchar();
		a=strlen(zf);
		for(j=0;j<a;j++){
			s[j]=0;
		}
		for(j=0;j<a;j++){
			for(k=0;k<a;k++){
				if(zf[j]==zf[k]){
					s[j]++;
				}
			}
		}
		for(j=0;j<a;j++){
			if(s[j]==1){
				b=2;
				my_printf("%c\n",zf[j]);
				break;
			}
		}
		if(b==1){
			my_printf("no\n");
		}
	}
	return 0;
}
