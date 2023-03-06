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
    if(scanf("%d",&a)){
        if(a>0){
            printf("Bulat positif");
        }
        else{
            if(a<0){
                printf("Bulat negatif");
            }
            else{
                printf("Nol");
            }
        }
    }
    else{
        printf("Bukan termasuk sebuah bilangan");
    }

    return 0;
}
