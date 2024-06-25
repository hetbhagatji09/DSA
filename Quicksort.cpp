#include <iostream>
using namespace std;

int Partician(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= pivot )
        {
            i++;
        }  
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    } while (i < j);

    
    swap(arr[low],arr[j]);
    
    return j;
}
void Quicksort(int arr[], int low, int high)
{
    int particianIndex; 
    // return index of partician/
    if (low < high)
    {
        particianIndex= Partician(arr, low, high);
        Quicksort(arr, low, particianIndex - 1);
        Quicksort(arr, particianIndex + 1, high);
    }
}
void printarray(int a[],int size)
{
    for ( int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int a[] = {40,5,20,1};

    printarray(a,4);
    cout<<endl;
    Quicksort(a, 0, 3);
    printarray(a,4);
    return 0;
}
