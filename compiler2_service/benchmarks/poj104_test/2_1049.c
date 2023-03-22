#define NUM_ITER 5212

#include <header.h>

struct BOOK{
	int id;
	int author[26];
};
int main_bench(){
	struct BOOK book[1000];
	int countauthor[26];
	int n,i,j,minusA,no,count,max=0,maxau;
	char input[30];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<26;j++){
			book[i].author[j]=0;
		}
	}
	for(i=0;i<n;i++){
		my_scanf("%d",&book[i].id);
		my_scanf("%s",&input);
		no=strlen(input);
		for(j=0;j<no;j++){			
			minusA=(input[j]-'A');
			book[i].author[minusA]++;
		}
	}
	for(i=0;i<26;i++){
		count=0;
		for(j=0;j<n;j++){
			if(book[j].author[i]==1)
				count++;
		}
		countauthor[i]=count;
	}
	for(i=0;i<26;i++){
		if(max<countauthor[i])
			max=countauthor[i];
	}
	for(i=0;i<26;i++){
		if(countauthor[i]==max)
			maxau=i;
	}
	my_printf("%c\n%d\n",(maxau+'A'),max);
	for(i=0;i<n;i++){
		if(book[i].author[maxau]==1){
			my_printf("%d\n",book[i].id);
		}
	}
	return 0;
}