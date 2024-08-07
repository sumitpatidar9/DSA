


#include <iostream>
#include <vector>
using namespace std;



int GridTraveller(int n, int m, vector<vector<int>> arr){

    if(n == 0 && m == 0){
        return 1;
    }

    if(n<0 || m<0){
        return 0;
    }

    if(n>=0 && m>=0 && arr[n][m] == -1){
        return;
    }

    return GridTraveller(n-1, m, arr)+ GridTraveller(n, m-1, arr);
}



int main(){

    return 0;
}