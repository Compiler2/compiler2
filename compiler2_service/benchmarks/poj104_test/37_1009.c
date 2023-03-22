#include <header.h>

int main_bench()
{
    int i,t;
    char c[100000],store[30];
    char count(char ch[]);
    my_scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        my_scanf("%s",c);
        store[i]=count(c);
    }
    for(i=0;i<t;i++)
    {
        if(store[i]!='\0'){my_printf("%c\n",store[i]);}
        else{my_printf("no\n");}
    }
    return 0;
}

char count(char ch[])
{
    int i,j,count,length;
    length=strlen(ch);
    for(i=0;i<length;i++)
    {
        count=0;
        for(j=0;j<length;j++)
        {
            if(ch[i]==ch[j]){count=count+1;}
        }
        if(count==1){return ch[i];}
    }
    if(count!=1){return '\0';}
}
