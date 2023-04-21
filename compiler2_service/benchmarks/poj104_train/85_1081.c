#define NUM_ITER 25062

#include <header.h>

int main_bench (){
char a[100];
int i,n,m=1;
int length;
char *p;
my_scanf("%d",&n);

for(i=0;i<n+1;i++){
gets(a);
    p=a;
	if(!( (*p=='_')|| (*p>64&&*p<91) || (*p>96&&*p<123) ) ){
		m=0;
	}
    length=strlen(a);
	for(p=a;p<a+length;p++){
		if(! ((*p=='_') || (*p>64&&*p<91) || (*p>96&&*p<123) || (*p>47&&*p<58) )){
					m=0;
					break;
		}
        
	}
	if(i>0){
		if(m==1)	my_printf("yes\n");
		if(m==0)    my_printf("no\n");
	}
	m=1;
}
return 0;
}


