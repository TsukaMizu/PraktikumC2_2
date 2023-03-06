// Nama : David Cristian Batubara
// NIM : 24060122130094
// Tanggal : 01/03/2023
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int a;
    //Algoritma
    printf("");
    scanf("%d",&a);
    switch(a){
        case 2:
            printf("Senin");
            break;
        case 3:
            printf("Selasa");
            break;
        case 4:
            printf("Rabu");
            break;
        case 5:
            printf("Kamis");
            break;
        case 6:
            printf("Jumat");
            break;
        case 7:
            printf("Sabtu");
            break;
        case 1:
            printf("Minggu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
        }
    return 0;
}
