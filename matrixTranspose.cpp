#include <bits/stdc++.h> //including header files
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            //Swap
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    //Printing the transpose
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
        //line change for proper format of matrix
    }
    return 0;
}
