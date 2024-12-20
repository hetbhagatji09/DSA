#include<iostream>
using namespace std;
class Heap{
    public:
    int *arr;
    int size;
    int capacity;

    Heap(int capacity){
        arr=new int[capacity];
        size=0;
        capacity=0;

    }
    int left(int i){
        return 2*i+1;

    }
    int right(int i){
        return 2*i+2;
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert(int value){
        if(size==capacity){
            return ;
        }

        size++;
        arr[size-1]=value;
        for(int i=size-1;i!=0 && arr[parent(i)]> arr[i];){
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }

    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Heap h(16);
    h.insert(1);
    h.insert(3);
    h.insert(6);
    h.insert(5);
    h.insert(9);
    h.insert(8);
    h.print();



    return 0;
}
