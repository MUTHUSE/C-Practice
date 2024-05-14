#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(a[left]<a[right]){
            temp.push_back(a[left]);
            left++;
        }else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
}

void mergeSort(int a[], int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}

int main()
{
    int a[5] = {3,2,4,1,3};
    int n=5;
    mergeSort(a,0,n-1);
    for(auto i:a){
        cout<<"\n"<<i;
    }

    return 0;
}
