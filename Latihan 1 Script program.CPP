#include<stdio.h>
#include<iostream.h>
#include<conio.h>
main ()
{
  struct bulat
  {
    float jari;
    float keliling;
    float luas;
  };
  bulat lingkaran;
  cout<<"Masukkan Jari-Jari Lingkaran : ";
  cin>>lingkaran.jari;
  lingkaran.keliling=2*3.14259*lingkaran.jari;
  lingkaran.luas=3.14259*lingkaran.jari*lingkaran.jari;
  cout<<"Keliling Lingkaran = "<< lingkaran.keliling;
  cout<<"Luas Lingkaran = "<< lingkaran.luas;
  getch ();
}
