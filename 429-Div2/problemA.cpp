#include <iostream>

using namespace std;

bool allBallonsGiven(int arr[26],int n, int k){
    for(int i=0;i<26;i++){
        if(arr[i]>k){
            return false;
        }
    }
    return true;
}


int main(){
    int arr[26]={0};
    int n,k;
    char c;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>c;
        arr[c-'a']+=1;
    }
    if(allBallonsGiven(arr,n,k))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
