#define NUM_ITER 1278644

#include <header.h>

int main_bench()
{
    char st[101],word[100][20];
    gets(st);
    int num=0,flag=0,i,j,k;
	int judge=1;
    for(i=0;st[i]!='\0';i++)
    {if(st[i]==' ') flag=0;
    else if(flag==0) 
    {num ++;
    flag=1;}
    if((num==1&&judge==1)||(st[i-1]==' '&&st[i]!=' '))
    {
     j=0;
     judge=0;
     for(k=i;st[k]!=' '&&st[k]!='\0';k++)
    {word[num][j++]=st[k];}
    word[num][j++]='\0';}
    }
for(i=num;i>1;i--)
my_printf("%s ",word[i]);
my_printf("%s",word[1]);
}