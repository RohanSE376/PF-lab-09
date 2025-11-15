#include <stdio.h>

void deposit(float *b, int i, float amt){ *(b+i) += amt; }
void withdraw(float *b, int i, float amt){ *(b+i) -= amt; }

int main(){
    float bal[5], avg=0;
    for(int i=0;i<5;i++) scanf("%f", &bal[i]);

    deposit(bal,0,500);
    withdraw(bal,1,200);

    for(int i=0;i<5;i++) avg += bal[i];
    printf("%f", avg/5);
    return 0;
}

