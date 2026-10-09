#include <stdio.h>

int main(){
    int a = 4, b = 8, c = 3;

    printf("Variabel a bernilai 4\n");
    printf("Variabel b bernilai 8\n");
    printf("Variabel c bernilai 3\n");

    printf("Apakah a sama dengan b ?  jawabannya adalah %d\n", a==b);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", b>c );
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", a != c);

    return 0;
}