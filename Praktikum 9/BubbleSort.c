// Nama File    : BubbleSort.c
// Deskripsi    : Menampilkan urutan array dari terkecil sampai terbesar menggunakan Bubble Sort
// Pembuat      : Akbar Maryan Bagaskara - 24060121120019
// Tgl Pembuat  : 02 Mei 2022
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n)
{
    //Kamus Lokal
    int i;
    int j;
    int temp;

    //Algoritma
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Program Utama
int main()
{
    //Kamus
    int i;
    int n;
    int *arr;

    //Algoritma
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("Nilai array ke-%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
