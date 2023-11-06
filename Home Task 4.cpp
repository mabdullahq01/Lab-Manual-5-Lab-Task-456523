 #include <iostream>
 using namespace std;
 
int main(){
	int i, j, dec;
	int array1 [8];
	for(j=0; j<9; j++){
		array1[j]=0;
			}
	cout<<"Enter a Decimal Number from 0-255: ";
	cin>>dec;
	while (dec>0){
		array1[i++]=dec%2;
		dec=dec/2;
	}
	for(i=8; i>0; i--){
		cout<<array1[i];
	}
}