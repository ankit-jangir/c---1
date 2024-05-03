#include <iostream>
#include <vector>
using namespace std;

int main()
{
<<<<<<< HEAD
    vector<int> num;
    cout << "Enter the number of elements: ";
    cin >> num;
    for(int num : num)
=======

  vector<int> array1;
  vector<int> array2;
  int size1;
  int size2;

  cout << "enter the number for first array :";
  cin >> size1;
  cout << "enter the number for second array :";
  cin >> size2;

  for (int i = 1; i < size1; i++)
  {
    int element;
    cout << "Enter element " << i + 1 << " of the first array: ";
    cin >> element;
    array1.push_back(element);
  }
>>>>>>> 028ced26237d6af698e48bde0158614964a6d6b9
}