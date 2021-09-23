#include <iostream>
#include <cmath>
using namespace std;

void NhapMang(int arr[][100], int &row, int &col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void XuatMang(int arr[][100], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
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

void HoanDoiHaiDong(int arr[][100], int row, int col, int m, int n)
{
  for(int i=0; i<col; i++)
  {
    SwapNumber(arr[m][i], arr[n][i]);
  }
}

void TongDong(int arr[], int col, int &tongi)
{
  for(int i=0; i<col; i++)
  tongi+=arr[i];
}


void SapXep(int arr[][100], int row, int col)
{
  for(int i=0; i<row-1; i++)
  {
    for(int j=i+1; j<row; j++)
    {
      int tongi=0;
      TongDong(arr[i], col, tongi);
      int tong=0;
      TongDong(arr[j], col, tong);
      if(tongi>tong)
      {
        HoanDoiHaiDong(arr, row, col, i,j);
      }
    }
  }
}

int main()
{
    int row, col;

    cout << "Nhap so dong: ";
    cin >> row ;
    cout << "Nhap so cot: ";
    cin >> col;

    int arr[100][100];
    cout << "Nhap Mang: " << endl;
    NhapMang(arr, row, col);

    cout <<"Mang: " << endl;
    XuatMang(arr, row, col);
    cout << endl;
    SapXep(arr, row, col);
    XuatMang(arr, row, col);


    
}
