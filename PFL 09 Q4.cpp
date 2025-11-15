#include <stdio.h>

int main(){
    int a[3][3], x, found=0;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &x);

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(*(*(a+i)+j)==x){
                printf("%d %d", i, j);
                found=1;
            }

    return 0;
}

