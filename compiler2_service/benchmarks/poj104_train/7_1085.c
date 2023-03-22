#include <header.h>


int i,j,k,kk;
char s1[305],s2[305];
char s3[305];

int main_bench()
{
    my_scanf("%s",s1);
    my_scanf("%s",s2);
    my_scanf("%s",s3);
    for(i=0;i<strlen(s1);i++)
    {
         for(j=0;j<strlen(s2);j++)
         {
            if(s1[i+j]!=s2[j])
            {
                break;
            }
         }
         if(j==strlen(s2))
         {
             k=i;
             kk=1;
             break;
         }
    }
    if(kk==1)
    {
             for(i=0;i<k;i++)
             {
              my_printf("%c",s1[i]);
             }
             my_printf("%s",s3);
             for(i=k+strlen(s2);i<strlen(s1);i++)
             {
               my_printf("%c",s1[i]);
             }
             my_printf("\n");
    }
    else
    {
        my_printf("%s\n",s1);
    }
    return 0;
}

