// STAR PATTERN SQUARE :
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){   // or for(int j=5;j>0;j--)
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}