#include <iostream>
using namespace std;
struct Poly
{
    int co;
    int expo;
};
int  add(Poly p1[10], Poly p2[10], Poly p3[10], int t1, int t2)
{
    int t3;
    int i, j, k;
    i = j = k = 0;
    while (i < t1 && j < t2)
    {
        if (p1[i].expo == p2[i].expo)
        {
            p3[k].co = p1[i].co + p2[j].co;
            i++;
            j++;
            k++;
        }
        else if (p1[i].expo > p2[i].expo)
        {
            p3[k].co = p1[i].co;
            i++;

            k++;
        }
        else if (p1[i].expo < p2[i].expo)
        {
            p3[k].co = p1[j].co;
            j++;
            k++;
        }
    }
    while (i <= t1)
    {
        p3[k].co = p1[i].co;
        i++;

        k++;
    }
    while(j<=t2)
    {
        p3[k].co=p1[i].co;
        j++;
            
        k++;
    }
    t3=k;
    return t3;

}

int main()
{

    return 0;
}
