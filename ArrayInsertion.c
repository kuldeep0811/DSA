#include <stdio.h>
void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}
void insertelement(int arr[], int size, int index, int element)
{
  for (int i = size - 1; i >= index; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[index] = element;
}

int main()
{

  int arr[100] = {1, 4, 5, 6, 7, 89, 99};
  int size = 7;
  int index;
  int element;
  printf("Enter index:  ");
  scanf("%d", &index);
  printf("Enter element:  ");
  scanf("%d", &element);

  display(arr, size);
  insertelement(arr, size, index, element);
  size++;
  display(arr, size);

  return 0;
}