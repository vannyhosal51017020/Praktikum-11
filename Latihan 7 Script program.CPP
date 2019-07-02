#include<iostream.h>
#include<conio.h>
int main ()
{
struct data
{
int bil_real;
int bil_imajiner;
};
data real1, real2, imajiner1, imajiner2;

cout<<"======================================="<<endl;
cout<<"        Bilangan Kompleks "<<endl;
cout<<"======================================="<<endl;
cout<<"\t I"<<endl<<endl;
cout<<"Masukkan Bilangan Real \t\t=";
cin>>real1.bil_real;
cout<<"Masukkan Bilangan Imajiner \t=";
cin>>imajiner1.bil_imajiner;
cout<<"Jadi :";
cout<<real1.bil_real<<"+"<<imajiner1.bil_imajiner<<"i";
cout<<endl<<endl;
cout<<"\t II"<<endl<<endl;
cout<<"Masukkan Bilangan Real \t\t=";
cin>>real2.bil_real;
cout<<"Masukkan Bilangan Imajiner\t = ";
cin>>imajiner2.bil_imajiner;
cout<<"Jadi";
cout<<real2.bil_real<<"+"<<imajiner2.bil_imajiner<<"i";
cout<<endl<<endl;
cout<<"----------------------"<<endl;
cout<<" Operasi Penjumlahan "<<endl;
cout<<"----------------------"<<endl;
cout<<"("<<real1.bil_real<<"+"<<imajiner1.bil_imajiner<<"i)"
<<"+"<<"("<<real2.bil_real<<"+"<<imajiner2.bil_imajiner<<"i="
<<real1.bil_real+real2.bil_real<<"+"<<imajiner1.bil_imajiner +
imajiner2.bil_imajiner<<"i"<<endl<<endl;

cout<<"----------------------"<<endl;
cout<<" Operasi Pengurangan "<<endl;
cout<<"----------------------"<<endl;
cout<<"("<<real1.bil_real<<"+"<<imajiner1.bil_imajiner<<"i)"
<<"-"<<"("<<real2.bil_real<<"+"<<imajiner2.bil_imajiner<<"i="
<<real1.bil_real - real2.bil_real<<"+"<<imajiner1.bil_imajiner - imajiner2.bil_imajiner<<"i"<<endl<<endl;

cout<<"----------------------"<<endl;
cout<<" Operasi Perkalian "<<endl;
cout<<"----------------------"<<endl;
cout<<"("<<real1.bil_real<<"+"<<imajiner1.bil_imajiner<<"i)"
<<"*"<<"("<<real2.bil_real<<"+"<<imajiner2.bil_imajiner<<"i="
<<real1.bil_real * real2.bil_real<<"+"<<imajiner1.bil_imajiner * imajiner2.bil_imajiner<<"i"<<"+"
<<real2.bil_real * imajiner1.bil_imajiner<<"i"<<"-"<<imajiner1.bil_imajiner * imajiner2.bil_imajiner <<"="<<(real1.bil_real * real2.bil_real)-(imajiner1.bil_imajiner * imajiner2.bil_imajiner)<<" +"
<<(real1.bil_real * imajiner2.bil_imajiner)+(real2.bil_real * imajiner1.bil_imajiner)<<"i"<<endl;
getch();
}