#include<iostream>
using namespace std;
int main(){                                    
    int t = 0;
    for(int r=1; r<=5; r++)
    {
        for(int c=5;c>=r;c--)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
        }
    }