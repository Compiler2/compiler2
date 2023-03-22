#define NUM_ITER 932839

#include <header.h>

char a[501];
char b[501];
int main_bench(){
	double n,d=0;
	int e=0,i,k=1,lena,lenb;
	my_scanf("%lf",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
	lena=(int)strlen(a);
	lenb=(int)strlen(b);
	for(i=0;a[i];i++){
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')||lena!=lenb){
         d=-1;
		 break;
		}
		else if(a[i]==b[i]){e++;}
	}
    if(d==0){d=1.0*e/i;}
	if(d>n){my_printf("yes");}
	if(d<=n&&d>=0){my_printf("no");}
	if(d<0){my_printf("error");}
return 0;
}