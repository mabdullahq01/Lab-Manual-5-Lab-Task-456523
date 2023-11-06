#include <iostream>
using namespace std;

int main(){
	int i, j, k, crow, row;
	cout<<"Please Enter Number of Rows: ";
	cin>>row;
	crow=row;
	for(i=1; i<=row; i++){
		crow=crow-1;
		for(j=crow; j>0; j--){
			cout<<" ";
		}
		for(k=1; k<=2*i-1; k++){
			cout<<"*";
		}

		cout<<endl;
		
	}
		crow=0;
		for(i=row; i>0; i--){
		for(j=0; j<crow; j++){
			cout<<" ";
		}
		for(k=1; k<=2*i-1; k++){
			cout<<"*";
		}
		crow=crow+1;
		cout<<endl;

}
}