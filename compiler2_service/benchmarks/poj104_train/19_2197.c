#define NUM_ITER 815881

#include <header.h>

int main_bench(){
	char str[101],a[100][100],b[100],c[100],*ps;
	int i,k,flag=0,j;
	gets(str);
	gets(c);
	gets(b);
	i = 0; j = 0;
	for(ps=str;*ps!='\0';ps++){
		if(*ps != ' '){
			a[i][j] = *ps;
			j++;
		}
		else if(*ps == ' '){
			a[i][j] = '\0';
			j = 0;
			i++;
		}
	}
	a[i][j] = '\0';
	k=i;
	for(i=0;i<=k;i++){
		if(strcmp(a[i],c)==0){
			strcpy(a[i], b);
			flag=1;
		}
	}
	if(flag==1){
	    for(i=0;i<k;i++){
		    my_printf("%s ",a[i]);
		}
	    my_printf("%s",a[k]);
	}
	else if(flag==0){
		my_printf("%s",str);
	}
	return 0;
}



