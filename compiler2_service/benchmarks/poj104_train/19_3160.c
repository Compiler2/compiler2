#include <header.h>

int main_bench()
{
    char s[101];
    char a[101];
    char b[101];
    char d[101][101];
    int l;
    int i,j,k;  
    while(gets(s)){
        int t=0;
		my_scanf("%s",a);
        my_scanf("%s",b);
		getchar();
		l=strlen(s);
		i=0;
		j=0;
		k=0;
		for(i=0;i<=l;i++){
			if(s[i]==' '){
				d[j][k]='\0';
				k=0;
				++j;
			}
			else if(s[i]=='\0'){
				d[j][k]='\0';
				++j;
			}
			else{
				d[j][k] = s[i];++k;
			}
		}
		for(i=0;i<j;i++){
			if(strcmp(a,d[i])==0)
				strcpy(d[i],b);
		}
		for(i=0;i<j-1;i++)
			my_printf("%s ",d[i]);
		my_printf("%s\n",d[i]);}
	return 0;
}