#define NUM_ITER 1061828

#include <header.h>











int main_bench()
{
	int i,j,m,n,len1,len2,c=0,d;
	char s[50],w[50],a[50]={0};
	my_scanf("%s%s",s,w);
	len1=strlen(s);
	len2=strlen(w);
	for(j=0,i=0;j<len2;j++){
		c=0;
		if(s[i]==w[j]){
			for(m=i+1,n=j+1;m<len1;m++,n++){
				if(s[m]!=w[n]){
					c=1;
				}
			}
				if(c!=1){
					d=j;
				        break;
			
		}
	}
	}
	my_printf("%d",d);
	return 0;
}