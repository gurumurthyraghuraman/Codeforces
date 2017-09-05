#include <iostream>
#include <math.h>
using namespace std;

bool sausageOnPizza(int xs, int ys, int sr, int r, int d){
    double dist=sqrt(xs*xs + ys*ys);
    if(dist-sr<r-d)
        return false;
    if(dist+sr>r)
        return false;

    return true;

}

int main(){
    int r,d;
    cin>>r>>d;
    int noOfSausages;
    cin>>noOfSausages;
    int cSausages=0;
    int xs,ys,sr;
    for(int i=0;i<noOfSausages;i++){
        cin>>xs>>ys>>sr;
        if(sausageOnPizza(xs,ys,sr,r,d)){
            cSausages++;
        }
    }
    cout<<cSausages<<endl;

    return 0;
}
