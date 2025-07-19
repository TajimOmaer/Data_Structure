#include <iostream>
using namespace std;
int main(){

    int size;
        cout<<"Enter the Array size: ";
            cin>>size;

    int arr[size];
        cout<<"Enter the Array value: ";
            for(int i=0; i<size; i++){
                cin>>arr[i];
            }
        cout<<"Display the Stored array values: ";
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        for(int i=0; i<size-1; i++){
            for(int j=0; j<size-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);   
                }
            }
        }
        cout<<"Display the stored value after Bubble sorting: ";
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    int s_item;
        cout<<"Enter the Search item: ";
            cin>>s_item;
    int beg=0, end=size-1, mid=(beg+end)/2;
        
            while(arr[mid]!=s_item && beg<=end){
                if(arr[mid]<s_item){
                    beg=mid+1;
                    mid=(beg+end)/2;
                }
                if(arr[mid]>s_item){
                    end=mid-1;
                }
            }
            if(arr[mid==s_item]){
                cout<<mid<<" is the location of "<<s_item;
            }
            else{
                cout<<"The search item is not found!";
            }
        
}S
