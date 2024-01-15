//main.ccp

int toto;
float tutu;

Television tv1("Samsung");

tv1.Allumer();
tv1.SetVolume(80);
//pointer
Television *tv2()= new Television("Philip");
tv2->SetVolume(70);
//KHi dung kieu pointer, phai dung mui ten
