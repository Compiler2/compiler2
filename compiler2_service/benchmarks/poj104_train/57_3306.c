#define NUM_ITER 24333

#include <header.h>

int main_bench()
{
    char a[100];
    int i,n,j;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%s",a);
        if(a[strlen(a)-1]=='r'&&a[strlen(a)-2]=='e'){a[strlen(a)-2]='\0';}
        if(a[strlen(a)-1]=='g'&&a[strlen(a)-2]=='n'&&a[strlen(a)-3]=='i'){a[strlen(a)-3]='\0';}
        if(a[strlen(a)-1]=='y'&&a[strlen(a)-2]=='l'){a[strlen(a)-2]='\0';}
        my_printf("%s\n",a);
        for(j=0;j<strlen(a);j++)
        {
            a[j]='\0';
        }
    }
    return 0;
}