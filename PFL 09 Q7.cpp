#include <stdio.h>

int main(){
    int r[11], max=0, idx=0, sum=0;

    for(int i=0;i<11;i++){
        scanf("%d", &r[i]);
        sum += r[i];
        if(r[i] > max){
            max = r[i];
            idx = i;
        }
    }

    float avg = sum / 11.0;

    printf("Total: %d\n", sum);
    printf("Average: %.2f\n", avg);
    printf("Highest: %d\n", max);
    printf("Index: %d\n", idx);

    return 0;
}

