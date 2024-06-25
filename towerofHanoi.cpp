#include<iostream>
using namespace std;

void towerofHanoi(int n,string src,string helper,string destination)
{
    if(n==1)
    {
        cout<<"transfer disk "<<n<<" from "<<src <<" to "<<destination <<endl;
    }
    towerofHanoi(n-1,src,destination,helper);
    cout<<"transfer disk "<<n<<" from "<<src<<"to"<<destination<<endl;
    towerofHanoi(n-1,helper,src,destination);
}

int main()
{
    int n=4;
    towerofHanoi(n,"S","H","D");

    return 0;
}