// Nama file    : CountingSort.c
// Deskripsi    : Menampilkan urutan array dari terkecil sampai terbesar menggunakan Counting Sort
// Pembuat      : Akbar Maryan Bagaskara - 24060121120019
// Tgl Pembuat  : 02 Mei 2022
#include <stdio.h>
#include <stdlib.h>

void counting_sort(int arr1[],int n,int max, int min){
    //Kamus Lokal
    int count[100]={0};
    int i;
    int j;

    //Algoritma
    for(i=0;i<n;++i)
        count[arr1[i]-min]=count[arr1[i]-min]+1;
    for(i=0;i<=max-min;++i)
        for(j=1;j<=count[i];++j)
            printf("%d ",i+min);
}

//PROGRAM UTAMA
int main(){
    //Kamus
    int i;
    int n;
    int *arr;
    int max=0;
    int min=1;

    //Algoritma
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("Nilai array ke-%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array sebelum disorting: ");
    for(i = 0; i < n; i++){
        if(arr[i]>max)
            max=arr[i];
        (arr[i]<min)? min=arr[i] : min;
        printf("%d ", arr[i]);
    }

    printf("\nArray setelah disorting: ");
    counting_sort(arr,n,max, min);

    return 0;
}
