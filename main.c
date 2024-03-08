#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n=10;
    int numbers[n];
    int min,max;

    srand(time(NULL));

    for(int i=0;i<n;i++){
        numbers[i]=rand()%100;
    }

    min=max=numbers[0];
    for(int i=1;i<n;i++){
        if(number[i]<min){
            min=numbers[i];
        }
        if(numbers[i]>max){
            max=numbers[i];
        }
    }

    printf("Min:%d\nMax:%d\n",min,max);


    for(int i=0;i<n-1;i++){
        for(int j=0;<n-i-1;j++){
            if(numbers[j]>numbers[j+1]){
                int temp=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=temp;
            }
        }
    }

    printf("Numbers in ascending order:");
    for(int i=0;<n;i++){
        printf("%d",numbers[i]);
    }

    return 0;
}



