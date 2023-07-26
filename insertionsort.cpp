#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    int pivot;
   for(int i=0;i<n;i++)
    {
        pivot=i+1;
        for(int j=i;j>=0;j--)
        {
            while(a[pivot]<=a[j]&&j>=0)
            {
               int temp;
               temp=a[pivot];
               a[pivot]=a[j];
               a[j]=temp;
               pivot--;
               j--;
            }
       }
       
       
    }
for(int i=0;i<n;i++)
{
    cout<<a[i]<<"  ";
}

}
int main()
{
    int a[]={2,56,3,8,19,4,8,15,90};
    int n;
    cout<<"enter size";
    cin>>n;
    insertionsort(a,n);
    return 0;
}