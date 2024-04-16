#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    int count = 0;
    for (int i = 1; i <= n; i++) // Changed loop start condition to 1
    {
        for(int j=0;j<n-i;j++){ // Changed loop condition to n-i
            cout << ' ';
        }
        for(int k=1;k<=i;k++){
            cout << k;
        }
        for(int l=i-1;l>=1;l--){ // Corrected the loop to print decreasing numbers
            cout << l;
        }

        cout << endl;
    }
}
