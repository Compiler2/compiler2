#define NUM_ITER 248536

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i,atag[100],btag[100],alen,blen;
	my_scanf("%s",a);
	my_scanf("%s",b);
	alen=strlen(a);
	blen=strlen(b);
	for(i=0;i<100;i++){
		atag[i]=0;
		btag[i]=0;
	}
	if(alen==blen){
		for(i=0;i<alen;i++){
			atag[a[i]-'A']++;
		}
		for(i=0;i<blen;i++){
			btag[b[i]-'A']++;
		}
		for(i=0;i<100;i++){
			if(atag[i]==btag[i]){
				continue;
			}
			else break;
		}
		if(i==100){
			my_printf("YES");
		}
		else my_printf("NO");
	}
	else my_printf("NO");
	return 0;
}