#define NUM_ITER 1516896

#include <header.h>



int f(char c[]){
	int z,l=0,j;
	l=strlen(c);
	if(c[0]=='_'||(c[0]<91&&c[0]>64)||(c[0]<123&&c[0]>96)){
			for(j=0;j<l;j++){
				if(c[j]=='_'||(c[j]<='z'&&c[j]>='a')||(c[j]<='Z'&&c[j]>='A')||(c[j]<='9'&&c[j]>='0'))z=1;
				else{	
				return 0;
				break;
				}
		}
	}
	else{
	z=0;
		
	}
	return(z);
}
int main_bench()
{	int n,i;char c[90];
	
	char s[10];  
   gets(s);
   n=atoi(s);
	for(i=0;i<n;i++){
	    gets(c);
	    my_printf("%d\n",f(c));
	}
	
	return 0;
}
