#include <iostream>
using namespace std;
main()
{
	float t, l, h, tb;
	string name;
	getline(cin,name);
	cout << "nhap diem toan ";
	cin >>  t;
	cout << "nhap diem li ";
	cin >>  l;
	cout << "nhap diem hoa ";
	cin >> h;
    tb = (t+l+h)/3;
    cout << "nhap ten sinh vien ";
    cin >> name;
    if (tb >= 8)
    {
       cout << "xep loai xuat sac";
    }   
       else if (tb<=7 && tb>8)
    {   
       cout << "xep loai gioi";
    }
	else if (tb<=6 && tb<7)
	{
	cout << "xep loai kha";
	}
	else if (tb<=5 && tb<6)
	{
	cout << "xep loai trung binh";
	}   
    else if (tb<5)
	{
	cout << "xep loai yeu";
	}
}	  
