#include<iostream>
using namespace std;

int main ()
{
  int arr[100];
  for(int i=0; i<100 ; i++) {
    arr[i] = rand()%1000;
  }
  for (int i = 0; i < 99; i++) {
    for (int j = 0; j < 99-i; j++) {
      if (arr[j]>arr[j+1])
      {
        int tmp;
        tmp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = tmp;
      }
    }
  }
  cout << "Sorted array\n";
  for (int i = 0; i < 100; i++) {
    cout << arr[i] << " " ;
  }
  int low, high ,position=-1,mid,key;
  cout << "\nEnter element to search : ";
  cin >> key;
  low = 0;
  high = 99;
  while (low <= high) {
    mid = (low + high)/2;
    int look = arr[mid];
    if (key == look){
      position = mid+1;
      cout << "Element found at " << position << "th position";
      break;
    }
    else if (key > look){
      low = mid + 1;
    }
    else if (key < look){
      high = mid - 1;
    }
  }
  if (position == -1){
    cout << "Element not found";
  }
  return 0;
}
