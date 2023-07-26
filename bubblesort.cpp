#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
   for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
        if(a[i]>a[j])
        {
            int temp;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;

        }
       }
    }
for(int i=0;i<8;i++)
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
    bubblesort(a,n);
    return 0;
}