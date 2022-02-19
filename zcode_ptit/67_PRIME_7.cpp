#include<iostream> 
#include<math.h>
using namespace std; 
//bool nguyento (int n) {
//	if (n==1 ) {
//		return false ; 
//	} 
//	for(int i=2 ; i<=sqrt (n) ; i++) {
//		if (n%i ==0 ) {
//			return false ; 
//		}
//		
//	}
//	return true ; 
//}
 int kiemtra(int n) {
// 	if(nguyento (n)) {
// 		return 0 ; 
//	 }
 	int count = 0 ; 
 	for (int i=2 ; i<=sqrt(n); i++) {
 		if(n%i ==0 ) {
 			count++ ; 
 			n/=i ; 
 			if (n%i == 0 ) {
 				return 0 ; 
			 }
		 }
	 }
	 if (  (n==1 && count==3 ) ||  ( n>1 && count==2) ) {
	 	return 1;
	 } else {
	 
	 return 0;
 }
 }
 
main ( ) {
	int t; cin>>t ; 
	while (t--) {
		int n ; cin>>n ;
		cout<<kiemtra(n)<<endl ; 
	}
}