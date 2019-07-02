#include<iostream.h>
#include<conio.h>
struct data
{
int x;
int y;
};

void tampilkan(data nilai);
void main ()
{
data nilaiku;
nilaiku.x = 10;
nilaiku.y = 16;
tampilkan (nilaiku);
}
void tampilkan(data nilai)
{
cout << "nilai x = " << nilai.x << endl;
cout << "nilai y = " << nilai.y << endl;
getch () ;
}
