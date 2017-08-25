#include <iostream>

using namespace std;

unsigned long long combinations(int n, int m){
    if(n==m)
        return 1;
    if(m>n/2)
	m=n-m;
    unsigned long long numerator=1;
    unsigned long long denominator=1;

    unsigned long long j=2;
    for(unsigned long long i=n;i>n-m;i--){
        numerator=numerator*i;
        if(j<=m){
            denominator=denominator*j;
            j++;
        }
        if(numerator%denominator==0){
           numerator=numerator/denominator;
           denominator=1;
        }

    }
    while(j<=m){
        denominator=denominator*j;
        j++;
    }
    return numerator/denominator;

}


int main(){
    unsigned long long n,m,arrNum;
    unsigned long long board[50][50];
    int whites=0;
    int blacks=0;
    cin>>n>>m;
    unsigned long long sum=n*m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arrNum;
            board[i][j]=arrNum;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]==0){
                whites++;
            }
            else blacks++;
        }
        if(whites>1){
            for(int k=2;k<=whites;k++)
                sum+=combinations(whites,k);
        }
        if(blacks>1){
            for(int k=2;k<=blacks;k++)
                sum+=combinations(blacks,k);
        }
        whites=0;
        blacks=0;
    }
    whites=0;
    blacks=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[j][i]==0){
                whites++;
            }
            else blacks++;

        }
        if(whites>1){
            for(int k=2;k<=whites;k++)
                sum+=combinations(whites,k);
        }
        if(blacks>1){
            for(int k=2;k<=blacks;k++)
                sum+=combinations(blacks,k);
        }
        whites=0;
        blacks=0;


    }
    cout<<sum<<endl;
    return 0;
}
