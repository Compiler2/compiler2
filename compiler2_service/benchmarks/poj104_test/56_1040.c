#include <header.h>

int main_bench(){
int i;
char n[5]={0};
scanf("%s",n);
for(i=4;i>=0;i--)
{
if(n[i]!='0'&&n[i]!='\0')
printf("%c",n[i]);
}
return 0;
}
