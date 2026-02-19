#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <string.h>
void logo1();
void list();
void load();
void password();
void data();
void line1(int x1, int y1, int x2, int y2, int fcolor, int bcolor);
void namepass();


void line1(int x1, int y1, int x2, int y2, int fcolor, int bcolor)
 {
   int x, y;
   textcolor(fcolor);
   textbackground(bcolor);
   for (y = y1 + 1; y < y2; y++) {
      for (x = x1 + 1; x < x2; x++) {
	 gotoxy(x, y);
	 putch(0x20);
      }
      gotoxy(x1, y); putch(179);
      gotoxy(x2, y); putch(179);
   }
   gotoxy(x1 + 1, y1);
   for (x = x1 + 1; x < x2; x++) putch(196);
   gotoxy(x1 + 1, y2);
   for (x = x1 + 1; x < x2; x++) putch(196);
   gotoxy(x1, y1); putch(218);
   gotoxy(x2, y1); putch(191);
   gotoxy(x1, y2); putch(192);
   gotoxy(x2, y2); putch(217);
 }
void data()
{
   float pri = 0;
   float price = 0;
   int id;
   char name[50];
   char out;
   clrscr();
   do{
    list();
    line1(19,17,55,19,4,0);
    gotoxy(20,18);
    printf("Enter Product ID (1001-1020): ");
    scanf("%d", &id);

    if(id==1001)
    {
    strcpy(name, "Hematite");
    price=100;
    }
    else if(id==1002)
    {
    strcpy(name, "Magnetite");
    price=110;
    }
    else if(id==1003)
    {
    strcpy(name, "Goethite");
    price=90;
    }
    else if(id==1004)
    {
    strcpy(name, "Siderite");
    price=80;
    }
    else if(id==1005)
    {
    strcpy(name, "Galena");
    price=2000;
    }
    else if(id==1006)
    {
    strcpy(name, "Sphalerite");
    price=2700;
    }
    else if(id==1007)
    {
    strcpy(name, "Chalcopyrite");
    price=8500;
    }
    else if(id==1008)
    {
    strcpy(name, "Pentlandite");
    price=17000;
    }
    else if(id==1009)
    {
    strcpy(name, "Cassiterite");
    price=25000;
    }
    else if(id==1010)
    {
    strcpy(name, "Ilmenite");
    price=250;
    }
    else if(id==1011)
    {
    strcpy(name, "Chromite");
    price=200;
    }
    else if(id==1012)
    {
    strcpy(name, "Pyrite");
    price=120;
    }
    else if(id==1013)
    {
    strcpy(name, "Marcasite");
    price=100;
    }
    else if(id==1014)
    {
    strcpy(name, "Fluorite");
    price=400;
    }
    else if(id==1015)
    {
    strcpy(name, "Barite");
    price=150;
    }
    else if(id==1016)
    {
    strcpy(name, "Gypsum");
    price=50;
    }
    else if(id==1017)
    {
    strcpy(name, "Calcite");
    price=60;
    }
    else if(id==1018)
    {
    strcpy(name, "Kaolinite");
    price=90;
    }
    else if(id==1019)
    {
    strcpy(name, "Quartz");
    price=80;
    }
    else if(id==1020)
    {
    strcpy(name, "Uraninite");
    price=80000;
    }
    else{
    strcpy(name, "N/A");
    price = 0;
    }
    pri += price;

    if(price >= 0)
    line1(2,20,40,25,4,0);
    gotoxy(3,21);
    printf("Added: %s ( %.2f USD)", name, price);
    gotoxy(3,23);
    printf("Current total: %.2f USD", pri);
    line1(44,20,80,22,4,0);
    gotoxy(45,21);
    printf("Do you want to add more? (y/n): ");
    scanf("%s",&out);
    }while(out == 'Y' || out == 'y');
    line1(44,23,75,25,4,0);
    gotoxy(45,24);
    printf("Total Price: %.2f USD", pri);
     getch();
}
void list()
{
     line1(31,1,48,3,4,0);
     gotoxy(33,2);
     printf("Ignition Union");
     line1(4, 4, 11, 16, 4, 0);
     line1(13, 4, 27, 16, 8, 0);
     line1(28, 4, 37, 16, 12, 0);

     line1(43, 4, 51, 16, 4, 0);
     line1(53, 4, 67, 16, 8, 0);
     line1(68, 4, 77, 16, 12, 0);
     gotoxy(5,5);      printf("Pro-ID");
     gotoxy(15,5);     printf("Product Name");
     gotoxy(45,5);     printf("Pro-ID");
     gotoxy(55,5);     printf("Product Name");
     gotoxy(30,5);     printf("Price");
     gotoxy(70,5);     printf("Price");

     gotoxy(5,6); printf("1001"); gotoxy(15,6); printf("Hematite");
     gotoxy(30,6); printf("100.-");
     gotoxy(45,6); printf("1002"); gotoxy(55,6); printf("Magnetite");
     gotoxy(70,6); printf("110.-");
       //6 1001,1002
     gotoxy(5,7); printf("1003"); gotoxy(15,7); printf("Goethite");
     gotoxy(30,7); printf("90.-");
     gotoxy(45,7); printf("1004"); gotoxy(55,7); printf("Siderite");
     gotoxy(70,7); printf("80.-");
       //7 1003,1004
     gotoxy(5,8); printf("1005"); gotoxy(15,8); printf("Galena");
     gotoxy(30,8); printf("2000.-");
     gotoxy(45,8); printf("1006"); gotoxy(55,8); printf("Sphalerite");
     gotoxy(70,8); printf("2700.-");
       //8 1005,1006
     gotoxy(5,9); printf("1007"); gotoxy(15,9); printf("Chalcopyrite");
     gotoxy(30,9); printf("8500.-");
     gotoxy(45,9); printf("1008"); gotoxy(55,9); printf("Pentlandite");
     gotoxy(70,9); printf("17000.-");
       //9 1007,1008
     gotoxy(5,10); printf("1009"); gotoxy(15,10); printf("Cassiterite");
     gotoxy(30,10); printf("25000.-");
     gotoxy(45,10); printf("1010"); gotoxy(55,10); printf("Ilmenite");
     gotoxy(70,10); printf("250.-");
       //10 1009,1010
     gotoxy(5,11); printf("1011"); gotoxy(15,11); printf("Chromite");
     gotoxy(30,11); printf("200.-");
     gotoxy(45,11); printf("1012"); gotoxy(55,11); printf("Pyrite");
     gotoxy(70,11); printf("120.-");
       //11 1011,1012
     gotoxy(5,12); printf("1013"); gotoxy(15,12); printf("Marcasite");
     gotoxy(30,12); printf("100.-");
     gotoxy(45,12); printf("1014"); gotoxy(55,12); printf("Fluorite");
     gotoxy(70,12); printf("400.-");
       //12 1013,1014
     gotoxy(5,13); printf("1015"); gotoxy(15,13); printf("Barite");
     gotoxy(30,13); printf("150.-");
     gotoxy(45,13); printf("1016"); gotoxy(55,13); printf("Gypsum");
     gotoxy(70,13); printf("50.-");
       //13 1015,1016
     gotoxy(5,14); printf("1017"); gotoxy(15,14); printf("Calcite");
     gotoxy(30,14); printf("60.-");
     gotoxy(45,14); printf("1018"); gotoxy(55,14); printf("Kaolinite");
     gotoxy(70,14); printf("90.-");
       //14 1017,1018
     gotoxy(5,15); printf("1019"); gotoxy(15,15); printf("Quartz");
     gotoxy(30,15); printf("80.-");
     gotoxy(45,15); printf("1020"); gotoxy(55,15); printf("Uraninite");
     gotoxy(70,15); printf("80000.-");
       //15 1019,1020

}
void load()
{
    int i;
  clrscr();
      logo1();
      line1(10,16,26,18,12+176,0);
      line1(66,16,72,18,4,0);
      gotoxy(11,17);
      printf("L O A D I N G..");

      for(i=11; i<=70; i++)
      {
	  gotoxy(i,20);
	  printf("°"); //ALT+176
      }

      for(i=11; i<=40; i++)
      {
	  gotoxy(67,17);
	  printf("%d %%",i+20);
	  gotoxy(i,20);
	  printf("Û"); //ALT+219
	  delay(100);
      }
      for(i=41; i<=70; i++)
      {
	  gotoxy(67,17);
	  printf("%d %%",i+30);
	  gotoxy(i,20);
	  printf("Û");
	  delay(200);
}
      namepass();
}
void logo1()  // Û Ü Ý Þ ß
{
    line1(31,3,48,11,4,0);
    textcolor(6); gotoxy(34,4); cprintf("ÜÜÜ");
    textcolor(6); gotoxy(34,5); cprintf("Û  Ü");
    textcolor(6); gotoxy(36,6); cprintf("ßÜßÜ");
    textcolor(6); gotoxy(38,7); cprintf("ßÜßÜ");
    textcolor(6); gotoxy(40,8); cprintf("ßÜßÜ");
    textcolor(6); gotoxy(42,9); cprintf("ßÜßÜ");
    textcolor(6); gotoxy(44,10); cprintf("ßß");

    textcolor(7); gotoxy(37,4); cprintf("ßßßßßÜ");
    textcolor(7); gotoxy(38,5); cprintf("ßßßß");
    textcolor(7); gotoxy(33,6); cprintf("Û Ü");
    textcolor(7); gotoxy(33,7); cprintf("Û Û");
    textcolor(7); gotoxy(33,8); cprintf("ßÜß");
     line1(31,12,48,14,4,0);
     textcolor(12);
     gotoxy(33,13);
     cprintf("Ignition Union");
}
void password()
{
    char pass[20], ch;
    int attempt = 0;
    int success = 0;

    do {
	int i = 0;
	gotoxy(30,19);
	printf("Enter password: ");
	while (1) {
	    ch = getch();
	    if (ch == 13) {
		pass[i] = '\0';
		break;
	    } else if (ch == 8 && i > 0) {
		i--;
	    } else if (ch != 8) {
			    pass[i++] = ch;
		printf("*");
	    }
	}

	attempt++;

	if (strcmp(pass, "1234") == 0) {
	    gotoxy(33,22);
	    printf("Password Correct");
	    success = 1;
	    getch();
	    data();
	    break;
	} else {
	gotoxy(34,22);
	    printf("Wrong password");
	}

    } while (attempt < 3);

    if (!success && attempt == 3) {
	printf("Cannot access the system.\n");
    }
}


void namepass()
{
      char namep[30];
    int attempt=0;
    int success;
    clrscr();
      do{
	 logo1();
	 line1(28,17,52,20,4,0);
	 gotoxy(30,19);
	 printf("Enter password : ");
	 gotoxy(30,18);
	 printf("Enter Name : ");
	 gotoxy(30,19);
	 gotoxy(30,18);
	 printf("Enter Name : ");
	 scanf("%s",&namep);
	 attempt++;

	 if(strcmp(namep, "Name")==0)
	 {
	     gotoxy(35,21);
	     printf("Name Correct");
	     success=1;
	     password();
	     break;
	 }
	 else
	     clrscr();
	     gotoxy(36,21);
	     printf("Not found");
       }while(attempt<3);

	 if(!success && attempt==3)
       {
	     printf("Cannot assexx the sytem\n");
	     clrscr();
       }


}

main()
{
  clrscr();
  line1(1,1,80,25,4,0);
  load();
  return 0;
}