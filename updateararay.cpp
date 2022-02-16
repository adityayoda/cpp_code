#include<iostream>
using namespace std;
 void update(int arr[],int n){
     cout<<"inside the function"<<endl;
     arr[0]=12;
     for(int i;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     cout<<"going back to main function"<<endl;
 }
int main()
{
    int j;
    int arr[5]={ 7,5,8,9,-14 };
    
    update(arr,5);
    
    cout<<"printing the main function"<<endl;
    for(int i=0;i<5;i++){
       cout<<arr[i]<<endl;
    }

}