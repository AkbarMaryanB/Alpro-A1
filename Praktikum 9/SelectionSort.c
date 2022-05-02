// Nama file    : SelectionSort.c
// Deskripsi    : Menampilkan urutan array dari terkecil sampai terbesar menggunakan Selection Sort
// Pembuat      : Akbar Maryan Bagaskara - 24060121120019
// Tgl Pembuat  : 02 Mei 2022
#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int array[], int n)
{
    //Kamus Lokal
    int i;
    int min;
    int temp;
    int j;

    //Algoritma
    for(i = 0; i < n; i++) {
        min = i;
        for(j = i+1; j < n; j++){
            if (array[j] < array[min]){
                min = j;
            }
        }
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }

}

//PROGRAM UTAMA
int main()
{
    //Kamus
    int i;
    int n;
    int array[] = {100,75,59,10,2,33,50,42,27,1};

    //Algoritma
    n = sizeof(array) / sizeof(array[0]);
    SelectionSort(array, n);
    for(i = 0; i < n; i ++){
        printf("%d ", array[i]);
    }

    return 0 ;
}
