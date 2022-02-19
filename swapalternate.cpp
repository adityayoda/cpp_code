#include<iostream>
using namespace std;
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);

            // cout << arr[i] << endl;
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
         cout << arr[i] << endl;
    }
}
int main()

{



   int even[6] = {1, 2, 3, 4, 5, 0};
   int odd[5] = {1, 2, 3, 4, 5};
     swapalternate(even, 6);
     swapalternate(odd, 5);
     printarray(even, 6);
     printarray(odd,5);

return 0;}