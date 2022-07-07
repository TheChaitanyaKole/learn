#include<iostream>
using namespace std;

int main()
{
  int T;cin >> T;
  while(T--)
  {
    int N,P,X,Y,time=0;
    cin>>N>>P>>X>>Y;
    int A[N];
    for(int i=0 ; i<N ; i++)
    {
      cin >> A[i];
    }
    for(int i=0; i<P; i++)
    {
      if(A[i]==0)
      {
        time = time + X;
      }
      else if(A[i]==1)
      {
        time = time + Y;
      }
    }
    cout << time << endl;
  }
  return 0;
}
