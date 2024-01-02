#include<bits/stdc++.h>
using namespace std;
void seeding(int n) {
	int i,j;
    for ( i = n; i >= 0; i--){
        for ( j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int t;
	cin >> t;
	seeding(t);
	return 0;   
}