#include<iostream>
using namespace std;
void mergeone(int arr[],int si,int mid,int ei)
{

 int n1,n2;
 n1=mid-si+1;
 n2=ei-mid;
 int l[n1],r[n2];
for(int i=0;i<n1;i++)
{
    l[i]=arr[si+i];
}
for(int j=0;j<n2;j++)
{
    r[j]=arr[mid+1+j];
}
int i=0;
int j=0;
int k=si;
while(i<n1 && j<n2)
{
    if(l[i]<=r[j])
    {
        arr[k]=l[i];
        i++;
    }
    else{
        arr[k]=r[j];
        j++;
    }
    k++;
}
    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = r[j];
        j++;
        k++;
        }
}
void mergesort(int arr[],int si,int ei)
{
 if(si<ei){
 int mid=(si+ei)/2;
 mergesort(arr,si,mid);
 mergesort(arr,mid+1,ei);
 mergeone(arr,si,mid,ei);
 }
}

int main()
{
int n;
cout<<"enter the no. of element ";
cin>>n;
int *arr=new int(n);
cout<<"Enter the"<<n<<"elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
mergesort(arr,0,n-1);
cout<<"Sorted array is"<<endl;
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
