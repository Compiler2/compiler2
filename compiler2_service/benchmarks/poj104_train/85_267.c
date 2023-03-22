#define NUM_ITER 36361

#include <header.h>


int main_bench()
{
    char a[100][21];
    int n=0,i,j,k;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      my_scanf("%s",a[i]);
    }
   for(i=0;i<n;i++)
   {
        if((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||(a[i][0]=='_'))
        {

            for(j=1;;j++)
            {
                 if(a[i][j]=='\0')
                 {
                    my_printf("yes\n");
                    break;
                 }

                 if(!((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0')&&(a[i][j]<='9'||a[i][j]=='_')))
                 {
                 my_printf("no\n");
                 break;
                 }
            }
        }
        else
        {my_printf("no\n");}

   }






    return 0;
}
