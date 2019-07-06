#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
    unsigned long max = 0,prod;
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
    	for(int grid_j = 0;grid_j < 20;grid_j++){
    		cin >> grid[grid_i][grid_j];
    	}    
        for(int i=0;i<20;i++){
            for(int j=0;j<20;j++){
                if(j+3<20){
                    prod = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
                }
                if(prod>max){
                    max= prod;
                }

                if(i+3<20){
                    prod = grid[i][j] * grid[i+1][j] * grid[i+2][j] * grid[i+3][j];
                }
                if(prod>max){
                    max= prod;
                }

                if(i+3<20 && j+3<20){
                    prod = grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3];
                }
                if(prod>max){
                    max= prod;
                }

                if(i+3<20 && j-3>=0){
                    prod = grid[i][j] * grid[i+1][j-1] * grid[i+2][j-2] * grid[i+3][j-3];
                }
                if(prod>max){
                    max= prod;
                }

                if(i-3>=0 && j-3>=0){
                    prod = grid[i][j] * grid[i-1][j-1] * grid[i-2][j-2] * grid[i-3][j-3];
                }
                if(prod>max){
                    max= prod;
                }

                if(i-3>=0 && j+3>20){
                    prod = grid[i][j] * grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3];
                }
                if(prod>max){
                    max= prod;
                }
            }
        }
    }
    cout << max << endl;
    return 0;
}

