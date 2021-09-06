#include <iostream>

using namespace std;

void Nhapmang(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
}

bool ascending(int a, int b)
{
    return a > b;
}

bool descending(int a, int b)
{
    return a < b;
}

void swapnumber(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

void Xuatmang(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}

int customsort(int *a, int n, bool(*compare)(int a, int b))
{

    for(int i=0; i<n; i++)
    {
        int maxmin=i, j;
        for( j=i+1; j<n; j++)
        {
            if(compare(a[maxmin], a[j]))
            {
                maxmin=j;
            }
        }
        swapnumber(a[i], a[maxmin]);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    bool (*tangdan)(int a, int b)= ascending;
    bool (*giamdan)(int a, int b)= descending;
    customsort(a,n, tangdan);
    Xuatmang(a,n);
}
