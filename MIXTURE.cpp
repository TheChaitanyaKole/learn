#include<iostream>
using namespace std;

int main()
{
  int T;cin >> T;
  while(T--)
  {
    int a,b;
    cin >> a >> b;
    if (a==0 && b>0)
    {
      cout << "Liquid" << endl;
    }
    else if (b==0 && a>0)
    {
      cout << "Solid" << endl;
    }
    else
    {
      cout << "Solution" << endl;
    }
  }
  return 0;
}
