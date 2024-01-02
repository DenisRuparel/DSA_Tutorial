#include<bits/stdc++.h>
using namespace std;
void nNumberTriangle(int n) {
	int i, j;
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n-i-1; j++){
            cout << " ";
        }
 
        for ( j = 0; j < 2*i+1; j++){
            cout << "*";
        }

        for ( j = 0; j < n-i-1; j++){
            cout << " ";
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