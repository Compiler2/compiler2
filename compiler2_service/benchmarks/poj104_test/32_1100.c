#define NUM_ITER 8603

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		char a[101]={'0'},b[101]={'0'};
		my_scanf("%s\n%s",a,b);
		int lena,lenb;
		lena=strlen(a);
		lenb=strlen(b);
		int na[101]={0},nb[101]={0},nc[101]={0};
		int curr;
		for(curr=0;curr<lena;curr++){
			na[curr]=a[lena-1-curr]-'0';
		}
		for(curr=0;curr<lenb;curr++){
			nb[curr]=b[lenb-1-curr]-'0';
		}
		int r=0;
		for(curr=0;curr<lena;curr++){
			if(na[curr]-r>=nb[curr]){
				nc[curr]=na[curr]-r-nb[curr];
				r=0;
			}
			else{
				nc[curr]=na[curr]-r+10-nb[curr];
				r=1;
			}
		}
		my_printf("\n");
		if(nc[lena-1]!=0)my_printf("%d",nc[lena-1]);
		for(curr=lena-2;curr>=0;curr--)my_printf("%d",nc[curr]);
	}
	return 0;
}
