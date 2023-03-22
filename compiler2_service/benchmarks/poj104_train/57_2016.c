#define NUM_ITER 32032

#include <header.h>



int main_bench()
{
	int n,i,a;
	char w[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",w);
		a=strlen(w);
		if(((w[a-1]=='r')&&(w[a-2]=='e'))||((w[a-1]=='y')&&(w[a-2]=='l'))){
			w[a-2]='\0';
			my_printf("%s\n",w);
		}
		else if((w[a-3]=='i')&&(w[a-2]=='n')&&(w[a-1]=='g')){
			w[a-3]='\0';
			my_printf("%s\n",w);
		}
	}
	
	return 0;
}



