

#include <iostream>
#include <vector>
using namespace std;




int PickCherry(vector<vector<int>> Grid, int n, int m){

    if(n == 0 && m == 0){
        return Grid[0][0];
    }

    if(n<0 || m<0){
        return 1e9;
    }

    int left = Grid[m][n] +  PickCherry(Grid, n-1, m);
    int up = Grid[m][n] + PickCherry(Grid, n, m-1);


    return min(left, up);
}


int main(){

    return 0;
}
