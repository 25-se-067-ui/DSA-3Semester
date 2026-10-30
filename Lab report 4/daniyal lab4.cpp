
#include<iostream>
using namespace std;
int main(){
    // Bubble Sort
    int arr1[]={5,3,2,4,8};
    int n=5;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    cout<<"Bubble Sort: ";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    // Selection Sort
    int arr2[]={5,6,2,4,7};
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr2[j]<arr2[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr2[i];
        arr2[i]=arr2[minIndex];
        arr2[minIndex]=temp;
    }
    cout<<"Selection Sort: ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
