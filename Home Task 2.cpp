#include <iostream>
using namespace std;

int main()
{
    int a, d, nmax, count, vmax;
    int sum = 0;
    cout << " Input  the starting number of the series: ";
    cin >> a;
    cout << " Input the number of items for  the series: ";
    cin >> nmax;
    cout << " Input  the common difference of series: ";
    cin >> d;
    sum = (nmax * (2 * a + (nmax - 1) * d)) / 2;
    vmax = a + (nmax - 1) * d;
    cout << " The Sum of the series is : " << endl;
    count=a;
    while(count<vmax){
    	cout<<count<<" + ";
    	count=count+d;

	}
            cout << vmax << " = " << sum << endl;
	
	return 0;
}