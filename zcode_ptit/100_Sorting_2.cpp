#include<iostream>
#include<math.h>
using namespace std ; 
void bubblesort(int arr[], int n , int k) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if ( abs(arr[j]- k ) > abs(arr[j + 1] - k ) ) {
				// swap
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

main () {
    int t ; cin>>t ; 
    while(t--) {
        int n ,  k  ; cin>> n>> k  ;   int M[n] ; 
        for (int i=0 ; i<n ; i++) cin>>M[i] ; 
        bubblesort(M , n , k ) ; 
        for (int i=0 ; i<n ; i++) cout<<M[i]<<" " ; 
        cout<<endl  ; 
        
    }
}