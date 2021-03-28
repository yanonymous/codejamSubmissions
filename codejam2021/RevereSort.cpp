#include<iostream>

using namespace std;

void rever(int arr[],int l,int h){
    int temp,i=l,j=h;
        while (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
}

int reverseSort(int arr[],int n){
    int cost=0;
    for (int i = 0; i < n-1; i++)
        {
            int minpos=i;
            for (int j = i; j < n; j++)
            {
                if (arr[j]<arr[minpos])
                {
                    minpos=j;
                }
            }
            cost+=abs(minpos-i)+1;
            rever(arr,i,minpos);
        }
    return cost;
}

int main(){
    // freopen("sample.txt","r",stdin);
    // freopen("o.txt","w",stdout);
    int arr[1001];
    int t;
    cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n,cost=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<"Case #"<<tc<<": "<<reverseSort(arr,n)<<endl;
    }
}