#include<stdio.h>
#include<math.h>

int main()
{
    int row,col,n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=n-1; col>=row; col--)
        //for(col=1; col<=n-row; col++)
        {
           printf(" ");
        }
        for(col=1; col<=row; col++)
        {
           printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}