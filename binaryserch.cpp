#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
   int  start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start)+(end-start)/2;

        

    }
    return -1;
}
int main()
{
    int even[6]={33,22,55,4,6,99};
    int odd[5]={22,44,33,65,67};
    int index=binarysearch(even,6,99);
    int ind=binarysearch(odd,5,77);
    cout<<"index is"<<index<<endl;
    cout<<"index is"<<ind<<endl;
return 0;
}