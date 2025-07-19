#include <stdio.h>
int main(){
    int i,size;
        printf("Enter the array size: ");
            scanf("%d",&size);

    int arr[size];
        printf("Enter the array values: ");
            for(i=0; i<size; i++){
                scanf("%d",&arr[i]);
            }
        printf("Display the array values: ");
            for(i=0; i<size; i++){
                if(i==0)
                    printf("| %d |", arr[i]);
                else
        printf(" %d ",arr[i]);
            }
// Sum of the array values.
int sum = 0;
for(i=0; i<size; i++){

        sum+=arr[i];
    }
printf("\nDisplay the sum of array: %d", sum);
return 0;
}
