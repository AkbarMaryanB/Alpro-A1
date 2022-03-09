/*Nama File	: Nomor9*/
/*Deskripsi	: menuliskan ke layar nama-nama hari dari nomor hari tersebut yaitu 1 s.d. 7 yang dibaca dari masukan keyboard*/
/*Pembuat	: Akbar Maryan Bagaskara - 24060121120019*/
/*Tgl pembuatan	: 09 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kamus */
    int h ;

    /* Algoritma */
    printf("Masukan nomor hari : ");
    scanf("%d", &h);
    switch(h) {
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
