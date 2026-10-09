#include <stdio.h>

int main(){

    float a = 400000;
    float b = 350000;
    printf("Harga Sepatu A adalah %.0f\n", a);
    printf("Harga Sepatu B adalah %.0f\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", a - (a * 0.13));
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", b - (b * 0.21));

    return 0;
}