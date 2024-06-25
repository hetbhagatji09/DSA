#include<iostream>
#include<time.h>
using namespace std;
int main(){

    int min=0;
    clock_t t=clock();
    int arr[]={1,2,5,4,3};
    for(int i=0;i<5;i++){
        min=i;
        for(int j=i+1;j<5;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
    }
    t=clock()-t;
    double time=((double)t/CLOCKS_PER_SEC);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl<<time;
}