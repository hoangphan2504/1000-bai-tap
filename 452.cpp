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

bool KiemTraCucDai(int arr[][100], int n, int indexi, int indexj)
{
  for(int i=-1; i<=1; i++)
  {
    for(int j=-1; j<=1; j++)
    {
      if(i + indexi > 0 && j + indexj > 0 && i +indexi < n && j + indexj <n && !(i ==0 && j == 0))
      {
        if(arr[indexi][indexj] < arr[i + indexi][j + indexj])
          return false;
      }
    }
  }
  return true;
}

int DemGiaTriCucDai(int arr[][100], int n)
{
    int dem = 0;
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
        if(KiemTraCucDai(arr, n, i, j))
        {
          dem++;
        }
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
  cout << DemGiaTriCucDai(arr, n);
}
