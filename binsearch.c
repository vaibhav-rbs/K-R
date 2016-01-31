#include "stdio.h"

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low+high) / 2;

        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }


    return -1;

}

int main()
{
    int v [10] = {1,4,6,67,90,1001,35674,5667,8655,9999};
    binsearch(35674,v,10);
}
