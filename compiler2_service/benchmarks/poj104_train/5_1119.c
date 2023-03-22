#define NUM_ITER 873299

#include <header.h>

int main_bench()
{
	char w1[501],w2[501];
	int len1,len2;
	int i,a=0,b=0;
    double n,m;
	my_scanf("%lf",&n);
	my_scanf("%s",w1);
	my_scanf("%s",w2);
	len1=strlen(w1);
	len2=strlen(w2);
    if(len1!=len2)
		my_printf("error");
	else{
        for(i=0;i<len1-1;i++){
			if((w1[i]!='A'&&w1[i]!='T'&&w1[i]!='G'&&w1[i]!='C')||(w2[i]!='A'&&w2[i]!='T'&&w2[i]!='G'&&w2[i]!='C')){
			   b=1;
			   my_printf("error");
			   break;
			}
		}
        for(i=0;i<len1;i++){
			if(w1[i]-w2[i]==0)
				a++;
		}
	    m=1.0*a/(len1-1);
		if(m>n&&b==0)
			my_printf("yes");
		if(m<n&&b==0)
            my_printf("no");
	}
	return 0;
}