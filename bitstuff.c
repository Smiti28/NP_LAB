#include <stdio.h>
int main()
{
  int n,count1=0;
  printf("enter n ");
  scanf("%d",&n);
  int arr[n];
  //enter the bit string of len n
  printf("enter the bit string of len n ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  
  int k=0,array[20];
  
  for(int i=0;i<n;i++)
  {
    if(arr[i]==1)
    {
      count1++;
      array[k]=arr[i];
      k++;
      //if a zero is followed by 5 1's then append 0 -->bit stuffing 
      if(count1==5 && arr[i-5]==0)
      {
        array[k]=0;
        k++;
      }
    }
     else
   {
      count1=0;
      array[k]=arr[i];
      k++;
     
   } 
  }
  for(int a=0;a<k;a++)
  {
    printf("%d  ",array[a]);
  }
}
