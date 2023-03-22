#include <header.h>

int main_bench()
{
char c=' ';
char *str1,*str2;
str1 = (char *)malloc(100*sizeof(char));
str2 = (char *)malloc(100*sizeof(char));

char str[100][100];
int i,n=0;
for(i=0;i<100;i++)
{
	strcpy(str[i],"\0");
    my_scanf("%s",str[i]);
    if(c=getchar()!=' ')break;
    n++;
}
strcpy(str1,"\0");
strcpy(str2,"\0");
my_scanf("%s",str1);
my_scanf("%s",str2);

for(i=0;i<=n;i++)
{
	if(strcmp(str1,str[i])==0)
		strcpy(str[i],str2);
}
for(i=0;i<=n-1;i++)
my_printf("%s ",str[i]);
my_printf("%s",str[n]);

}