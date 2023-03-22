#define NUM_ITER 1059683

#include <header.h>

int main_bench()
{
	char a[10000],b[10000];
	int l1,l2,l,i,j,t[10000],z;
	my_scanf("%s",a);
	my_scanf("%s",b);
    l1=strlen(a);
	l2=strlen(b);
	l=0;
	z=0;
	if (l1==l2) l=l1;
	else{
		my_printf("NO\n");
		z=1;
	}
	for (i=0;i<l;i++){
		t[i]=0;
		for (j=0;j<l;j++)
			if (a[i]==b[j]){
				t[i]=1;
				b[j]=0;
				break;
				
			}
			if (t[i]==0){
                z=1;
				my_printf("NO\n");
				break;
			}
	}
    if (z!=1) my_printf("YES\n");
	return 0;
}