#include <stdio.h>
int main()
    { 
        int n,s,total=0,avg;
        printf("Enter no of students\n");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            {
                printf("Enter Test score(out of 100)\n");
                scanf("%d",&s);
                total=total+s;
            }
            avg=total/n;
            printf("Total score= %d\nAverage score=%d ",total,avg);
    }