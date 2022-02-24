#include <iostream>
using namespace std;
int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s= mid + 1;
            // cout<<ans<<s<<e<<endl;
        }
        else if (arr[mid] < key)
        {

            s = mid + 1;
            // cout<<ans<<s<<e<<endl;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
        //cout << ans << " " << s << " " << e << endl;
    }
    return ans;
}
int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
            // cout<<ans<<s<<e<<endl;
        }
        else if (arr[mid] < key)
        {

            s = mid + 1;
            // cout<<ans<<s<<e<<endl;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
        //cout << ans << " " << s << " " << e << endl;
    }
    return ans;
}
int main()
{
    int even[7] = {1, 2, 3, 3, 4, 4, 5};
   // int odd[5]={1,4,55,6,6,};
    cout << "first occ of element at index"
         << " " << firstOcc(even, 7, 5) << endl
         <<"last occ of element at index"<<" "<<lastOcc(even,7,3)<<endl;


    return 0;
}