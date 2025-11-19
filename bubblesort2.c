// create structure student (r_no,name,percentage) accept n student information from user.
#include<stdio.h>
int main()
{
    struct bubblesort2
    {
        int r_no;
        char name[20];
        float per;
    }
    s[100],t;
    int n,i,pass;
    printf("Enter student limit ");
    scanf("%d",&n);

    printf("Enter student information ");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%f",&s[i].r_no,&s[i].name,&s[i].per);
    }
        for(pass=1;pass<n;pass++)
        {
            for(i=0;i<n;i++)
            {
                if(s[i].per>s[i+1].per)
                {
                    t=s[i];
                    s[i]=s[i+1];
                    s[i+1]=t;
                }
            }

        }
        printf("display informaition\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t%s\t%f\t",s[i].r_no,s[i].name,s[i].per);
        }
        
    
}