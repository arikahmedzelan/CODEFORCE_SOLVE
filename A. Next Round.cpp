#include <iostream>

using namespace std;

int main()
{

  int n,k,arr[100],c=0;
cin>>n>>k;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    if(arr[i]>0 && arr[i]>=arr[k-1])
    {
        c++;
    }
}
cout<<c<<endl;
    return 0;

}