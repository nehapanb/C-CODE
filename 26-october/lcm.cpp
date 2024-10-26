#include<iostream>
using namespace std;
int main(){

    int n1,n2,mx;
    cout <<"enter 1 no/n";
    cin>>n1;

    cout<<"enter 2 no/n";
    cin>>n2;

    mx=n1>n2?n1:n2;
    while(true)
    {
        if(mx%n1==0 && mx%n2 == 0)
        {
            cout<<mx;
            break;
        }
        mx++;
    }

}
