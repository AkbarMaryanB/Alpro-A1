// Nama file    : InsertionSort.c
// Deskripsi    : Menampilkan urutan array dari terkecil sampai terbesar menggunakan Insertion Sort
// Pembuat      : Akbar Maryan Bagaskara - 24060121120019
// Tgl Pembuat  : 02 Mei 2022
#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int array[], int n)
{
    //Kamus Lokal
    int i;
    int temp;
    int j;

    //Algoritma
    for(i = 1; i < n; i++) {
        temp = array[i];
        j = i - 1 ;
        while (j>=0 && array[j] > temp){
            array[j + 1] = array[j];
            j = j - 1 ;
        }
        array[j + 1] = temp;
    }
}

//PROGRAM UTAMA
int main()
{
    //Kamus
    int i;
    int n;
    int array[] = {40,5,63,15,12,28,70,41,49,90};

    //Algoritma
    n = sizeof(array) / sizeof(array[0]);
    InsertionSort(array, n);
    for(i = 0; i < n; i ++){
        printf("%d ", array[i]);
    }

    return 0;
}
