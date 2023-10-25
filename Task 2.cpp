#include <iostream>
using namespace std;

int main(){
	char repeat, func;
	double num1, num2, res;
	repeat='y';
	do{
		cout<<"Enter Num 1: ";
		cin>>num1;
		cout<<"Enter Num 2: ";
		cin>>num2;
		cout<<"Enter Function (+, -, *, /, %)";
		cin>>func;
		switch(func){
			case '+':
				res=num1+num2;
				break;
			case '-':
				res=num1-num2;
				break;
			case '*':
				res=num1*num2;
				break;
			case '/':
				res=num1/num2;
				break;
			case '%':
				int num1i;
				int num2i;
				num1i=num1;
				num2i=num2;
				res=num1i%num2i;
				break;
		}
		cout<<"The Answer is: "<<res<<endl;
		cout<<"Press Y to Continue Calculating or Press N for Quitting! ";
		cin>>repeat;
		repeat=tolower(repeat);
	}
	while(repeat=='y');
	cout<<"Calculation Complete, Quitting Application!";
	
	return 0;
}