#define NUM_ITER 999473

#include <header.h>

int main_bench()
{
	char p[50],q[50];
	my_scanf("%s %s",p,q);
    int m,n;
	m=strlen(p);
	n=strlen(q);
	int i,t;
	for(i=0;i<n;i++){
		int b=0;
		t=i;
        for(int j=0;j<m;j++){
			if(p[j]==q[t]) b++;
			else b=b;
			t++;
		}
		if(b==m) {
			my_printf("%d",t-m);
			for(int h=0;h<m;h++){
				p[h]='1';
			}
		}
	}
	return 0;
}
