#include<iostream.h>
#include<conio.h>
int main ()
{
    struct
    {
     			char NIK[20];
            char Nama[30];
            char jk[10];
            char alamat[40];
            char agama[10];
            char kota[10];
    }ktp;
    struct
    {
    			char NIM[20];
            char Nama[30];
            char fk[15];
            char prodi[40];
    }ktm;
    struct waktu
    {
       		char tempat[10];
            int tanggal;
            int bulan;
            int tahun;
    };
    waktu tgl;
    int x;
    system("cls");
cout<<"\t---------------------------------------------------------"<<endl;
cout<<"\t     				PENDAFTARAN KTP DAN KTM                 "<<endl;
cout<<"\t---------------------------------------------------------"<<endl;
cout<<"1. KTP "<<endl;
cout<<"1. KTM "<<endl;
cin>>x;
cout<<endl;
switch(x)
{
case 1:
     cout<<"\t---------------------------------------------------------"<<endl;
     cout<<"\t     			    	PENDAFTARAN KTP                       "<<endl;
     cout<<"\t---------------------------------------------------------"<<endl;
     cout<<"Masukkan NIK \t\t  : "; cin>>ktp.NIK;
     cout<<"Masukkan Nama \t\t  : "; cin>>ktp.Nama;
     cout<<"Masukkan Tempat Lahir \t\t  : "; cin>>tgl.tempat;
     cout<<"Masukkan Tanggal Lahir \t\t  : "; cin>>tgl.tanggal;
     cout<<"Masukkan Bulan Lahir \t\t  : "; cin>>tgl.bulan;
     cout<<"Masukkan Tahun Lahir \t\t  : "; cin>>tgl.tahun;
     cout<<"Masukkan Jenis Kelamin \t\t  : "; cin>>ktp.jk;
     cout<<"Masukkan Alamat \t\t  : "; cin>>ktp.alamat;
     cout<<"Masukkan Kota \t\t  : "; cin>>ktp.kota;
     cout<<"Masukkan Agama \t\t  : "; cin>>ktp.agama;
     cout<<endl;

     cout<<"\t---------------------------------------------------------"<<endl;
     cout<<"\t     			    	HASIL CETAK KTP                       "<<endl;
     cout<<"\t---------------------------------------------------------"<<endl;
     cout<<"NIK \t\t\t  : " <<ktp.NIK<<endl;;
     cout<<"Nama \t\t\t  : " <<ktp.Nama<<endl;;
     cout<<"Tempat /TglLahir\t  : "<<tgl.tempat<<","<<tgl.tanggal<<"/"<<tgl.bulan<<"/"<<tgl.tahun<<endl;
     cout<<"Jenis Kelamin \t\t  : " <<ktp.jk<<endl;
     cout<<"Alamat \t \t\t  : " <<ktp.alamat<<ktp.kota<<endl;
     cout<<"Agama \t\t\t  : " <<ktp.agama<<endl; \
     cout<<endl;
     break;
case 2:
     cout<<"\t---------------------------------------------------------"<<endl;
     cout<<"\t     			    	PENDAFTARAN KTM                       "<<endl;
     cout<<"\t---------------------------------------------------------"<<endl;
     cout<<"Masukkan NIM \t\t  : "; cin>>ktm.NIM;
     cout<<"Masukkan Nama \t\t  : "; cin>>ktm.Nama;
     cout<<"Masukkan Fakultas \t\t  : "; cin>>ktm.fk;
     cout<<"Masukkan Prodi \t\t  : "; cin>>ktm.prodi;
     cout<<endl;

     cout<<"\t---------------------------------------------------------"<<endl;
     cout<<"\t     			    	HASIL CETAK KTM                       "<<endl;
     cout<<"\t---------------------------------------------------------"<<endl;
     cout<<"NIM \t\t\t  : " <<ktm.NIM<<endl;;
     cout<<"Nama \t\t\t  : " <<ktm.Nama<<endl;;
     cout<<"Fakultas \t\t  : " <<ktm.fk<<endl;
     cout<<"Prodi  \t\t  : " <<ktm.prodi<<endl;
     cout<<endl;
     break;
default :
     cout<<"Maaf, Pilihan Anda Tidak Sesuai"<<endl;
     getch () ;
     }
}
