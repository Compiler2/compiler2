#include <header.h>

struct word
{
	char w[20];
	int a;
} word[1000];

int main_bench()
{
	int i,j,n,line;
	struct word *p;
	p=&word[0];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%s",&p->w);
		p->a=strlen(p->w);
		p++;
	}
	p=&word[0];
	for(i=1;i<=n;i++){
		if(i==1){
			my_printf("%s",p->w);
			line=p->a;
			p++;
		}else if(line+p->a+1>80){
			my_printf("\n%s",p->w);
			line=p->a;
			p++;
		}else{
			my_printf(" %s",p->w);
			line+=p->a+1;
			p++;
		}
	}

	return 0;
}
