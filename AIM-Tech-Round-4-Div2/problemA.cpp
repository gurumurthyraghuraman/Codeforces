#include <iostream>
#include <string>

using namespace std;


int noOfCharsChanged(string strInput, int k){
    int inputLen=strInput.size();
    int arr[26]={0};
    int uniqueChars=0;
    if(inputLen<k)
        return -1;

    for(int i=0;i<inputLen;i++){
        if(arr[strInput[i]-'a']==0)
            uniqueChars++;

        arr[strInput[i]-'a']+=1;
    }

    if(uniqueChars>k)
        return 0;

    return k-uniqueChars;



}

int main(){
    string strInput;
    int k;
    cin>>strInput>>k;
    int result=noOfCharsChanged(strInput,k);
    if(result==-1)
        cout<<"impossible"<<endl;
    else cout<<result<<endl;
    return 0;
}
