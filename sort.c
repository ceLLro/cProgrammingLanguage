
#include <stdio.h>


int arr[20] = { 3, 4, 2, 3, 4, 2, 3, 4, 5, 6, 7, 8, 3, 4, 5, 6, 7, 8, 9, 2 };

void swap (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int sizeOfArray = sizeof (arr) / sizeof (int);

int main (){
       
    for(int i = 0; i < 20; i++){
    printf("%d  ", arr[i]);}
  
    int last = 0;
    for (int i = 0; i < sizeOfArray; i++){
        for (int j = 0; j < sizeOfArray - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap (&arr[j], &arr[j + 1]);
            }
	}
    }
    printf("\n\n");
    for(int i = 0; i < 20; i++){
        printf("%d  ", arr[i]);
    }
  return 0;
}
