#include<iostream>
using namespace std  ; 
int M[100] ,n ;
bool kiemtraham = false ; 
void print() { // ham in xau nhi phan
    for(int i=1 ; i<=n ; i++) {
        cout<<M[i] ; 
    }
    cout<<" " ;
    return ;  
}
void sinhxaunhiphan() {
    int i=n  ; // duyet tu phai sang trai
    while( i > 0 && M[i]==1 ) i-- ;  // duyet tu phai sang. Gan i cho vi tri tim thay phan tu 0 dau tien
    // .Sau do cac vi tri tu i den n doi 0 thanh 1 va 1 thanh 0
    if(i==0) { // kiem tra xem da den cau hinh cuoi cung  chua. cau hinh cuoi cung la khi xau chua toan so 1 va khi 
    // khong tim thay so 0 nua thi i chay ve 0.
        kiemtraham = true  ; 
        return  ; 
    } else {
        for (int j=i ; j<=n ; j++) M[j] = 1-M[j]; // doi nguoc 0 thanh 1 , 1 thanh 0
    }
}
main () {
    int t; cin>>t ; 
    while (t--) {
       // int M[100] ,n ;
        kiemtraham = false; 
        cin>>n ; 
        for(int i=1 ; i<=n ; i++) M[i] =  0 ;  //khoi tao xau dau tien
        while(kiemtraham == false){ // den xau cuoi cung thi ket thuc
            print() ;  // in ra cac xau
            sinhxaunhiphan() ; // sinh ra xau nhi phan ke tiep
              
        }
        cout<<endl; 
  
    }
}