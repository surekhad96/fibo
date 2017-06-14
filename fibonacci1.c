# include<stdio.h>
int main()
{
    int i,r;
    long int arr[40];
    printf("Enter the number range: ");
    scanf("%d",&r);
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<range;i++){
         arr[i] = arr[i-1] + arr[i-2];
    }
    printf("\nFibonacci series is: ");
    for(i=0;i<range;i++)
         printf("%ld\n",arr[i]);  
    return 0;
}
