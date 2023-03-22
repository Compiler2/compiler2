#include <header.h>

int main_bench()
{
	int days[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	int i,w;
         my_scanf("%d",&w);
	for(i=0;i<12;i++){
		if(days[i]%7+w==6||days[i]%7+w==13){
			my_printf("%d\n",i+1);
		}
	}
		return 0;
}
