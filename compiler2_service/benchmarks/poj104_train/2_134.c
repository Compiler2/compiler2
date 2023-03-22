#define NUM_ITER 17950

#include <header.h>

int main_bench()
{
	struct Book{
		int id;
		char zz[26];
	}book[1000];
	
	int n,i,j,max=0,index;
	int sum[26]={0};
	char author;
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d%s",&book[i].id,&book[i].zz);
	}
	
	for (i=0;i<n;i++){
		for (j=0;book[i].zz[j]!='\0';j++){
			sum[book[i].zz[j]-'A']++;
		}
	}
	
	for (i=0;i<26;i++){
		if (sum[i]>max){
			max=sum[i];
			author='A'+i;
		}
	}
	my_printf("%c\n%d\n",author,max);
	
	for (i=0;i<n;i++){
		for (j=0;book[i].zz[j]!='\0';j++){
			if (book[i].zz[j]==author){
				my_printf("%d\n",book[i].id);
				break;
			}
		}
	}
    return 0;
}