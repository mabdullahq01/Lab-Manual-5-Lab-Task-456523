#include <iostream>
using namespace std;

int main(){
	int count=2, sum=0;
	while(count>=2 && count<=100){
		if(count%2==0){
			sum=sum+count;
		}
		count++;
	}
	cout<<"Sum is: "<<sum<<endl;
	
	return 0;
}