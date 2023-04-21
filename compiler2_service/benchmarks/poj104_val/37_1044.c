#define NUM_ITER 9431

#include <header.h>

int main_bench()
{
	int n,i,j,l,t;
	char s[100000];
	int sz[26];
	for(i=0;i<25;i++){
		sz[i]=0;
	}
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
        l=strlen(s);
		for(j=0;j<l;j++){
			t=(int)(s[j]-'a');
			sz[t]++;
		}
		for(j=0;j<l;j++){
			t=(int)(s[j]-'a');
			if(sz[t]==1){
				my_printf("%c\n",s[j]);
				break;
			}
			if(j==l-1)
				my_printf("no\n");
		}
		for(j=0;j<25;j++){
			sz[j]=0;
		}
	}
	return 0;
}

