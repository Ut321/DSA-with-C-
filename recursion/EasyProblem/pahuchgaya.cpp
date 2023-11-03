#include<iostream>
using namespace std;

void reachHome(int src , int dest){

    //base case
    if(src == dest){
        cout<<"pahuch gaya" <<endl;
        return;
    }
    //recursive call 
    reachHome(src+1, dest);

}


int main(){

    int dest = 10;
    int src = 1;
    cout<<endl;
    reachHome(src,dest);
}

//output : Pahuch gaya .