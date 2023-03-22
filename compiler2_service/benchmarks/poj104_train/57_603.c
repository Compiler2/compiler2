#define NUM_ITER 34319

#include <header.h>

int main_bench()
{
	int i,n,t,l,j;
	char a[35];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		l=strlen(a);
		if((a[l-1]=='y'&&a[l-2]=='l')||(a[l-1]=='r'&&a[l-2]=='e')){
		for(j=0;j<=l-3;j++){
			if(j<l-3)
				my_printf("%c",a[j]);
			if(j==l-3)
				my_printf("%c\n",a[j]);
			}
		}
		else if((a[l-1]=='g'&&a[l-2]=='n'&&a[l-3]=='i')){
			for(j=0;j<l-3;j++){
				if(j<l-4)
				my_printf("%c",a[j]);
			if(j==l-4)
				my_printf("%c\n",a[j]);
			}
		}
	}


		

	return 0;
}



