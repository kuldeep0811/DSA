#include <stdio.h>
int main()
{
  int arr[100];
  int n,key;
  int flag=0;
  int index;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter the values of array: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter key element: ");
  scanf("%d",&key);
  for(int i=0;i<n;i++){
    if(key==arr[i]){
      flag=1;
      index=i;
      break;
    }else{
      flag=0;
    }
  }
  if(flag==1){
    printf("Enlement %d is found at index %d.",key,index);
  }else{
    printf("Element is not found.");
  }

  return 0;
}