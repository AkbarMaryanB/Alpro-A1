// Deskripsi    : Menentukan bilangan prima dari masukan integer sembarang
// Pembuat      : Akbar Maryan Bagaskara - 24060121120019
// Tgl Pembuat  : 17 Maret 2022
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
  int N ;
  int i ;
  int x = 0 ;

//Algoritma
  printf("Masukkan bilangan integer sembarang: ");
  scanf("%d", &N);
  if(N > 0){
    for(i=1 ; i<=N ; i++){
       if (N % i == 0){
           x = x + 1;
       }
    }
    if(x == 2){
      printf("%d adalah bilangan prima",N);
    }
    else {
      printf("%d bukan bilangan prima",N);
    }
  }
  else {
    printf("masukkan salah atau harus bilangan positif");
  }
  return 0;
}
