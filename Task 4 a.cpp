#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int count=0, ans;
	while(count<=20){
		ans=pow(2, count);
		cout<<"2 to the Power of "<<count<<" is: "<<ans<<endl;
		count++;
	}
	
	return 0;
}