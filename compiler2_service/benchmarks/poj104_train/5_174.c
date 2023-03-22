#define NUM_ITER 894707

#include <header.h>

int main_bench()
{
	double a,j;
	int n,m,b=0,c=1,i,q;
	char s1[510],s2[510];
	my_scanf("%lf",&a);
	my_scanf("%s",s1);
	my_scanf("%s",s2);
	n=strlen(s1);
	m=strlen(s2);
	if(n!=m)
		c=0;	
	for(i=0;i<n;i++){
		if(s1[i]!='A'&&s1[i]!='T'&&s1[i]!='C'&&s1[i]!='G'){
			c=0;
			break;
		}
	}		
	for(q=0;q<m;q++){
		if(s2[q]!='A'&&s2[q]!='T'&&s2[q]!='C'&&s2[q]!='G'){
			c=0;
			break;
		}
	}
	for(i=0;i<n;i++){
		if(s1[i]==s2[i])
			b++;
	}
	j=(double)b/n;
	if(c==1){
		if(j>=a)
			my_printf("yes");
		else
			my_printf("no");
	}
	else
		my_printf("error");
	return 0;
}
		
