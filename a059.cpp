#include <iostream>
using namespace std;
int main() {
    int total=0,times,n1,n2;
    cin>>times;
    int num[35];
    for(int g=1;g<32;g++){
            num[g-1]=g*g;
    }
    for(int i=0;i<times;i++){
        cin>>n1>>n2;
        for(int g=1;g<32;g++){
            if(num[g-1]>=n1 && num[g-1]<=n2){
                total=total+num[g-1];
            }
        }
        cout<<"Case "<<i+1<<": "<<total<<endl;
        total=0;
    }
    return 0;
}
