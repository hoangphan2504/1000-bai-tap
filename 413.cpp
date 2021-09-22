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

void Ascending(int a[], int col)
{
  for(int i=0; i<col-1; i++)
  {
    for(int j=i+1; j<col; j++)
    {
      if(a[j] < a[i])
        SwapNumber(a[i], a[j]);
    }
  }
}

void Decending(int a[], int col)
{
  for(int i=0; i<col-1; i++)
  {
    for(int j=i+1; j<col; j++)
    {
      if(a[j] > a[i])
        SwapNumber(a[i], a[j]);
    }
  }
}

void SapXep(int arr[][100], int row, int col)
{
  for(int i=0; i<row; i++)
  {
    if(i % 2 == 0)
    {
      Ascending(arr[i], col);
      cout << i << " "<< "Chan" << endl;
    }
    else
    {
      Decending(arr[i], col);
      cout << i << " "<< "Le" << endl;
    }
    XuatMang(arr, row, col);
    cout << endl;
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
