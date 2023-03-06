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
    if (a>=0 && b>=0 && c>=0){
        printf("Jumlah dari ketiga bilangan adalah %d",a+b+c);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif\n");
    }

    return 0;
}
