#include<iostream>
using namespace std  ; 
void taomang(int M[] , int n) {
    for (int i=0 ; i<n ; i++){
        cin>>M[i];
    }
}

void inmang(int M[] , int n) {
    for (int i=0 ; i<n ; i++){
        cout<<M[i]<< " ";
    }
}
void insertSort (int a[],int n){
    int t,j;
    for(int i=1;i<n;i++)
    {
       j=i-1;
       t=a[i];
       while(j >= 0 && t < a[j])
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=t; // Chèn
        inmang(a, n) ;
    cout<<endl ; 

    }  
   


}




 main (){
     int n; cin>>n ; 
    int M[100] ; 
    taomang(M , n) ; 
    insertSort (M , n);
     
 }




























void InsertSort (int a[],int n)
{
    int t,j;
    for(int i=1;i<n;i++)
    {
       j=i-1;
       t=a[i];
       while(j >= 0 && t < a[j])
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=t; // Chèn
    }  
}