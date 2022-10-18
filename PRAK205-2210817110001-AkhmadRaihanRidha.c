#include <stdio.h>
#include <math.h>
int main (){
    int tinggi,sisi_miring,alas,K,L;

    printf("Masukkan tinggi segitiga :");
    scanf("%d",&tinggi);
    printf("Masukkan sisi miring :");
    scanf("%d",&sisi_miring);

    alas= sqrt(pow((sisi_miring),2) - pow((tinggi),2));
    K=(tinggi+sisi_miring+alas);
    L= (alas*tinggi)/2;
    printf("Alas  = %dcm\n",alas);
    printf("Tinggi = %dcm\n",tinggi);
    printf("Keliling = %dcm\n",K);
    printf("Luas  =  %dcm^2\n",L);

    return 0;
}