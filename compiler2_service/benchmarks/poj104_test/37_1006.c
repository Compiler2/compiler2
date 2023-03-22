#define NUM_ITER 17560

#include <header.h>

int main_bench()
{
    int n,i,j,k,l,b,c;
	char a;
	char *s=(char *)malloc(sizeof(char)*100000);
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	    my_scanf("%s",s);
		l=strlen(s);
		c=0;
		for(j=0;j<l;j++){
            a=*(s+j);
			b=0;
			for(k=0;k<l;k++){
				if(k!=j&&*(s+k)==a) {b++; break;}
			}
			if(b==0){
			    my_printf("%c\n",a);
				c++;
				break;
			}
		}
		if(c==0) my_printf("no\n");        
	}
    return 0;
}