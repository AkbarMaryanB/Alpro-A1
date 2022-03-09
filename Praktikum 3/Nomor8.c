/*Nama File	: Nomor8.c*/
/*Deskripsi	: menuliskan ke layar nama-nama Hari dari nomor hari*/
/*Pembuat	: Ivan S Harianja - 24060121120007*/
/*Tgl pembuatan	: Selasa, 08 Maret 2022*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
        int x ;

    /* Algoritma */
        printf("Masukan nomor hari : ");
        scanf("%d", &x);
        switch(x){
        case 1 :
            printf("Senin");
            break ;
        case 2 :
            printf("Selasa");
            break ;
        case 3 :
            printf("Rabu");
            break ;
        case 4 :
            printf("Kamis");
            break ;
        case 5 :
            printf("Jumat");
            break ;
        case 6 :
            printf("Sabtu");
            break ;
        case 7 :
            printf("Minggu");
            break ;
        default:
            printf("Masukan nomor hari tidak tepat");
        }
    return 0 ;
}
