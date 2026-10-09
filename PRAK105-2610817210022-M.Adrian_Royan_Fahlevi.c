#include <stdio.h>

int main(){
    int a = 9, b = 5, x = 8, y = 8;

    printf("Variabel a bernilai 9\n");
    printf("Variabel b bernilai 5\n");
    printf("Variabel x bernilai 8\n");
    printf("Variabel y bernilai 8\n");

    printf("Total sisa dari a dibagi b dan x dibagi y adalah %d\n", a % b + x % y);
return 0;
}