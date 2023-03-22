#define NUM_ITER 1073234

#include <header.h>

const int maxn=100;
int a[maxn+10];
char line[maxn+10];
int main_bench()
{
    int i,j=0;
    my_scanf("%s",line);
    int len=strlen(line);
    int a[maxn+10]={0},b;
    int temp=0;
    
    for(i=0;i<len;i++)
    {
        temp=temp*10+line[i]-'0';
        a[i]=temp/13;
        temp=temp%13;
    }
    int m=0;
    if(len==1)my_printf("0");
    if((len<=2)&&(((line[0]-'0')*10+(line[1]-'0'))<13))my_printf("0");
    for(i=0;i<len;i++)
    {
        if(a[i]!=0){m=1;}
        if(m==1)my_printf("%d",a[i]);
        
        
    }
    my_printf("\n%d",temp);
    return 0;
}

