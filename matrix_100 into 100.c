#include <stdio.h>
int main(){
    int nirik, umang, a[100][100], b[100][100], sum[100][100], i, j;

    nirik = 100;
    umang = 100;

    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<nirik; ++i)
        for(j=0; j<umang; ++j)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<nirik; ++i)
        for(j=0; j<umang; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }

    for(i=0;i<nirik;++i)
        for(j=0;j<umang;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    printf("\nSum of two matrix is: \n\n");

    for(i=0;i<nirik;++i)
        for(j=0;j<umang;++j)
        {

            printf("%d   ",sum[i][j]);

            if(j==umang-1)
            {
                printf("\n\n");
            }
        }
    
    return 0;
}