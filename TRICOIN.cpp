#include<iostream>
using namespace std;

int main()
{
  int t;cin >> t;
  while(t--)
  {
    int n,h=0,i=1;
    cin >> n;
    while(n>=i)
    {
      n = n - i;
      i++;
      h++;
    }
    cout << h <<endl;
  }
}
