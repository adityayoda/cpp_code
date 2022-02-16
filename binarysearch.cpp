#include<iostream>
using namespace std;
bool serch( int arr[],int size,int key){
   for(int i=0;i<size;i++){
    if(arr[i]==key){
        return i;
    }
}
return 0;
}
int main()
{
int arr[100]={1,24,3,4,5,6,6,44,4,3,6};
cout<<"enter the key to serch for"<<endl;
int key;
cin>>key;
bool found= serch(arr,10,key);
if(found){
    cout<<"key is present"<<endl;
}
else{
    cout<<"key is absent"<<endl;
}

}