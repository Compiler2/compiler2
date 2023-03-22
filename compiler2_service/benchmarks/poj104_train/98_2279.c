#include <header.h>


int main_bench()
{
	int n,i,len=0,m;
	char w[41];
	my_scanf("%d",&n);
	my_scanf("%s",w);
	m=strlen(w);
	len=m;
         my_printf("%s",w);
	for(i=1;i<n;i++){
		my_scanf("%s",w);
		m=strlen(w);
		len+=m+1;
		if(len>80){
			my_printf("\n%s",w);
			len=m;
		}
		else{
			my_printf(" %s",w);
		}
		}
	return 0;
}



