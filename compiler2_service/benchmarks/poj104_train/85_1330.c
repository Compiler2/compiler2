#define NUM_ITER 1494472

#include <header.h>

int main_bench()
{
    int i=0,j,n,p,a,b,m;
    char A[30],M[5];
    gets(M);
    n=atoi(M);
    while(i<n)
    {
        for(p=0;p<30;p++)
        {
            A[p]=0;
        }
        gets(A);
        m=strlen(A);
        b=A[0];
        if(b<65||(90<b&&b<95)||b==96||(b>122))
        {
            my_printf("no\n");
            goto k;
        }else{
        for(j=1;j<m;j++)
        {
           a=A[j];
           if((a<48)||(a>57&&a<65)||(90<a&&a<95)||a==96||(a>122))
           {
               my_printf("no\n");
               goto k;
           }
        }
        my_printf("yes\n");
    }
 k:   i++;
    }
    return 0;
}