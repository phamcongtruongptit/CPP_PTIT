#include<iostream>
using namespace std ; 
main () {
        int t ; cin>>t ; 
        while (t--) {
            int n ; cin>>n ; int M[n] ; 
            for(int i=0 ; i<n ; i++) cin>>M[i] ; 
        int max  = -1 ;  int hieu ;
        int j ; 
        for(int i=0 ; i<n ; i++) {
            for (j=i+1 ;  j<n ; j++) {
                if(max < M[j] - M[i] ) max =  M[j] - M[i] ; 
            }
          
        }

        if (max<=0) {
            cout<<-1 ; 
        } else
         {
            cout<<max; 
        }
        cout<<endl ; 
   }          
}