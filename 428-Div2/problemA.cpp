#include <iostream>
#include <vector>
using namespace std;

int minDays(int n, int k, vector<int> candy){
    int noOfCandiesAvl=0;
    int givenCandies=0;
    for(int i=0;i<n;i++){
        noOfCandiesAvl+=candy[i];
        if(noOfCandiesAvl>=8){
        	givenCandies+=8;
        	noOfCandiesAvl-=8;
        }
        else{
        	givenCandies+=noOfCandiesAvl;
        	noOfCandiesAvl=0;
        }
        if(givenCandies>=k){
        	return i+1;
        }

    }
    return -1;


}


int main(){
    int n,k,candyEachDay;
    vector<int> candies;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>candyEachDay;
        candies.push_back(candyEachDay);
    }
    cout<<minDays(n,k,candies)<<endl;
    return 0;
}
