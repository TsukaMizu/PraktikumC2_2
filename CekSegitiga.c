// Nama : David Cristian Batubara
// NIM : 24060122130094
// Tanggal : 01/03/2023
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int a,b,c;
    //Algoritma
    printf("");
    scanf("%d",&a);
    printf("");
    scanf("%d",&b);
    printf("");
    scanf("%d",&c);
    if ((a>0)&&(b>0)&&(c>0)){
        if ((a==b)||(a==c)||(b==c)){
            if((a==b)&&(a==c)&&(b==c)){
                printf("Segitiga Sama Sisi");
            }
            else{
                printf("Segitiga Sama Kaki");
            }
        }
        else{
            if ((a+b)>c){
                printf("Segitiga Sembarang");
            }
            else{
                printf("Tidak dapat membentuk segitiga");
            }
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    return 0;
}
