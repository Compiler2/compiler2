#define NUM_ITER 30130

#include <header.h>


int main_bench()
{
        int n,i,j;
        char a[100][100],b[100];
        my_scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            my_scanf("%s",a[i]);
            b[i]=strlen(a[i]);
            

        }
        for(i=0;i<n;i++)
        {
            if(a[i][b[i]-1]=='r')
            {
                for(j=0;j<b[i]-2;j++)
                my_printf("%c",a[i][j]);
                my_printf("\n");
				continue;
            }
            else if(a[i][b[i]-1]=='y')
            {for(j=0;j<b[i]-2;j++)
             my_printf("%c",a[i][j]);
              my_printf("\n"); 
			continue;
			}
            else if(a[i][b[i]-1]=='g');
             {for(j=0;j<b[i]-3;j++)
                my_printf("%c",a[i][j]);
			   my_printf("\n");
			   continue;
			 }
            
        }
        return 0;
}
