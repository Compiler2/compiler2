#define NUM_ITER 22497

#include <header.h>


int main_bench()
{
	char shuzu[300],*tmp,*tmpa,*tmpt,*tmpc,*tmpg;
	int n,i,j,pp;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){

		my_scanf("%s",shuzu);
		pp=strlen(shuzu);
		for(j=0;j<pp;j++){
			        if(shuzu[j]=='A')  shuzu[j]='T';

			        else if(shuzu[j]=='T')  shuzu[j]='A';
			   	    else if(shuzu[j]=='C')  shuzu[j]='G';
					else if(shuzu[j]=='G')  shuzu[j]='C';
		}
		my_printf("%s\n",shuzu);
	}
	return 0;
}