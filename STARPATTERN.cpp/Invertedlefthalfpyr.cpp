
// INVERTED LEFT HALF PYRAMID:
##include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        for(int j=0;j<2*i;j++){
            cout<<" ";
    }
     for(int k=n;k>i ;k--){
          cout<<"* ";
     }
     cout<<"\n";
}
return 0;
}

//     or 

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        for(int k=0;k<n-i;k++){
            cout<<"* ";
    }
    cout<<"\n";

}

return 0;
}

