#include <iostream>
 
using namespace std;
 
int main(){
	cout << "Enter the value of rows and colums: ";
	int a,b;;
	cin >> a >> b;
	int arr[a][b];
	for(int i=0;i<a;i++){
		cout << "Enter the value for " << i+1 << " row: " <<endl;
		for(int j=0;j<b;j++){
			cin >> arr[i][j];
		}
	}
	cout <<endl;
	cout <<endl;
	cout << "Your Table"<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout << arr[i][j];
		}
		cout <<endl;
	}
	
}	