#include<iostream>
using namespace std;

int main(){
		int a, b, sum, count=0;
		cout<<"Enter Lower Limit: ";
		cin>>a;
		cout<<"Enter Upper Limit: ";
		cin>>b;
		count=a;
		while(count>=a && count<=b){
			if(count%2==1){
				sum=sum+count;
			}
			count++;
		}
		cout<<"The sum is: "<<sum<<endl;
		
		return 0;
}