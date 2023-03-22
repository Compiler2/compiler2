#define NUM_ITER 22934

#include <header.h>


int main_bench()
{
	int n;
	char s[100001];
	my_scanf("%d",&n);
	gets(s);

	int i;
	char *p;
	for(i=0;i<n;i++){
		gets(s);
		int l;
		l=strlen(s);
		int count[26]={0};
		p=s;
		while(*p!='\0'){
			count[(int)*p-97]++;
			p++;
		}
		p=s;
		while(*p!='\0'){
			if(1==count[(int)*p-97]){
				my_printf("%c\n",*p);
				break;
			}
			p++;
		}
		if(*p=='\0'){
			my_printf("no\n");
		}
	}


	return 0;
}
