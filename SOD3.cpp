#include<iostream>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    long int L,R;
    cin >> L >> R;
    long int count = 0;
    for(long int i=L ; i<=R ; i++)
    {
      long int sum=0;
      long int num = i;
      while(num!=0)
      {
        sum = sum + num%10;
        num = num/10;
      }
      if (sum%3==0)
      {
        count++;
      }
    }
    cout << count << endl;
  }
}
