#include<bits/stdc++.h>
using namespace std;
void nNumberTriangle(int n) {
	int i,j;
    for ( i = n; i >= 0; i--){
        for ( j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
	cin >> t;
	nNumberTriangle(t);
	return 0;   
}