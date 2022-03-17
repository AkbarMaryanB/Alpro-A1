// Nama File    : Nomor18.c
// Deskripsi    : Menentukan faktor dari bilangan integer sembarang
// Pembuat      : Akbar Maryan Bagaskara - 24060121120019
// Tgl Pembuat  : 17 Maret 2022
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
  int N;
  int i;

//Algoritma
  printf("Masukkan bilangan integer sembarang: ");
  scanf("%d", &N);
  for(i=1 ; i<=N ; i++){
     if (N % i == 0){
        printf("%d ", i);
        }
    }
        return 0;
}
