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

void TongHaiMaTran(int arr1[][100], int arr2[][100], int n)
{
  int b[100][100];
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      b[i][j]=arr1[i][j]+arr2[i][j];
    }
  }
  XuatMang(b, n);
}

int main()
{
  int n;
  cout <<"Nhap so n: ";
  cin >> n;
  int arr1[100][100];
  cout <<"Nhap mang 1: ";
  NhapMang(arr1, n);
  XuatMang(arr1, n);
  int arr2[100][100];
  cout <<"Nhap mang 2: ";
  NhapMang(arr2, n);
  XuatMang(arr2, n);

  cout << endl;
  
  TongHaiMaTran(arr1, arr2, n);
  
}
