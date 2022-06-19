#include <iostream>
using namespace std;
template <class T1>
void swap1(T1 &a,T1 &b){
  T1 temp;
  temp=a;
  a=b;b=temp;
}
template <class T>
void bubbleSort(T a[],int n){
  T temp;
  for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-1;j++)
        {
          if(a[j]>a[j+1])
                // temp=a[j];
                // a[j]=a[j+1];
                // a[j+1]=temp;
            swap1(a[j],a[j+1]);
        }
    }
}

int main() {
  std::cout << "Hello World!\n";
  int arr[]={7,2,10,8};
  
  int size=sizeof(arr)/sizeof(int );
  cout <<size<<endl;
  bubbleSort(arr,size);
  for(int i=0;i<size;i++){
    cout <<arr[i]<<" ";
  }
  cout <<endl;
}