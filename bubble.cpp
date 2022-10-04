#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a[n],n);

}
int bubblesort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(a[j]>a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
