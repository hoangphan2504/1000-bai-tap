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

void SapXepTangDan(int arr[][100], int n)
{
  for(int i=0; i<n-1; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      if(arr[i][i] > arr[j][j])
        SwapNumber(arr[i][i], arr[j][j]);
    }
  }
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
  SapXepTangDan(arr, n);
  XuatMang(arr, n);
  
}
