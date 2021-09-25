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

bool KiemTraDongGiam(int a[], int n)
{
  for(int i=0; i<n-1; i++)
  {
    if(a[i]<a[i+1])
      return false;
  }
  return true;
}

int DemDongGiam(int arr[][100], int n)
{
    int dem = 0;
    for(int i=0; i<n; i++)
    {
      if(KiemTraDongGiam(arr[i],n))
      {
        dem++;
      }
    }
    return dem;
}

int main()
{
  int n;
  cout <<"Nhap so: ";
  cin >> n;
  int arr[100][100];
  cout <<"Nhap mang: ";
  NhapMang(arr, n);
  XuatMang(arr, n);
  cout << DemDongGiam(arr, n);
}
