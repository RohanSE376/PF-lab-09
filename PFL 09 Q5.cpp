#include <stdio.h>

void printData(void *ptr, char type){
    if(type=='i') printf("%d\n", *(int*)ptr);
    else if(type=='f') printf("%f\n", *(float*)ptr);
    else if(type=='c') printf("%c\n", *(char*)ptr);
}

int main(){
    int id;
    float price;
    char cat;

    scanf("%d", &id);
    scanf("%f", &price);
    scanf(" %c", &cat);

    printData(&id, 'i');
    printData(&price, 'f');
    printData(&cat, 'c');

    return 0;
}

