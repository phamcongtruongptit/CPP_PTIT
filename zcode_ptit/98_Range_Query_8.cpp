#include<iostream>
using namespace std ; 
main() {
	int t ; cin>>t ; 
	while (t--) {
		int n,k ; cin>>n>>k ; int M[n] ; 
		for (int i=0 ; i<n ; i++) cin>>M[i] ; 

		int  sum =0 , danhdau ; float max = 0 ;
		for (int i=0 ; i<=k-1; i++) {
			sum+=M[i] ; 
		}
		max = (float) sum / k ; 

		
			for (int i=0 ; i<=n-k ; i++) {
				sum=0 ; 
				for(int j=i ; j<=i+k-1 ; j++) {
					sum+=M[j] ; 
				}
				if (((float)sum / k )>max){ 
					max = (float)sum / k;
					danhdau = i ; 
				} 
			}
			for(int i=danhdau ; i<=danhdau+k-1 ; i++) cout<<M[i]<<" " ; 
		
		cout<<endl ; 
		
	
	}
}