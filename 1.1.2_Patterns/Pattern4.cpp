#include<bits/stdc++.h>
using namespace std;
    void triangle(int n) {
	int i,j;
    for ( i = 1; i <= n; i++){
        for ( j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
int main(){
	int t;
	cin >> t;
	triangle(t);
	return 0;
}