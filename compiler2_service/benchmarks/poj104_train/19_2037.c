#define NUM_ITER 767768

#include <header.h>

int main_bench(){
	char s[200],a[100],b[100],s_[200][200],s__[200];
	int i,n=0,m,j=0,p=0;
	gets(s);
	for(i=0;s[i]!='\0';i++){
		s__[i]=s[i];
	}
	s__[i]=' ';
	s__[i+1]='\0';
	my_scanf("%s%s",a,b);
	for(i=0;s__[i]!='\0';i++){
		n++;
	}
	for(i=0;i<n;i++){
		if(s__[i]==' '){
			s_[j][p]='\0';
			j++;
			p=0;
		}
		else{
			s_[j][p]=s__[i];
			p++;
		}
	}
	m=j;
	for(j=0;j<m-1;j++){
		if(strcmp(s_[j],a)==0){
			my_printf("%s ",b);
		}
		else{
			my_printf("%s ",s_[j]);
		}
	}
	if(strcmp(s_[m-1],a)==0){
		my_printf("%s",b);
	}
	else{
		my_printf("%s",s_[j]);
	}
	return 0;
}