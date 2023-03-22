#include <header.h>


struct sz{
	char word[41];
}*p;
int main_bench()
{
	int n,i,m,add=0;
	my_scanf("%d",&n);
	p=(struct sz *)malloc(sizeof(struct sz)*n);
	for(i=0;i<n;i++){
		my_scanf("%s",&(p+i)->word);
	}
	for(i=0;i<n;i++){
		m=strlen((p+i)->word);
		if(add+m<80){
			if(add>0){
				my_printf(" ");
				add++;
			}
			my_printf("%s",(p+i)->word);
			add+=m;
		}
		else{
		my_printf("\n%s",(p+i)->word);
		add=m;
		}
	}
	return 0;
}
