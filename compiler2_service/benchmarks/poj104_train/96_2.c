#include <header.h>

const long maxL=100;

char a[maxL+1];

long ans[maxL+1];

main_bench(){
    long i,l,rest;
    my_scanf("%s",a);
    l=strlen(a);
    rest=0;
    for(i=0;i<l;i++){
	rest=rest*10+a[i]-'0';
	ans[i]=rest/13;
	rest%=13;
    }
    i=0;
    while((ans[i]==0) && (i<l-1))
	i++;
    for(;i<l;i++)
	my_printf("%ld",ans[i]);
    my_printf("\n%ld\n",rest);
    return 0;
}
