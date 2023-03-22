#define NUM_ITER 307

#include <header.h>

int main_bench()
{
	int n,i,p,j,c;
	char s[1000],a[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(c=0;c<1000;c++){
			s[c]=0;
			a[c]=0;
		}
		my_scanf("%s",s);
		p=strlen(s);
		for(j=0;j<p;j++){
			if(s[j]=='A'){
				a[j]='T';
			}else if(s[j]=='T'){
				a[j]='A';
			}else if(s[j]=='G'){
				a[j]='C';
			}else if(s[j]=='C'){
				a[j]='G';
			}
		}
		my_printf("%s\n",a);
	}
	return 0;
}
