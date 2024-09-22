
#include <stdio.h>
int main() {
    float num1;
    float num2;
    float media;
    printf("inserisci un numero: ");
    scanf("%f", &num1);
    printf("inserisci un numero: ");
    scanf("%f", &num2);
    media = (num1 + num2) / 2;
    printf("media = %f", media);
    return 0;
}
