#include <iostream>
using namespace std;
int main() {

  int arr[100];

  cout << "enter number of students : ";
  int n;
  int x = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;
    arr[i] = x;
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}