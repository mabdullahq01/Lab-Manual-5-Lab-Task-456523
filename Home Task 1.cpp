#include <iostream>
using namespace std;

int main()
{
    int i, n1, n2, j, hcf = 0, lcm;
    cout << " Input 1st number for LCM: ";
    cin >> n1;
    cout << " Input 2nd number for LCM: ";
    cin >> n2;
    if(n1<n2){
    	j=n1;
	}
	else if(n1>n2){
		j=n2;
	}
    j = (n1 < n2) ? n1 : n2;
    for (i = 1; i <= j; i++) {

        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    lcm = (n1 * n2) / hcf;
    cout << " The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
    
    return 0;
}