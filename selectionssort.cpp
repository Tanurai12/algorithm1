#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
    int min,t;
   for(int i=0;i<n;i++)
    {
        min=i;
       for(int j=i+1;j<n;j++)
       {
        if(a[min]>a[j])
        {
            min=j;

        }
        t=a[i];
        a[i]=a[min];
        a[min]=t;
        min=i;
       }
    }
for(int i=0;i<n;i++)
{
    cout<<a[i]<<"  ";
}

}
int main()
{
    int a[]={1,33,44,2,7,34,2,8};
    int n;
    cout<<"enter size";
    cin>>n;
    selectionsort(a,n);
    return 0;
}