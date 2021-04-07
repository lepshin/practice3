#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 100

int main() {
    int arr[SIZE];
    int min = 19;
    srand (time(NULL)); //инициализируем датчик случайных чисел
    printf("Первый массив чисел:\n");
    for ( int i = 0; i<SIZE;i++){
        arr[i]=rand()%18-9;//заполняем массив случайнми числами
    }
    for ( int i = 0; i<SIZE;i++){
        if(i%10 == 0&&i!=0)printf("\n");
        printf("%d\t ", arr[i]);
    }
    for ( int i = 0; i<SIZE;i++){
        if (arr[i]/1>0&&arr[i]!=0&&arr[i]<min)
            min = arr[i];
    }

    printf("\n");
    printf("Преобразованный массив чисел:\n");

    for ( int i = 0; i<SIZE;i++){
        if(i%10 == 0&&i!=0)printf("\n");
        if (arr[i]<0) arr[i]=min;//замена отрицательных элементов минимальными положительными
        printf("%d\t", arr[i]);
    }
    return 0;
}