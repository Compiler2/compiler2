#define NUM_ITER 996930

#include <header.h>

int main_bench()
{   int i,c,d,e,n=0;
    char a[100];
    char b[100];
	gets(a);
    gets(b);
	c=strlen(a);
	for(i=0;i<c;i++){
		if (a[i]<97) a[i]=a[i]+32;}
	d=strlen(b);
    for(i=0;i<d;i++){
		if (b[i]<97) b[i]=b[i]+32;}
	if(c==d){
    for(i=0;i<c;i++){
		if (a[i]>b[i]){my_printf(">");break;}
        else if (a[i]<b[i]){my_printf("<");break;}
		else {n=n+1;}
	}
	if(n==c){my_printf("=");}
	}
	if(c!=d){if(c>d){e=c;} if(c<d){e=d;}
	for(i=0;i<e;i++){
		if (a[i]>b[i]){my_printf(">");break;}
        else if (a[i]<b[i]){my_printf("<");break;}
	}
	}
	return 0;
}
