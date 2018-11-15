Perulangan Mencari Bilangan Terbesar Yang Berhenti Setelah diinputkan angka 0

1.) int n,hasil=0;
    tipe data untuk n, hasil adalah integer

2.)     do {
        cout<<"Input N : ";
        cin>>n;

            if(n>hasil){
                hasil=n;
            }
        }
        while(n!=0);
=======================================================
    - do cout<<"Input N : "; cin>>n; : Terjadi perulangan "Input N : "
    - while(n!=0)                    : Terus mengalami perulangan jika yang diinputkan selain 0 (nol),
                                       apabila sudah diinputkan 0 maka lanjut ke tahap berikutnya
    - if(n>hasil){hasil=n;}          : kondisi untuk mencari bilangan terbesar dari variabel "hasil" yg diinputkan di "n"


3.) cout<<hasil;
    Print hasil

Berikut Flowchartnya : <br/><br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum5/master/Latihan1/flow1.png)

Berikut Hasil Screenshotnya : <br/><br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum5/master/Latihan1/img1.png)
