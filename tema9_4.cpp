#include<cstdio>
using namespace std;
int shellSort(int v[], int n)
{
    for (int gap=n/2;gap>0;gap/=2)
    {
        for (int i=gap; i<n; i++)
        {
            int temp = v[i];
            int j;
            for (j = i; j>= gap && v[j-gap] > temp; j-=gap)
                v[j] = v[j - gap];
            v[j] = temp;
        }
    }
    return 0;
}
int main()
{
    int n,v[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&v[i]);
    shellSort(v,n);
    for(i=0;i<n;i++)printf("%d ",v[i]);


}
