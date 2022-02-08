#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    /*int max=pow(2,31)-1;
   int min=pow(2,31);*/

    while(n!=0){
        int digit=n%10;
        if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
            return 0;
        }
        ans=(ans*10)+digit;
        cout<<ans<<" "<<endl;
        n=n/10;
    }
}