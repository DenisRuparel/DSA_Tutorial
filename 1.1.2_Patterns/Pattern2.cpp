#include<bits/stdc++.h>
using namespace std;
void nForest(int n) {
	int i,j;
    for ( i = 0; i < n; i++){
        for ( j = 0; j <= i; j++){
            cout << "*";
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
