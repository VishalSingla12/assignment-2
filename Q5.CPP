//Name:Vishal SIngla
//Roll no.:1024240009
#include <bits/stdc++.h>
using namespace std;

int diagMatrixIndex(int i, int j, int n)
 { if (i == j) return i; return -1; }
int triDiagIndex(int i, int j, int n) 
{ if (abs(i - j) <= 1)
     return i * 3 + (j - i + 1); 
     return -1; }
int lowerTriIndex(int i, int j, int n)
 { if (i >= j)
     return i*(i+1)/2 + j;
      return -1; }
int upperTriIndex(int i, int j, int n) 
{ if (i <= j)
     return j*(j+1)/2 + i; 
     return -1; }
int symMatrixIndex(int i, int j, int n) 
{ if (i >= j) 
    return i*(i+1)/2 + j; 
    else 
    return j*(j+1)/2 + i; }

int main() {
    cout << "Diag index(2,2,5): " << diagMatrixIndex(2,2,5) << endl;
    cout << "Symmetric index(3,2,5): " << symMatrixIndex(3,2,5) << endl;
    return 0;
}
