#include <stdio.h>

int main(){
    int a[4][5];
    for(int i=0;i<4;i++)
        for(int j=0;j<5;j++)
            scanf("%d", &a[i][j]);

    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<5;j++) sum+=a[i][j];
        float p = (sum/5.0)*100;
        printf("Student %d: %.2f%%\n", i+1, p);
        if(p<75) printf("Warning\n");
    }

    return 0;
}

