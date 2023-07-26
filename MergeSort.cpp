#include<iostream>
using namespace std;

    void merge(int a[],int s1,int e1,int s2,int e2)
    {
    int temp[50],i=s1, j=s2, k=0;
    while(i<e1&&j<e2)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;

        }
        else{
            temp[k]=a[j];
            k++;
            j++;
        }
    }

    while(i<=e1)
    {
        temp[k]=a[i];
            k++;
            i++;
    }
    while(j<=e2)
    {
        temp[k]=a[j];
            k++;
            j++;
    }
for(int k=0, i=s1;i<=e2;i++,k++)
{
   a[i]=temp[k];
}

 
}

void mergesort(int a[],int i, int j)
{
    int mid=(i+j)/2;
    if(i<j)
    {
       mergesort(a,i,mid);
       mergesort(a,mid+1,j);
       merge(a,i,mid,mid+1,j);
       
    }

    
    
   
}



int main()
{
    int a[]={4,5,3,6,1,7,8};
    int n=7;
    mergesort(a,0,6);
   cout<<"after sorting"<<endl;
   for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}