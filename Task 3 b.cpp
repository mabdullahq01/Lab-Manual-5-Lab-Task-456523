#include <iostream>
#include<math.h>
using namespace std;

int main(){
	int sum=0, count=0, square=0;
	while(count>=0 && count<=100){
		square=pow(count, 2);
		sum=sum+square;
		count++;	
	}
	cout<<"Sum of All Squares is: "<<sum<<endl;
	
	return 0;
}