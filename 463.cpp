#include <iostream>
#include <cmath>
using namespace std;

void NhapMang(int arr[][100], int &n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void XuatMang(int arr[][100], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void SwapNumber(int &a, int &b)
{
  int temp=a; 
  a=b;
  b=temp;
}

void HoanViHaiDong(int arr[][100], int n, int k, int q)
{
  for(int i=0; i<n; i++)
  {
    SwapNumber(arr[k][i], arr[q][i]);
  }
}



int main()
{
  int n, k, q;
  cout <<"Nhap so: ";
  cin >> n;
  int arr[100][100];
  cout <<"Nhap mang: ";
  NhapMang(arr, n);
  XuatMang(arr, n);
  cout << "Dong can hoan vi ";
  cin >> k >> q;
  HoanViHaiDong(arr, n, k, q);
  XuatMang(arr, n);
}
