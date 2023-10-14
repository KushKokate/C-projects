#include <iostream>


void reverseArray (int arr[], int size);

int
main ()
{
  int size;
  std::cout << "Enter the size of the array: ";
  std::cin >> size;

  int *arr = new int[size];

  std::cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++)
    {
      std::cin >> arr[i];
    }

  reverseArray (arr, size);

  std::cout << "Reversed array: ";
  for (int i = 0; i < size; i++)
    {
      std::cout << arr[i] << " ";
    }
  std::cout << std::endl;

  delete[]arr;
  return 0;
}


void
reverseArray (int arr[], int size)
{
  int left = 0;
  int right = size - 1;

  while (left < right)
    {

      int temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;


      left++;
      right--;
    }
}
