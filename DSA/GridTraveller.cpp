


#include <iostream>
using namespace std;



int GridTraveller(int n, int m){

    if(n == 0 && m == 0){
        return 1;
    }

    if(n< 0 || m<0){
        return 0;
    }
    return GridTraveller(n-1, m) + GridTraveller(n, m-1);
}


int main(){

    int numberOfWays = GridTraveller(5,5);
    cout << numberOfWays << endl;
    return 0;
}