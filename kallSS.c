// Nama : David Cristian Batubara
// NIM : 24060122130094
// Tanggal : 01/03/2023
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int iA,iB;
    char o;
    float t;
    //Algoritma
    printf(" ");
    scanf("%d",&iA);
    printf(" ");
    scanf("%d",&iB);
    printf(" ");
    scanf("\n%c",&o);
    switch (o){
        case 'a':
            printf("Hasil operasi %c: %d",o,iA+iB);
            break;
        case 'b':
            printf("Hasil operasi %c: %d",o,iA-iB);
            break;
        case 'c':
            printf("Hasil operasi %c: %d",o,iA*iB);
            break;
        case 'd':
            t=(float)iA/(float)iB;
            printf("Hasil operasi %c: %.1f",o,t);
            break;
        case 'e':
            printf("Hasil operasi %c: %d",o,iA/iB);
            break;
        case 'f':
            printf("Hasil operasi %c: %d",o,iA%iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
    }
    return 0;
}
