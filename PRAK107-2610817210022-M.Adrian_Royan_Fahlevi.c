#include <stdio.h>

int main(){
    float a = 4, b = 5, c = 7, d = 85000;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %.0f,%.0f,dan %0f\n", a,b,c);
    printf("Keliling Tanah Pak Dengklek adalah 16\n");
    printf("Harga Tanah per Meter adalah %.0f\n", d);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : %.0f\n", (a+b+c)*d);

    return 0;
}