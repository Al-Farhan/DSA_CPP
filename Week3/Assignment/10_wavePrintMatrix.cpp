#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v) {
    int row = v.size();
    int col = v[0].size();

    for(int startCol=0; startCol<col; startCol++) {
        // For even col
        if((startCol & 1) == 0) {
            for(int startRow=0; startRow<row; startRow++) {
                cout<<v[startRow][startCol]<<" ";
            }
            cout<<endl;
        }


        // For odd col
        else {
            for(int startRow=row-1; startRow>=0; startRow--) {
                cout<<v[startRow][startCol]<<" ";
            }
            cout<<endl;
        }
    }

}

int main() {

    vector<vector<int>> v;
    v = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    wavePrintMatrix(v);
    return 0;
}