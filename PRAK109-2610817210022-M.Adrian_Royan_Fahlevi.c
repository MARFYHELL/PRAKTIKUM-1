#include <stdio.h>

int main(){
    int Zilong = 1;
    int Ling = 1;
    int Baxia = 1;
    int Wanwan = 1;
    int Change = 1;
    int Yuzhong = 958730;

    printf("Jumlah pasukan yang dibawa Yuzhong = 958.730\n");
    printf("Jumlah pahlawan = %.d\n", Zilong+Ling+Baxia+Wanwan+Change);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.d\n", Yuzhong/(Zilong+Ling+Baxia+Wanwan+Change));

    return 0;
}