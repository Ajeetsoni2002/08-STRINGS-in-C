#include<stdio.h>
  void printNumber(int arr[],int n); //we can also use a pointer in the place  of arr[]
/* like 
void printnumber (int *ptr,int n); */ 
int main()
{
        int arr[]={1,2,3,4,5,6};
        printNumber(arr,6);

        return 0;

}
void printNumber(int arr[],int n){ // there  is also same
        for(int i=0;i<n;i++){
                printf("%d\t",arr[i]);
        }
        printf("\n");
}