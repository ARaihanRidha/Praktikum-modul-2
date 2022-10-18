#include <stdio.h>
int main (){


    float nilai_1,nilai_2,hasil;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai_1);
    printf("Masukkan Nilai Kedua :");
    scanf("%f", &nilai_2);

    hasil = nilai_1+nilai_2;
    printf("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.1f adalah %.2f",nilai_1,nilai_2,hasil);

    return 0;
}