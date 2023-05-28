#include<iostream>
#include<set>
using namespace std;

int main(){

    long long int n;
    cin>>n;
    while(n!=0)
    {
        if(n==1)
        {
            cout<<1;
            break;
        }
        else
        cout<<n<<" ";
        (n%2==0)? n=n/2 : n=n*3 +1;
    }
    
    return 0;
}