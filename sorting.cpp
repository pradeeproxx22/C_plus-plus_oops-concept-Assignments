#include<iostream>
using namespace std;
//Write a program of Sorting in ascending or descending order. 

void sortingarray(int arr[],int size)
{ int round,i,temp;
  for(round=1;round<size;round++)
{   
    //(i=0;i<7-1;i++)  
    for(i=0;i<size-round;i++)
        if(arr[i]>arr[i+1]) //for Descending order Condition will be if(arr[i]<arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
}
  for(i=0;i<size;i++)
  cout<<arr[i]<<" ";  
}

int main()
{  int arr[]={50,40,10,20,30,60,80};
   sortingarray(arr,7);
   cout<<endl;
   return 0;


}