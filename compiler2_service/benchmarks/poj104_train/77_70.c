#include <header.h>



int main_bench()
{
	int n,p,num[255];
	char ch,boy;
	num[0]=0;
	my_scanf("%c",&boy);
	for(n=p=1;p>0;n++){
		my_scanf("%c",&ch);
		if(ch==boy){
			num[p]=n;
			p++;
		}
		else{
			my_printf("%d %d\n",num[p-1],n);
			p--;
		}
	}
	return 0;
}
