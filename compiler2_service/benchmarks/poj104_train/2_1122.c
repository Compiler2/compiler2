#define NUM_ITER 15576

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	struct{
		int a;
		char s[26];
	}zuozhe[1000];
	int i, k;
	for(i=0;i<n;i++){
		my_scanf("%d %s",&zuozhe[i].a, zuozhe[i].s);
	}
	int c[26]={0}, d;
	for(i=0;i<n;i++){
		d=strlen(zuozhe[i].s);
		for(k=0;k<d;k++){
			c[zuozhe[i].s[k]-65]++;
		}
	}
	int f;
	for(i=1;i<26;i++){
		if(c[i]>c[0]){
			f=i;
			d=c[i];
			c[i]=c[0];
			c[0]=d;
		}
	}
	my_printf("%c\n%d\n",f+65, c[0]);
	for(i=0;i<n;i++){
		d=strlen(zuozhe[i].s);
		for(k=0;k<d;k++){
			if(zuozhe[i].s[k]==f+65)
				my_printf("%d\n",zuozhe[i].a);
		}
	}
	return 0;
}