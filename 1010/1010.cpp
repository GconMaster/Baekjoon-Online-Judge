#include <iostream>

using namespace std;

// Returns value of Binomial Coefficient C(n, k)  
int binomialCoeff(int n, int k)  
{  
    int res = 1;  
  
    // Since C(n, k) = C(n, n-k)  
    if ( k > n - k )  
        k = n - k;  
  
    // Calculate value of  
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]  
    for (int i = 0; i < k; ++i)  
    {  
        res *= (n - i);  
        res /= (i + 1);  
    }  
  
    return res; 
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int r, n;
    for (int i = 0; i < T; i++) {
        cin >> r >> n; 
        cout << binomialCoeff(n, r) << "\n";
    }

    return 0;
}