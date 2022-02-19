#include<iostream>
#include <math.h>

using namespace std ;

bool kiemtra (int n) {
	if (n==1 ) {
		return false ; 
	} 
	for(int i=2 ; i<=sqrt (n) ; i++) {
		if (n%i ==0 ) {
			return false ; 
		}
		
	}
	return true ; 
}
 
main() {
	int t; cin>> t; 
	while (t--) {
		int n ; cin>> n ; 
		for (int i=2 ; i<n ; i++) {
			if (kiemtra (i) && kiemtra (n-i) ) {
				cout<<i<<" "<<n-i<<endl ; 
				break ; 
			}
		}
		
	}
}