#include <stdio.h>
int main ()
{
    float r,t,phi,L,K,V;
    printf("Masukkan Jari jari :");
    scanf("%f",&r);
    printf("Masukkan tinggi    :");
    scanf("%f",&t);
    K=2*22*r/7;
    L=2*22*r*(r+t)/7;
    V=22*r*r*t/7;

    printf("Volume          = %.2f\n",V);
    printf("Luas            = %.2f\n",L);
    printf("Keliling        = %.2f\n",K);
    return 0;









}