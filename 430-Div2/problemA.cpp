#include <iostream>

using namespace std;

bool effEqualToK(int l, int r, int x, int y, int k){
    double a;
    while(l<=r && x<=y){
        a=(double)l/x;
        if(a==k)
            return true;
        if(a<k){
            l++;
        }
        else{
            x++;
        }

    }
    return false;
}


int main(){
    int l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    if(effEqualToK(l,r,x,y,k))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
