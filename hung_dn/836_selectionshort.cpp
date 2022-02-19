#include<iostream>
using namespace std; 
void taomang(int M[100]  , int n ) {
    for (int i=0 ; i<n  ; i++) {
        cin>>M[i]; 
    }
}
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
// Hàm selection sort

void Selection(int a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
	
		int iMin = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[iMin] > a[j])
			    iMin = j;
		}
		if (i != iMin){
            	swap(a[i], a[iMin]);
        }
        for (int k=0 ; k<n ; k++ ) {
            cout<<a[k]<<" " ;
        }
        cout<<endl ; 
		
	}
}

main (){
    int n ; cin>>n ;
    int M[100] ; 
    taomang(M , n) ; 
    Selection(M ,n);
}



