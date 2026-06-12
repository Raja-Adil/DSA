#include <iostream>
using namespace std;
int main() {

	int n;
	cout<<"Enter number of rows : ";
	cin>>n;
	for (int i=0;i<n-1;i++){
		for (int j=0;i+j<n-1;j++){
			cout<<" ";
		}
		for (int k=0;k<=i;k++){
			cout<<"*";
		}
		for (int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for (int i=0;i<n;i++){
	    for (int j=0;j<i;j++){
	        cout<<" ";}
	    for (int k=0;k<n-i;k++){
	        cout<<"*";
	    }
	    for (int j=0;j<n-i-1;j++){
	        cout<<"*";}
		cout<<endl;
	}
			return 0;
}