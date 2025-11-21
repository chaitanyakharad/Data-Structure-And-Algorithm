#include<stdio.h>

int table(int num) {
    int value = 1, i;
    for (i = 1; i <= 10; i++)
     {
        value = num * i;
        printf("%d\n",value);
    }
    
}

int main() {
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    table(num);
}

 