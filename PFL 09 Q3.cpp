#include <stdio.h>

int main(){
    char a[3][50];

    for(int i=0;i<3;i++) scanf("%s", a[i]);

    for(int i=0;i<3;i++)
        for(int j=0;a[i][j]!='\0';j++){
            char *p=&a[i][j];
            if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
               *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
                *p='*';
        }

    for(int i=0;i<3;i++) printf("%s\n", a[i]);
    return 0;
}

