#include <iostream>
using namespace std;
int summation(int arr[], int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {2, 7, 1, -4, 1};
    int sum = summation(arr, 5);

    cout << "sum is equall to"<<" " << sum << endl;
}
