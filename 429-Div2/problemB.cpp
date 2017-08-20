#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n,num;
    bool first=false;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(num%2==1){
            first=true;
            break;
        }

    }
    if(first)
        printf("First\n");
    else printf("Second\n");

    return 0;
}
