#define NUM_ITER 1179466

#include <header.h>

int main_bench()
{
	int a=0;
	char s[1000];
	char w[1000];
	int i,j,b;
	my_scanf("%s",s);
	my_scanf("%s",w);
    b = strlen(s);
	for(i=0;w[i]!='\0';i++){
		if(w[i]==s[0]){
			for(j=0;s[j]!='\0';j++){
				if(s[j]==w[i+j])a++;
			}
			if(a==b)my_printf("%d",i);
		}
	}
	return 0;
}

