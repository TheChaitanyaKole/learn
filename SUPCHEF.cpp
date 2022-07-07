#include<iostream>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int M,N,K;
    cin >> M >> N >> K;
    if (M > (N*K))
    {
      cout << "Yes" <<endl;
    }
    else
    cout << "No" << endl;
  }
  return 0;
}
