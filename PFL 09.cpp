#include <stdio.h>

void record(int a[3][5]) {
    for(int i=0;i<3;i++)
        for(int j=0;j<5;j++)
            scanf("%d", (*(a+i)+j));
}

void countBeds(int a[3][5]) {
    int occ=0, emp=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<5;j++)
            if(*(*(a+i)+j)==1) occ++; else emp++;
    printf("Occupied: %d\nAvailable: %d\n", occ, emp);
}

int main() {
    int beds[3][5];
    record(beds);
    countBeds(beds);
    return 0;
}

