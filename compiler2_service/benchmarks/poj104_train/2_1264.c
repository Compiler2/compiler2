#define NUM_ITER 3198

#include <header.h>


int main_bench()
{
struct {
	int num;
	char author[26];
}book[1000];
int shu_num[26],i,j,k,n,max,length;
char max_author;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d %s",&book[i].num,book[i].author);
}
for(k=0;k<26;k++){
	shu_num[k]=0;
}
for(k=0;k<26;k++){
	for(i=0;i<n;i++){
		length=strlen(book[i].author);
		for(j=0;j<length;j++){
			if(book[i].author[j]=='A'+k){
				shu_num[k]++;
			}
		}
	}	
}
max=shu_num[0];
max_author='A';
for(k=0;k<26;k++){
	if(shu_num[k]>max){
	max=shu_num[k];
	max_author='A'+k;
	}
}
my_printf("%c\n%d\n",max_author,max);
for(i=0;i<n;i++){
	length=strlen(book[i].author);
	for(j=0;j<length;j++){
		if(book[i].author[j]==max_author){
		my_printf("%d\n",book[i].num);
		}	
	}
}
	return 0;
}