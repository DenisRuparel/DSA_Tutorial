#include<bits/stdc++.h>
using namespace std;
void nForest(int n) {
	int i,j;
    for ( i = 1; i <= n; i++){
        for ( j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}
int main(){
	int t;
	cin >> t;
	nForest(t);
	return 0;
}