#include <stdio.h>
#include <math.h>

int main(){
    int Base = 5, Height = 12, Perimeter = 30, Area = 30;

    int Hypotenuse = sqrt(Base * Base + Height * Height);

    printf("Diketahui : \n");
    printf("Alas = %d cm\n", Base);
    printf("Tinggi = %d cm\n", Height);
    printf("\n");
    printf("Jawab : \n");
    printf("Sisi A = %d cm\n", Height);
    printf("Sisi B = %d cm\n", Hypotenuse);
    printf("Sisi c = %d cm\n", Base);
    printf("Keliling = %d cm\n", Perimeter);
    printf("Luas = %d cm\n", Area);
return 0;
}