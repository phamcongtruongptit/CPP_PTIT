//Liet ke cac xau nhi phan do dai n: su dung quay lui - BackTrack
#include <iostream>
using namespace std;
int n, s[100], i, count=1;
bool cauhinhcuoi=false;
void print(){	//In mot cau hinh
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=n; j++)	cout << s[j] << " ";
	return;
}
void BackTrack(int j){	//Liet ke cac xau nhi phan do dai n
	for(int i=0; i<=1; i++){	//Xet cac kha nang cua s[j]: 2 kha nang 0 va 1
		s[j]=i;					//Thu nhan s[j]
		if(j==n){				//Thanh phan cuoi cung
			print();
		}
		else
			BackTrack(j+1);		//Chua du thanh phan: liet ke cac cau hinh con tu j+1
	}
}
int main() {
	cout << "\nLiet ke BackTrack cac xau nhi phan do dai n:\n";
	n=3;
	BackTrack(1);
	return 0;
}
=========================================================================
//Liet ke cac to hop chap k cua 1..n: su dung quay lui - BackTrack
#include <iostream>
using namespace std;
int n, k, s[100], i, count=1;
bool cauhinhcuoi=false;
void print(){	//In mot cau hinh
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=k; j++)	cout << s[j] << " ";
	return;
}
void BackTrack(int j){	//Liet ke cac to hop chap k cua 1..n
	for(int i=s[j-1]+1; i<=n-k+j; i++){	//Xet cac kha nang cua s[j]
		s[j]=i;					//Thu nhan s[j]
		if(j==k){				//Dat den thanh phan cuoi cung, du 1 to hop: in
			print();
		}
		else
			BackTrack(j+1);		//Chua du thanh phan: liet ke cac cau hinh con tu j+1
	}
}
int main() {
	cout << "\nLiet ke BackTrack cac to hop chap k cua 1..n:\n";
	n=5;	k=3;
	BackTrack(1);
	return 0;
}
============================================================================================
//Liet ke cac hoan vi cua 1..n: su dung quay lui - BackTrack co dieu kien
#include <iostream>
using namespace std;
int n, s[100], i, count=1;
bool cauhinhcuoi=false, unused[100];
void print(){	//In mot cau hinh
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=n; j++)	cout << s[j] << " ";
	return;
}
void BackTrack(int j){	//Liet ke cac to hop chap k cua 1..n
	for(int i=1; i<=n; i++){	//Xet cac kha nang cua s[j]
		if(unused[i]==true){	//Chua xet thi duoc su dung
			s[j]=i;				//Thu nhan s[j]
			unused[i]=false;	//Danh dau: da su dung kha nang i
			if(j==n){			//Dat den thanh phan cuoi cung, du 1 to hop: in
				print();
			}
			else
				BackTrack(j+1);	//Chua du thanh phan: liet ke cac cau hinh con tu j+1
			unused[i]=true;
		}
	}
}
int main() {
	cout << "\nLiet ke BackTrack cac hoan vi cua 1..n:\n";
	n=6;
	for(int k=1; k<=n; k++)	unused[k]=true;
	BackTrack(1);
	return 0;
}