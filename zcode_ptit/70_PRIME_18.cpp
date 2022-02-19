// #include<iostream>
// using namespace std ; 
// main () {
//     int t ;cin>>t ; 
//     while (t--) {
//         int m , n ; cin>>m>> n  ; 
//         int a , b ; cin>>a>>b ; 
//         int at , as , bt ,bs ; 
//         for (int i= m ; i<=n ; i++) {
//             if (i%a == 0) {
//                  at = i ;
//                 break ;  
//             }
//         }
//          for (int i= m ; i<=n ; i++) {
//             if (i%b == 0) {
//                 bt = i ;
//                 break ;  
//             }
//         }
//         for (int i = n ; i>=m ; i--) {
//             if (i% a ==0) {
//                  as = i ; 
//                 break ; 
//             }
//         }
//         for (int i = n ; i>=m ; i-- ) {
//             if (i% b ==0) {
//                 bs = i ; 
//                 break ; 
//             }
//         }
//         int count  = 0 ; 
//         for(int i=at ; i<=as ; i= i+a) {
//             if (i%b == 0) {
//                 count++ ; 
//             }
//         }
//         cout<<(as-at)/a+(bs-bt)/b +2 - count <<endl ; 


//     }
// }

#include<iostream>
using namespace std ; 
main () {
    int t ; cin>>t ; 
    while (t--) {
        int m , n , a ,b,count=0  ; 
        cin>>m>>n>>a>>b ; 
        for (int i=m ; i<=n ; i++) {
            if (i%a == 0 || i%b==0) {
                count++ ; 
            }
        }
        cout<<count<<endl  ; 
    }
}