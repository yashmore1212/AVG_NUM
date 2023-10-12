#include <iostream>
using namespace std;

int main() 
{
    int n, sum = 0,avg=0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) 
    {
        sum += i;
    }
     avg=sum/n;
    cout << "Sum = " << sum<<endl;
    cout<<"Average = "<< avg;
    return 0;
}




























