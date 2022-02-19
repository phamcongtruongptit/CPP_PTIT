#include<iostream>
#include <math.h>
bool kiemtra(int n) {
	if (n==1) {
		return false ; 
	}
	for (int i=2 ; i<=sqrt(n) ; i++) {
		if (n%i ==0) {
			return false ; 
		}
	}
	return true ; 
}

using namespace std ; 
main () {
	int t ; cin>>t ; 
	while (t--) {
		int n ; cin>> n ; 
		for (int i=1 ;i<=n ; i++) {
			if(i==1) {
				cout<<1<<" " ;
			//	break ;  
			}else if (kiemtra (i) ) {
				cout<<i<<" ";
			//	break ; 
			} 
			else  {
				for (int k= 2 ; k<=sqrt(i)  ; k++) {
					bool c=true ; 
				while(i%k == 0) {
					cout<<k<<" ";
					c= false ; 
					break ; 
				}
				if(c==false) break ; 
			}
			}
		
			
		}
			cout<<endl ; 
	}
}