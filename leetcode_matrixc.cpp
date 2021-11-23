#include<bits/stdc++.h> 
using namespace std;
int len = 3;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        

        // output
        for(int i = 0 ; i < len; ++i){
            for(int j = 0 ; j < len; ++j){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }

    }
};
int main(){
    #ifndef ONLINE_JUDEG     
    freopen("./input.txt", "r", stdin);
    freopen("./output.txt", "w", stdout);
    #endif ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    vector<vector<int>> matrix;
    for(int i = 0; i < len; ++i){
        vector<int>thisLine;
        for(int j = 0; j < len; ++j){
            int tmp;
            cin >> tmp;
            thisLine.pus_back(tmp);
        }
        matrix.push_back(thisLine);
    }
    Solution s;
    s.rotate(matrix);
    return 0;
}h
