#define NUM_ITER 144

#include <header.h>

int main_bench()
{
    int n,m,i,j,day,count=0,iday[100][100];
    char room[100][100];
    for(i=0;i<100;i++)
        for(j=0;j<100;j++)
        {
            iday[i][j]=200;
        }
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            my_scanf("%c",&room[i][j]);
            while((room[i][j]==' ')||(room[i][j]=='\n'))
            {
                my_scanf("%c",&room[i][j]);
            }
            if(room[i][j]=='@')
                iday[i][j]=1;
        }
    my_scanf("%d",&m);
    for(day=2;day<=m;day++)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(  (room[i][j]=='@')  &&  (iday[i][j]<day)  )
                {
                    if(  (room[i][j+1]=='.') && (j+1<n)  )
                    {
                        room[i][j+1]='@';
                        iday[i][j+1]=day;
                    
                    }
                    
                    if(  (room[i][j-1]=='.') && (j-1>=0)  )
                    {
                        room[i][j-1]='@';
                        iday[i][j-1]=day;
                     
                    }
                    
                    if(  (room[i+1][j]=='.') && (i+1<n)  )
                    {
                        room[i+1][j]='@';
                        iday[i+1][j]=day;
                     
                    }
                    
                    if(  (room[i-1][j]=='.') && (i-1>=0)  )
                    {
                        room[i-1][j]='@';
                        iday[i-1][j]=day;
                     
                    }
                    
                }
            }
 
        
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(room[i][j]=='@')
                count++;
        }
    my_printf("%d\n",count);
    
}