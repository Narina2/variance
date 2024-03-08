#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
    int n=10;
    int numbers[n];
    float mean=0,variance=0,
    std_deviation=0;
    for(int i=0;i<n;i++){
        numbers[i]=rand()%100;
        //mean +=numbers[i];
    }
    mean/=n;
    for(int i=0;i<n;i++){
        variance +=pow(numbers[i]-mean,2);
        }
        variance/=n;
    std_deviation=sqrt(variance);

    printf("Numbers:");
    for(int i=0;i<n;i++){
        printf("%d",numbers[i]);
    }
    printf("\nMean:%.2f\nVariance:%.2f\nStandard Deviation:%.2f\n",mean,variance,std_deviation);

    return 0;
}
