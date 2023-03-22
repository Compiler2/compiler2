#include <header.h>

int main_bench()
{
	int n, i;
	char ward[20], a;
	my_scanf("%d", &n);
    for(i=0;i<n;i++){
		my_scanf("%s", ward);
		a=strlen(ward)-1;
        if((ward[a]=='r')||(ward[a]=='y')){
			ward[a-1]='\0';}
		else{
			ward[a-2]='\0';}
		my_printf("%s\n", ward);
	}
	return 0;
}