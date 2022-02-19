#include<iostream>
#include<math.h> 
using namespace std ;
bool kiemtra (int n) {
	if (n==1) {
		return false ; 
	}	
	for(int i=2 ; i<=sqrt(n) ; i++) {
		if (n%i == 0 ) {
			return false ; 
		}
	}
	return true ; 
}

main() {
	int t ; cin>>t ; 
	while(t--) {
		int n  , m ;
		cin>>n>>m ;
		for (int i=n ; i<=m ; i++) {
			if (kiemtra (i)) {
				cout<<i<<" " ;
			}
		}
		cout<<endl ; 
	}
}