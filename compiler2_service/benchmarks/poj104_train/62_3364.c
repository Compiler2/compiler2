#define NUM_ITER 1310456

#include <header.h>

int main_bench()
{
	int i,j,k,n,t=0;
	char s[100];
	gets(s);
	k=strlen(s);
	for(i=0;i<k;i++) {
		if(s[i]==' ') {
			if(s[i+1]==' ') {
				t=t+1;
				for(n=i;n>=t-1;n--) {
					s[n+1]=s[n];
				}
				
			}
			}
		
	}
		for(j=t;j<k;j++) 
			my_printf("%c",s[j]);
		return 0;
}
	
		