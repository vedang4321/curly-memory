// Author: Siddharth Verma
#include <bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>>&a, vector<vector<int>>&b)
{
	int i, j, m=a.size(),n=a[0].size();
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			b[i][j]=a[j][i];
}
int main()
{
    int m,n,i,j;
    cout<<"Enter the number of rows and columns in matrix: ";
    cin>>m>>n;
	vector<vector<int>> a(m,vector<int>(n)), b(n,vector<int>(m));
	cout<<"Enter the matrix elements in each row:\n";
	for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
	transpose(a,b);
	cout<<"Resultant transpose matrix is \n";
	for(i=0;i<n;i++)
    {
		for(j=0;j<m;j++)
			cout<<b[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}
