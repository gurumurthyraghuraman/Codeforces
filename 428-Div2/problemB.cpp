#include <iostream>
#include <vector>

using namespace std;

bool combPossible(int n, int k, vector<int> group){
    int total4seaters=n;
    int total2seaters=n*2;
    int singleSoilders=0;
    int twoSeatCount=0;
    for(int i=0;i<k;i++){
            while(group[i]>=4){
                total4seaters--;
                group[i]-=4;
            }
            if(group[i]==3){
                total4seaters--;
            }
            if(group[i]==2){
                total2seaters--;
            }
            if(group[i]==1){
                singleSoilders++;
            }
    }

    while(total2seaters>0 && total4seaters<0){
            total2seaters-=2;
            total4seaters++;
    }

    while(total4seaters>0 && total2seaters<0){
            total2seaters++;
            total4seaters--;
            if(singleSoilders>0)
                singleSoilders--;
            else{
                twoSeatCount++;
                if(twoSeatCount%2==0)
                    total2seaters++;
            }
    }




    while(singleSoilders>0 && (total2seaters>0 || total4seaters>0)){
        while(total2seaters>0){
            total2seaters--;
            singleSoilders--;

        }
        while(total4seaters>0){
            total4seaters--;
            singleSoilders-=2;

        }

    }

    if(total4seaters<0 || total2seaters<0 || singleSoilders>0)
        return false;

    else return true;
}

int main(){
    int n,k,solInGrp;;
    vector<int> group;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cin>>solInGrp;
        group.push_back(solInGrp);
    }
    if(combPossible(n,k,group))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
