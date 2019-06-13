/***************************************************************
 * Name:      projektMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2016-01-16
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "projektMain.h"
#include <wx/msgdlg.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ESC 27
#define ENTER 13
#define MAKSX 679
#define MAKSY 368
#define L 79


struct dane{
    int y;
    int x;
    int status;
};
struct zapis{
    dane wiad[L];
    int xp1,yp1,xp2,yp2,xp3,yp3,xp4,yp4,xp5,yp5,xp6,yp6,x,y;
    int punkty;
    int ilosc_zyc;

};
void postac(int x, int y,int kolor,int kolor2,int kolor3,int wyp1, int wyp2, int wyp3){
    setcolor(kolor);
    rectangle(x-4,y-4,x+12,y+12);
    setfillstyle(SOLID_FILL,wyp1);
    floodfill(x-3,y-3,kolor);
    setcolor(kolor2);
    rectangle(x-1,y+4,x+9,y+9);
    setfillstyle(SOLID_FILL,wyp2);
    floodfill(x+4,y+5,kolor2);
    setcolor(kolor3);
    rectangle(x-2,y-2,x+2,y+1);
    rectangle(x+6,y-2,x+10,y+1);
    setfillstyle(SOLID_FILL,wyp3);
    floodfill(x-1,y-1,kolor3);
    floodfill(x+7,y-1,kolor3);
}
void inicjalizacja_danych(dane dane[]){
    dane[0].x=20;
    dane[0].y=42;
    dane[0].status=1;
    dane[1].x=80;
    dane[1].y=42;
    dane[1].status=1;
    dane[2].x=120;
    dane[2].y=85;
    dane[2].status=1;
    dane[3].x=200;
    dane[3].y=42;
    dane[3].status=1;
    dane[4].x=260;
    dane[4].y=42;
    dane[4].status=1;
    dane[5].x=320;
    dane[5].y=42;
    dane[5].status=1;
    dane[6].x=380;
    dane[6].y=42;
    dane[6].status=1;
    dane[7].x=280;
    dane[7].y=181;
    dane[7].status=1;
    dane[8].x=440;
    dane[8].y=42;
    dane[8].status=1;
    dane[9].x=500;
    dane[9].y=42;
    dane[9].status=1;
    dane[10].x=560;
    dane[10].y=42;
    dane[10].status=1;
    dane[11].x=620;
    dane[11].y=42;
    dane[11].status=1;
    dane[12].x=180;
    dane[12].y=85;
    dane[12].status=1;
    dane[13].x=60;
    dane[13].y=85;
    dane[13].status=1;
    dane[14].x=20;
    dane[14].y=85;
    dane[14].status=1;
    dane[15].x=20;
    dane[15].y=165;
    dane[15].status=1;
    dane[16].x=20;
    dane[16].y=225;
    dane[16].status=1;
    dane[17].x=20;
    dane[17].y=285;
    dane[17].status=1;
    dane[18].x=40;
    dane[18].y=326;
    dane[18].status=1;
    dane[19].x=100;
    dane[19].y=326;
    dane[19].status=1;
    dane[20].x=160;
    dane[20].y=326;
    dane[20].status=1;
    dane[21].x=220;
    dane[21].y=326;
    dane[21].status=1;
    dane[22].x=280;
    dane[22].y=326;
    dane[22].status=1;
    dane[23].x=340;
    dane[23].y=326;
    dane[23].status=1;
    dane[24].x=400;
    dane[24].y=326;
    dane[24].status=1;
    dane[25].x=460;
    dane[25].y=326;
    dane[25].status=1;
    dane[26].x=520;
    dane[26].y=326;
    dane[26].status=1;
    dane[27].x=580;
    dane[27].y=326;
    dane[27].status=1;
    dane[28].x=657;
    dane[28].y=326;
    dane[28].status=1;
    dane[29].x=657;
    dane[29].y=266;
    dane[29].status=1;
    dane[30].x=657;
    dane[30].y=206;
    dane[30].status=1;
    dane[31].x=657;
    dane[31].y=146;
    dane[31].status=1;
    dane[32].x=657;
    dane[32].y=85;
    dane[32].status=1;
    dane[33].x=580;
    dane[33].y=85;
    dane[33].status=1;
    dane[34].x=520;
    dane[34].y=85;
    dane[34].status=1;
    dane[35].x=460;
    dane[35].y=85;
    dane[35].status=1;
    dane[36].x=400;
    dane[36].y=85;
    dane[36].status=1;
    dane[37].x=340;
    dane[37].y=85;
    dane[37].status=1;
    dane[38].x=280;
    dane[38].y=85;
    dane[38].status=1;
    dane[39].x=618;
    dane[39].y=115;
    dane[39].status=1;
    dane[40].x=618;
    dane[40].y=175;
    dane[40].status=1;
    dane[41].x=618;
    dane[41].y=235;
    dane[41].status=1;
    dane[42].x=618;
    dane[42].y=286;
    dane[42].status=1;
    dane[43].x=558;
    dane[43].y=286;
    dane[43].status=1;
    dane[44].x=498;
    dane[44].y=286;
    dane[44].status=1;
    dane[45].x=438;
    dane[45].y=286;
    dane[45].status=1;
    dane[46].x=378;
    dane[46].y=286;
    dane[46].status=1;
    dane[47].x=160;
    dane[47].y=236;
    dane[47].status=1;
    dane[48].x=220;
    dane[48].y=236;
    dane[48].status=1;
    dane[49].x=280;
    dane[49].y=236;
    dane[49].status=1;
    dane[50].x=340;
    dane[50].y=236;
    dane[50].status=1;
    dane[51].x=400;
    dane[51].y=236;
    dane[51].status=1;
    dane[52].x=460;
    dane[52].y=236;
    dane[52].status=1;
    dane[53].x=520;
    dane[53].y=236;
    dane[53].status=1;
    dane[54].x=520;
    dane[54].y=176;
    dane[54].status=1;
    dane[55].x=520;
    dane[55].y=131;
    dane[55].status=1;
    dane[56].x=573;
    dane[56].y=131;
    dane[56].status=1;
    dane[57].x=573;
    dane[57].y=191;
    dane[57].status=1;
    dane[58].x=574;
    dane[58].y=251;
    dane[58].status=1;
    dane[59].x=460;
    dane[59].y=131;
    dane[59].status=1;
    dane[60].x=400;
    dane[60].y=131;
    dane[60].status=1;
    dane[61].x=340;
    dane[61].y=131;
    dane[61].status=1;
    dane[62].x=280;
    dane[62].y=131;
    dane[62].status=1;
    dane[63].x=220;
    dane[63].y=131;
    dane[63].status=1;
    dane[64].x=160;
    dane[64].y=131;
    dane[64].status=1;
    dane[65].x=105;
    dane[65].y=131;
    dane[65].status=1;
    dane[66].x=60;
    dane[66].y=131;
    dane[66].status=1;
    dane[66].x=60;
    dane[66].y=131;
    dane[66].status=1;
    dane[67].x=60;
    dane[67].y=191;
    dane[67].status=1;
    dane[68].x=60;
    dane[68].y=251;
    dane[68].status=1;
    dane[69].x=105;
    dane[69].y=284;
    dane[69].status=1;
    dane[70].x=165;
    dane[70].y=284;
    dane[70].status=1;
    dane[71].x=225;
    dane[71].y=284;
    dane[71].status=1;
    dane[72].x=285;
    dane[72].y=284;
    dane[72].status=1;
    dane[73].x=105;
    dane[73].y=234;
    dane[73].status=1;
    dane[74].x=105;
    dane[74].y=181;
    dane[74].status=1;
    dane[75].x=155;
    dane[75].y=181;
    dane[75].status=1;
    dane[76].x=215;
    dane[76].y=181;
    dane[76].status=1;
    dane[77].x=405;
    dane[77].y=181;
    dane[77].status=1;
    dane[78].x=465;
    dane[78].y=181;
    dane[78].status=1;
}
void przeciwnik1(int x, int y,int kolor1, int kolor2,int wyp1,int wyp2,int faza){
    if(faza==1){
        setcolor(kolor1);
        circle(x-17,y+17,12);
        setfillstyle(SOLID_FILL,wyp1);
        floodfill(x-17,y+17,kolor1);
        setcolor(kolor2);
        rectangle(x-25,y+18,x-9,y+22);
        setfillstyle(SOLID_FILL,wyp2);
        floodfill(x-24,y+21,kolor2);
        setcolor(wyp2);
        circle(x-22,y+12,4);
        circle(x-12,y+12,4);
        setfillstyle(SOLID_FILL,kolor1);
        floodfill(x-22,y+12,wyp2);
        floodfill(x-12,y+12,wyp2);

    };
    if(faza==2){
        setcolor(kolor1);
        circle(x-17,y+17,12);
        setfillstyle(SOLID_FILL,wyp1);
        floodfill(x-17,y+17,kolor1);
        setcolor(kolor2);
        rectangle(x-25,y+19,x-9,y+21);
        setfillstyle(SOLID_FILL,wyp2);
        floodfill(x-24,y+21,kolor2);
        setcolor(wyp2);
        circle(x-22,y+12,4);
        circle(x-12,y+12,4);
        setfillstyle(SOLID_FILL,kolor1);
        floodfill(x-22,y+12,wyp2);
        floodfill(x-12,y+12,wyp2);
        };

    if(faza==3){
        setcolor(kolor1);
        circle(x-17,y+17,12);
        setfillstyle(SOLID_FILL,wyp1);
        floodfill(x-17,y+17,kolor1);
        setcolor(kolor2);
        rectangle(x-25,y+20,x-9,y+21);
        setfillstyle(SOLID_FILL,wyp2);
        floodfill(x-24,y+21,kolor2);
        setcolor(wyp2);
        circle(x-22,y+12,4);
        circle(x-12,y+12,4);
        setfillstyle(SOLID_FILL,kolor1);
        floodfill(x-22,y+12,wyp2);
        floodfill(x-12,y+12,wyp2);
        };
    }
void punkt(dane dane){
    int kolor1,kolor2;
    if(dane.status==1){
        kolor1=LIGHTGREEN;
        kolor2=GREEN;
    }
    if(dane.status==0){
        kolor1=BLACK;
        kolor2=BLACK;
    }
    setcolor(kolor1);
    circle(dane.x,dane.y,6);
    setfillstyle(SOLID_FILL,kolor2);
    floodfill(dane.x+1,dane.y+1,kolor1);
}
void wymaz_skarb(dane *dane,int *punkty){
    int x,y;
    x=dane->x;
    y=dane->y;
    if(getpixel(x+7,y+0) == YELLOW || getpixel(x+5,y+4) == YELLOW || getpixel(x+5,y-4) == YELLOW || getpixel(x-7,y+0) == YELLOW || getpixel(x-5,y+4) == YELLOW || getpixel(x-5,y-4) == YELLOW || getpixel(x-0,y-7) == YELLOW || getpixel(x+0,y+7)== YELLOW){
       if(dane->status == 1){
            *punkty=*punkty+1;}
        dane->status=0;
        punkt(*dane);
    }

}
void uklad_punktow(dane dane[]){
    punkt(dane[0]);
    punkt(dane[1]);
    punkt(dane[2]);
    punkt(dane[3]);
    punkt(dane[4]);
    punkt(dane[5]);
    punkt(dane[6]);
    punkt(dane[7]);
    punkt(dane[8]);
    punkt(dane[9]);
    punkt(dane[10]);
    punkt(dane[11]);
    punkt(dane[12]);
    punkt(dane[13]);
    punkt(dane[14]);
    punkt(dane[15]);
    punkt(dane[16]);
    punkt(dane[17]);
    punkt(dane[18]);
    punkt(dane[19]);
    punkt(dane[20]);
    punkt(dane[21]);
    punkt(dane[22]);
    punkt(dane[23]);
    punkt(dane[24]);
    punkt(dane[25]);
    punkt(dane[26]);
    punkt(dane[27]);
    punkt(dane[28]);
    punkt(dane[29]);
    punkt(dane[30]);
    punkt(dane[31]);
    punkt(dane[32]);
    punkt(dane[33]);
    punkt(dane[34]);
    punkt(dane[35]);
    punkt(dane[36]);
    punkt(dane[37]);
    punkt(dane[38]);
    punkt(dane[39]);
    punkt(dane[40]);
    punkt(dane[41]);
    punkt(dane[42]);
    punkt(dane[43]);
    punkt(dane[44]);
    punkt(dane[45]);
    punkt(dane[46]);
    punkt(dane[47]);
    punkt(dane[48]);
    punkt(dane[49]);
    punkt(dane[50]);
    punkt(dane[51]);
    punkt(dane[52]);
    punkt(dane[53]);
    punkt(dane[54]);
    punkt(dane[55]);
    punkt(dane[56]);
    punkt(dane[57]);
    punkt(dane[58]);
    punkt(dane[59]);
    punkt(dane[60]);
    punkt(dane[61]);
    punkt(dane[62]);
    punkt(dane[63]);
    punkt(dane[64]);
    punkt(dane[65]);
    punkt(dane[66]);
    punkt(dane[67]);
    punkt(dane[68]);
    punkt(dane[69]);
    punkt(dane[70]);
    punkt(dane[71]);
    punkt(dane[72]);
    punkt(dane[73]);
    punkt(dane[74]);
    punkt(dane[75]);
    punkt(dane[76]);
    punkt(dane[77]);
    punkt(dane[78]);

}
void wymazywanie_skarbow(dane dane[],int *punkty){
    wymaz_skarb(&dane[0],punkty);
    wymaz_skarb(&dane[1],punkty);
    wymaz_skarb(&dane[2],punkty);
    wymaz_skarb(&dane[3],punkty);
    wymaz_skarb(&dane[4],punkty);
    wymaz_skarb(&dane[5],punkty);
    wymaz_skarb(&dane[6],punkty);
    wymaz_skarb(&dane[7],punkty);
    wymaz_skarb(&dane[8],punkty);
    wymaz_skarb(&dane[9],punkty);
    wymaz_skarb(&dane[10],punkty);
    wymaz_skarb(&dane[11],punkty);
    wymaz_skarb(&dane[12],punkty);
    wymaz_skarb(&dane[13],punkty);
    wymaz_skarb(&dane[14],punkty);
    wymaz_skarb(&dane[15],punkty);
    wymaz_skarb(&dane[16],punkty);
    wymaz_skarb(&dane[17],punkty);
    wymaz_skarb(&dane[18],punkty);
    wymaz_skarb(&dane[19],punkty);
    wymaz_skarb(&dane[20],punkty);
    wymaz_skarb(&dane[21],punkty);
    wymaz_skarb(&dane[22],punkty);
    wymaz_skarb(&dane[23],punkty);
    wymaz_skarb(&dane[24],punkty);
    wymaz_skarb(&dane[25],punkty);
    wymaz_skarb(&dane[26],punkty);
    wymaz_skarb(&dane[27],punkty);
    wymaz_skarb(&dane[28],punkty);
    wymaz_skarb(&dane[29],punkty);
    wymaz_skarb(&dane[30],punkty);
    wymaz_skarb(&dane[31],punkty);
    wymaz_skarb(&dane[32],punkty);
    wymaz_skarb(&dane[33],punkty);
    wymaz_skarb(&dane[34],punkty);
    wymaz_skarb(&dane[35],punkty);
    wymaz_skarb(&dane[36],punkty);
    wymaz_skarb(&dane[37],punkty);
    wymaz_skarb(&dane[38],punkty);
    wymaz_skarb(&dane[39],punkty);
    wymaz_skarb(&dane[40],punkty);
    wymaz_skarb(&dane[41],punkty);
    wymaz_skarb(&dane[42],punkty);
    wymaz_skarb(&dane[43],punkty);
    wymaz_skarb(&dane[44],punkty);
    wymaz_skarb(&dane[45],punkty);
    wymaz_skarb(&dane[46],punkty);
    wymaz_skarb(&dane[47],punkty);
    wymaz_skarb(&dane[48],punkty);
    wymaz_skarb(&dane[49],punkty);
    wymaz_skarb(&dane[50],punkty);
    wymaz_skarb(&dane[51],punkty);
    wymaz_skarb(&dane[52],punkty);
    wymaz_skarb(&dane[53],punkty);
    wymaz_skarb(&dane[54],punkty);
    wymaz_skarb(&dane[55],punkty);
    wymaz_skarb(&dane[56],punkty);
    wymaz_skarb(&dane[57],punkty);
    wymaz_skarb(&dane[58],punkty);
    wymaz_skarb(&dane[59],punkty);
    wymaz_skarb(&dane[60],punkty);
    wymaz_skarb(&dane[61],punkty);
    wymaz_skarb(&dane[62],punkty);
    wymaz_skarb(&dane[63],punkty);
    wymaz_skarb(&dane[64],punkty);
    wymaz_skarb(&dane[65],punkty);
    wymaz_skarb(&dane[66],punkty);
    wymaz_skarb(&dane[67],punkty);
    wymaz_skarb(&dane[68],punkty);
    wymaz_skarb(&dane[69],punkty);
    wymaz_skarb(&dane[70],punkty);
    wymaz_skarb(&dane[71],punkty);
    wymaz_skarb(&dane[72],punkty);
    wymaz_skarb(&dane[73],punkty);
    wymaz_skarb(&dane[74],punkty);
    wymaz_skarb(&dane[75],punkty);
    wymaz_skarb(&dane[76],punkty);
    wymaz_skarb(&dane[77],punkty);
    wymaz_skarb(&dane[78],punkty);


}
void plansza(void){
    setcolor(RED);
    rectangle(0,20,MAKSX,MAKSY-20);//obwod
    rectangle(5,25,MAKSX-5,MAKSY-25);//obwod

    // pierwszy prostokat

    rectangle(35,60,100,65);//gora
    rectangle(140,60,370,65);
    rectangle(410,60,470,65);
    rectangle(510,60,675,65);
    rectangle(140,60,145,25);

    rectangle(35,65,40,100);//lewo
    rectangle(35,140,40,170);
    rectangle(35,210,40,310);

    rectangle(6,140,35,145);

    rectangle(40,305,140,310);//dol
    rectangle(180,305,220,310);
    rectangle(260,305,370,310);
    rectangle(410,305,600,310);
    rectangle(600,305,605,343);

    rectangle(635,310,640,280);//prawo
    rectangle(635,240,640,200);
    rectangle(635,160,640,105);


    //drugi prostokat

    rectangle(80,105,200,110);//gora
    rectangle(240,105,410,110);
    rectangle(450,105,600,110);
    rectangle(240,105,245,65);

    rectangle(595,110,600,200);//prawo
    rectangle(595,240,600,265);

    rectangle(550,260,595,265);//dol
    rectangle(370,260,510,265);
    rectangle(125,260,320,265);
    rectangle(80,260,85,265);
    rectangle(315,265,320,305);

    rectangle(80,110,85,220);//lewo

    //trzeci prostokat

    rectangle(125,150,130,180);//lewo
    rectangle(125,220,130,260);

    rectangle(130,150,180,155);//gora
    rectangle(220,150,300,155);
    rectangle(340,150,500,155);
    rectangle(540,150,555,155);

    rectangle(550,195,555,200);//prawo
    rectangle(550,240,555,260);

    //srodek

    rectangle(170,205,260,210);
    rectangle(300,205,380,210);
    rectangle(420,205,500,210);
    rectangle(495,155,500,205);

    setfillstyle(SOLID_FILL,RED);
    floodfill(21,21,RED); //wypelnienie planszy

    //wyp. pierw prostokat

    floodfill(36,61,RED);
    floodfill(141,61,RED);
    floodfill(411,61,RED);
    floodfill(511,61,RED);
    floodfill(141,26,RED);

    floodfill(36,66,RED);
    floodfill(36,141,RED);
    floodfill(36,211,RED);
    floodfill(36,291,RED);
    floodfill(7,141,RED);

    floodfill(41,306,RED);
    floodfill(181,306,RED);
    floodfill(261,306,RED);
    floodfill(411,306,RED);
    floodfill(601,306,RED);

    floodfill(636,309,RED);
    floodfill(636,239,RED);
    floodfill(636,159,RED);

    //wyp. drugi prostokat

    floodfill(81,106,RED);
    floodfill(241,106,RED);
    floodfill(451,106,RED);
    floodfill(241,66,RED);

    floodfill(596,111,RED);
    floodfill(596,241,RED);

    floodfill(556,261,RED);
    floodfill(371,261,RED);
    floodfill(141,261,RED);
    floodfill(81,261,RED);
    floodfill(316,266,RED);

    floodfill(81,151,RED);

    //wyp. trzeci prostokat

    floodfill(126,151,RED);
    floodfill(126,221,RED);

    floodfill(131,151,RED);
    floodfill(221,151,RED);
    floodfill(341,151,RED);
    floodfill(541,151,RED);

    floodfill(551,196,RED);
    floodfill(551,241,RED);

    //wyp. srodek

    floodfill(171,206,RED);
    floodfill(301,206,RED);
    floodfill(421,206,RED);
    floodfill(496,156,RED);
    }
void ruchprzeciwnika2(int *xp2, int *yp2, int *flaga){
    if(getpixel(*xp2-33,*yp2+17)!=RED && getpixel(*xp2-18,*yp2+30)!=RED && getpixel(*xp2-18,*yp2+4)!=RED && getpixel(*xp2-25,*yp2+9)!=RED && getpixel(*xp2-29,*yp2+13)!=RED && getpixel(*xp2-29,*yp2+21)!=RED && getpixel(*xp2-25,*yp2+25)!=RED && *flaga==1){
        if(getpixel(*xp2-32,*yp2+17)!=LIGHTRED && getpixel(*xp2-32,*yp2+29)!=LIGHTRED && getpixel(*xp2-32,*yp2+5)!=LIGHTRED && getpixel(*xp2-32,*yp2+8)!=LIGHTRED && getpixel(*xp2-32,*yp2+13)!=LIGHTRED && getpixel(*xp2-32,*yp2+21)!=LIGHTRED && getpixel(*xp2-32,*yp2+26)!=LIGHTRED && *flaga==1){
           if(getpixel(*xp2-32,*yp2+17)!=LIGHTMAGENTA && getpixel(*xp2-32,*yp2+29)!=LIGHTMAGENTA && getpixel(*xp2-32,*yp2+5)!=LIGHTMAGENTA && getpixel(*xp2-32,*yp2+8)!=LIGHTMAGENTA && getpixel(*xp2-32,*yp2+13)!=LIGHTMAGENTA && getpixel(*xp2-32,*yp2+21)!=LIGHTMAGENTA && getpixel(*xp2-32,*yp2+26)!=LIGHTMAGENTA && *flaga==1){
                *xp2=*xp2-2;
                *flaga=1;
           }
        }
    }
    else
        if(*flaga!=3 && *flaga!=4 && *flaga!=2){
            *flaga=1+rand()/(float(RAND_MAX)+1)*4;
            *flaga=1+rand()/(float(RAND_MAX)+1)*4;

        }
    if(getpixel(*xp2-1,*yp2+17)!=RED && getpixel(*xp2-18,*yp2+30)!=RED && getpixel(*xp2-18,*yp2+4)!=RED && getpixel(*xp2-9,*yp2+9)!=RED && getpixel(*xp2-5,*yp2+13)!=RED && getpixel(*xp2-5,*yp2+21)!=RED && getpixel(*xp2-9,*yp2+25)!=RED && *flaga==2){
        if(getpixel(*xp2-2,*yp2+17)!=LIGHTRED && getpixel(*xp2-2,*yp2+29)!=LIGHTRED && getpixel(*xp2-2,*yp2+5)!=LIGHTRED && getpixel(*xp2-2,*yp2+8)!=LIGHTRED && getpixel(*xp2-2,*yp2+13)!=LIGHTRED && getpixel(*xp2-2,*yp2+21)!=LIGHTRED && getpixel(*xp2-2,*yp2+26)!=LIGHTRED && *flaga==2){
            if(getpixel(*xp2-2,*yp2+17)!=LIGHTMAGENTA && getpixel(*xp2-2,*yp2+29)!=LIGHTMAGENTA && getpixel(*xp2-2,*yp2+5)!=LIGHTMAGENTA && getpixel(*xp2-2,*yp2+8)!=LIGHTMAGENTA && getpixel(*xp2-2,*yp2+13)!=LIGHTMAGENTA && getpixel(*xp2-2,*yp2+21)!=LIGHTMAGENTA && getpixel(*xp2-2,*yp2+26)!=LIGHTMAGENTA && *flaga==2){
                *xp2=*xp2+2;
                *flaga=2;
            }
        }
    }
    else
        if(*flaga!=4 && *flaga!=1 && *flaga!=3){
            *flaga=1+rand()/(float(RAND_MAX)+1)*4;
            *flaga=1+rand()/(float(RAND_MAX)+1)*4;

        }

    if(getpixel(*xp2-30,*yp2+18)!=RED && getpixel(*xp2-25,*yp2+25)!=RED && getpixel(*xp2-21,*yp2+29)!=RED && getpixel(*xp2-17,*yp2+33)!=RED && getpixel(*xp2-13,*yp2+29)!=RED && getpixel(*xp2-9,*yp2+25)!=RED && getpixel(*xp2-4,*yp2+18)!=RED && *flaga==3){
        if(getpixel(*xp2-29,*yp2+32)!=LIGHTRED && getpixel(*xp2-26,*yp2+32)!=LIGHTRED && getpixel(*xp2-21,*yp2+32)!=LIGHTRED && getpixel(*xp2-17,*yp2+32)!=LIGHTRED && getpixel(*xp2-13,*yp2+32)!=LIGHTRED && getpixel(*xp2-8,*yp2+32)!=LIGHTRED && getpixel(*xp2-5,*yp2+32)!=LIGHTRED && *flaga==3){
            if(getpixel(*xp2-29,*yp2+32)!=LIGHTMAGENTA && getpixel(*xp2-26,*yp2+32)!=LIGHTMAGENTA && getpixel(*xp2-21,*yp2+32)!=LIGHTMAGENTA && getpixel(*xp2-17,*yp2+32)!=LIGHTMAGENTA && getpixel(*xp2-13,*yp2+32)!=LIGHTMAGENTA && getpixel(*xp2-8,*yp2+32)!=LIGHTMAGENTA && getpixel(*xp2-5,*yp2+32)!=LIGHTMAGENTA && *flaga==3){
                *yp2=*yp2+2;
                *flaga=3;
            }
        }
    }
    else
        if(*flaga!=1 && *flaga!=2 && *flaga!=4){
            *flaga=1+rand()/(float(RAND_MAX)+1)*4;
            *flaga=1+rand()/(float(RAND_MAX)+1)*4;

        }
    if(getpixel(*xp2-30,*yp2+18)!=RED && getpixel(*xp2-25,*yp2+9)!=RED && getpixel(*xp2-21,*yp2+5)!=RED && getpixel(*xp2-17,*yp2+1)!=RED && getpixel(*xp2-13,*yp2+5)!=RED && getpixel(*xp2-9,*yp2+9)!=RED && getpixel(*xp2-4,*yp2+18)!=RED && *flaga==4){
        if(getpixel(*xp2-29,*yp2+2)!=LIGHTRED && getpixel(*xp2-26,*yp2+2)!=LIGHTRED && getpixel(*xp2-21,*yp2+2)!=LIGHTRED && getpixel(*xp2-17,*yp2+2)!=LIGHTRED && getpixel(*xp2-13,*yp2+2)!=LIGHTRED && getpixel(*xp2-8,*yp2+2)!=LIGHTRED && getpixel(*xp2-5,*yp2+2)!=LIGHTRED && *flaga==4){
            if(getpixel(*xp2-29,*yp2+2)!=LIGHTMAGENTA && getpixel(*xp2-26,*yp2+2)!=LIGHTMAGENTA && getpixel(*xp2-21,*yp2+2)!=LIGHTMAGENTA && getpixel(*xp2-17,*yp2+2)!=LIGHTMAGENTA && getpixel(*xp2-13,*yp2+2)!=LIGHTMAGENTA && getpixel(*xp2-8,*yp2+2)!=LIGHTMAGENTA && getpixel(*xp2-5,*yp2+2)!=LIGHTMAGENTA && *flaga==4){
                *yp2=*yp2-2;
                *flaga=4;
            }
        }
    }
    else
        if(*flaga!=2 && *flaga!=3 && *flaga!=1){
            *flaga=1+rand()/(float(RAND_MAX)+1)*4;
            *flaga=1+rand()/(float(RAND_MAX)+1)*4;

        }

}
void sterowanie(int *x, int *y,int z){
    switch(z){
        case KEY_LEFT:
            if(getpixel(*x-6,*y-4)!=RED && getpixel(*x-6,*y+12)!=RED && getpixel(*x-6,*y+1)!=RED && getpixel(*x-6,*y+7)!=RED){
                *x=*x-2;
            }
            break;
        case KEY_UP:
            if(getpixel(*x-4,*y-6)!=RED && getpixel(*x+12,*y-6)!=RED && getpixel(*x+1,*y-6)!=RED && getpixel(*x+7,*y-6)!=RED){
                *y=*y-2;
            }
            break;
        case KEY_RIGHT:
            if(getpixel(*x+14,*y-4)!=RED && getpixel(*x+14,*y+12)!=RED && getpixel(*x+14,*y+1)!=RED && getpixel(*x+14,*y+7)!=RED){
                *x=*x+2;
            }
            break;
        case KEY_DOWN:
            if(getpixel(*x-4,*y+14)!=RED && getpixel(*x+12,*y+14)!=RED && getpixel(*x+1,*y+14)!=RED && getpixel(*x+7,*y+14)!=RED){
                *y=*y+2;
            }
            break;
    }
}
void sprawdz_kolizje(int x,int y,int *kolizja){
   if(getpixel(x-5,y-4)==LIGHTRED || getpixel(x-5,y+12)==LIGHTRED || getpixel(x-5,y+1)==LIGHTRED || getpixel(x-5,y+7)==LIGHTRED){
        *kolizja=1;
    }
    if(getpixel(x-5,y-4)==LIGHTMAGENTA || getpixel(x-5,y+12)==LIGHTMAGENTA || getpixel(x-5,y+1)==LIGHTMAGENTA || getpixel(x-5,y+7)==LIGHTMAGENTA){
        *kolizja=1;
    }
     if(getpixel(x+13,y-4)==LIGHTRED || getpixel(x+13,y+12)==LIGHTRED || getpixel(x+13,y+1)==LIGHTRED || getpixel(x+13,y+7)==LIGHTRED){
        *kolizja=1;
    }
    if(getpixel(x+13,y-4)==LIGHTMAGENTA || getpixel(x+13,y+12)==LIGHTMAGENTA || getpixel(x+13,y+1)==LIGHTMAGENTA || getpixel(x+13,y+7)==LIGHTMAGENTA){
        *kolizja=1;
    }
    if(getpixel(x-4,y-5)==LIGHTRED || getpixel(x+12,y-5)==LIGHTRED || getpixel(x+1,y-5)==LIGHTRED || getpixel(x+7,y-5)==LIGHTRED){
        *kolizja=1;
    }
    if(getpixel(x-4,y-5)==LIGHTMAGENTA || getpixel(x+12,y-5)==LIGHTMAGENTA || getpixel(x+1,y-5)==LIGHTMAGENTA || getpixel(x+7,y-5)==LIGHTMAGENTA){
        *kolizja=1;
    }
    if(getpixel(x-4,y+13)==LIGHTRED || getpixel(x+12,y+13)==LIGHTRED || getpixel(x+1,y+13)==LIGHTRED || getpixel(x+7,y+13)==LIGHTRED){
        *kolizja=1;
    }
    if(getpixel(x-4,y+13)==LIGHTMAGENTA|| getpixel(x+12,y+13)==LIGHTMAGENTA || getpixel(x+1,y+13)==LIGHTMAGENTA || getpixel(x+7,y+13)==LIGHTMAGENTA){
        *kolizja=1;
    }

}
void info(void){
    char tekst1[]="Celem gry jest zbieranie punktow i unikanie przeciwnikow.";
    char tekst2[]="Gracz porusza postacia za pomoca strzalek.";
    char tekst3[]="Aby powrocic do gry wcisnij przycisk ESC.";
    setcolor(GREEN);
    rectangle(getmaxx()/2-250,getmaxy()/2-100,getmaxx()/2+250,getmaxy()/2+100);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(getmaxx()/2,getmaxy()/2,GREEN);
    setbkcolor(GREEN);
    setcolor(RED);
    outtextxy(getmaxx()/2-180,getmaxy()/2-70,tekst1);
    outtextxy(getmaxx()/2-180,getmaxy()/2-50,tekst2);
    outtextxy(getmaxx()/2-180,getmaxy()/2,tekst3);
    setbkcolor(BLACK);
}
void info2(char liczba_zyc[]){
    char tekst1[]="Straciles zycie.";
    char tekst2[]="Pozostale zycia: ";
    char tekst3[]="Aby powrocic do gry wcisnij przycisk ESC.";
    setcolor(GREEN);
    rectangle(getmaxx()/2-250,getmaxy()/2-100,getmaxx()/2+250,getmaxy()/2+100);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(getmaxx()/2,getmaxy()/2,GREEN);
    setbkcolor(GREEN);
    setcolor(RED);
    outtextxy(getmaxx()/2-180,getmaxy()/2-70,tekst1);
    outtextxy(getmaxx()/2-180,getmaxy()/2-50,tekst2);
    outtextxy(getmaxx()/2-180+120,getmaxy()/2-50,liczba_zyc);
    outtextxy(getmaxx()/2-180,getmaxy()/2,tekst3);
    setbkcolor(BLACK);
}
void info3(char liczba_zyc[]){
    char tekst1[]="Straciles zycie.";
    char tekst2[]="Pozostale zycia: ";
    char tekst3[]="KONIEC GRY";
    char tekst4[]="Aby sprobowac ponownie wcisnij przycisk ESC.";
    setcolor(GREEN);
    rectangle(getmaxx()/2-250,getmaxy()/2-100,getmaxx()/2+250,getmaxy()/2+100);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(getmaxx()/2,getmaxy()/2,GREEN);
    setbkcolor(GREEN);
    setcolor(RED);
    outtextxy(getmaxx()/2-180,getmaxy()/2-70,tekst1);
    outtextxy(getmaxx()/2-180,getmaxy()/2-50,tekst2);
    outtextxy(getmaxx()/2-180+120,getmaxy()/2-50,liczba_zyc);
    outtextxy(getmaxx()/2-180,getmaxy()/2-30,tekst3);
    outtextxy(getmaxx()/2-180,getmaxy()/2,tekst4);
    setbkcolor(BLACK);
}
void info4(void){
    char tekst1[]="Wyjsc z gry?";
    char tekst2[]="TAK - wcisnij ENTER ";
    char tekst3[]="NIE - wcisnij ESC";
    setcolor(GREEN);
    rectangle(getmaxx()/2-250,getmaxy()/2-100,getmaxx()/2+250,getmaxy()/2+100);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(getmaxx()/2,getmaxy()/2,GREEN);
    setbkcolor(GREEN);
    setcolor(RED);
    outtextxy(getmaxx()/2-180,getmaxy()/2-70,tekst1);
    outtextxy(getmaxx()/2-180,getmaxy()/2-50,tekst2);
    outtextxy(getmaxx()/2-180,getmaxy()/2-30,tekst3);
    setbkcolor(BLACK);
}
void infozapis(void){
    char tekst1[]="Gra zapisana";
    char tekst2[]="Aby kontynuowac wcisnij ENTER ";
    setcolor(GREEN);
    rectangle(getmaxx()/2-250,getmaxy()/2-100,getmaxx()/2+250,getmaxy()/2+100);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(getmaxx()/2,getmaxy()/2,GREEN);
    setbkcolor(GREEN);
    setcolor(RED);
    outtextxy(getmaxx()/2-180,getmaxy()/2-70,tekst1);
    outtextxy(getmaxx()/2-180,getmaxy()/2-50,tekst2);
    setbkcolor(BLACK);
}
void infoodczyt(void){
    char tekst1[]="Gra wczytana";
    char tekst2[]="Aby kontynuowac wcisnij ENTER ";
    setcolor(GREEN);
    rectangle(getmaxx()/2-250,getmaxy()/2-100,getmaxx()/2+250,getmaxy()/2+100);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(getmaxx()/2,getmaxy()/2,GREEN);
    setbkcolor(GREEN);
    setcolor(RED);
    outtextxy(getmaxx()/2-180,getmaxy()/2-70,tekst1);
    outtextxy(getmaxx()/2-180,getmaxy()/2-50,tekst2);
    setbkcolor(BLACK);
}



//(*InternalHeaders(projektFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(projektFrame)
const long projektFrame::ID_BUTTON1 = wxNewId();
const long projektFrame::ID_RADIOBUTTON1 = wxNewId();
const long projektFrame::ID_RADIOBUTTON2 = wxNewId();
const long projektFrame::ID_RADIOBUTTON3 = wxNewId();
const long projektFrame::ID_STATICTEXT1 = wxNewId();
const long projektFrame::idMenuQuit = wxNewId();
const long projektFrame::idMenuAbout = wxNewId();
const long projektFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(projektFrame,wxFrame)
    //(*EventTable(projektFrame)
    //*)
END_EVENT_TABLE()

projektFrame::projektFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(projektFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Graj!"), wxPoint(120,144), wxSize(184,71), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    RadioButton1 = new wxRadioButton(this, ID_RADIOBUTTON1, _("Latwy"), wxPoint(32,48), wxSize(56,24), 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
    RadioButton1->SetValue(true);
    RadioButton2 = new wxRadioButton(this, ID_RADIOBUTTON2, _("Sredni"), wxPoint(144,48), wxSize(64,24), 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
    RadioButton3 = new wxRadioButton(this, ID_RADIOBUTTON3, _("Trudny"), wxPoint(264,48), wxSize(56,24), 0, wxDefaultValidator, _T("ID_RADIOBUTTON3"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Poziom trudnosci:"), wxPoint(24,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&projektFrame::OnButton1Click);
    Connect(ID_RADIOBUTTON1,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&projektFrame::OnRadioButton1Select);
    Connect(ID_RADIOBUTTON2,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&projektFrame::OnRadioButton2Select);
    Connect(ID_RADIOBUTTON3,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&projektFrame::OnRadioButton3Select);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&projektFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&projektFrame::OnAbout);
    //*)
}

projektFrame::~projektFrame()
{
    //(*Destroy(projektFrame)
    //*)
}

void projektFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void projektFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
int trudnosc;
void projektFrame::OnRadioButton3Select(wxCommandEvent& event)
{
    trudnosc=3;
}

void projektFrame::OnRadioButton2Select(wxCommandEvent& event)
{
    trudnosc=2;
}

void projektFrame::OnRadioButton1Select(wxCommandEvent& event)
{
    trudnosc=1;
}

void projektFrame::OnButton1Click(wxCommandEvent& event)
{
int errorcode;
int z,x,y,a,b,c,i,licznik,l;
int xp1,yp1,xp2,yp2,xp3,yp3,xp4,yp4,xp5,yp5,xp6,yp6;
int faza,flaga1,flaga2,flaga3,flaga4,flaga5,flaga6;
int ilosc_zyc;
int punkty;
int kolizja;
static dane dane[L];
char wynik[5];
zapis zapis;
FILE *plik;
char liczba_zyc[5];
char zycia[]="zycia: ";
char punkty_napis[]="punkty: ";
char pomoc[]="[F1] - Pomoc";
char zapisywanie[]="[z] - Zapisz Gre";
char odczytywanie[]="[o] - Wczytaj Gre";

initwindow(MAKSX+1, MAKSY+1,"okno",true);
errorcode = graphresult();
inicjalizacja_danych(dane);
srand(time(NULL));
if (errorcode != grOk) {
    printf("Blad BGI: %s\n", grapherrormsg(errorcode));
    printf("Wcisnij dowolny klawicz, zeby zakonczyc:");
    getch();
} else {
    x=getmaxx()/2;
    y=getmaxy()/2;
    xp1=MAKSX-5;
    yp1=25;
    xp2=MAKSX/2;
    yp2=MAKSY/2+25;
    xp3=35;
    yp3=MAKSY-60;
    xp4=580;
    yp4=115;
    xp5=75;
    yp5=265;
    xp6=70;
    yp6=75;
    flaga1=1+rand()/(float(RAND_MAX)+1)*4;
    flaga1=1+rand()/(float(RAND_MAX)+1)*4;
    flaga2=1+rand()/(float(RAND_MAX)+1)*4;
    flaga2=1+rand()/(float(RAND_MAX)+1)*4;
    flaga3=1+rand()/(float(RAND_MAX)+1)*4;
    flaga3=1+rand()/(float(RAND_MAX)+1)*4;
    flaga4=1+rand()/(float(RAND_MAX)+1)*4;
    flaga4=1+rand()/(float(RAND_MAX)+1)*4;
    flaga5=1+rand()/(float(RAND_MAX)+1)*4;
    flaga5=1+rand()/(float(RAND_MAX)+1)*4;
    flaga6=1+rand()/(float(RAND_MAX)+1)*4;
    flaga6=1+rand()/(float(RAND_MAX)+1)*4;
    punkty=0;
    ilosc_zyc=3;
    itoa(punkty,wynik,10);
    itoa(ilosc_zyc,liczba_zyc,10);
    kolizja=0;
    licznik=0;
  }
    do{
        if(licznik==5){
            l=rand()/(float(RAND_MAX)+1)*L-1;
            l=rand()/(float(RAND_MAX)+1)*L-1;
            licznik=0;
            dane[l].status=1;
        }
        for(faza=0;faza<3;faza++){
            plansza();
            setcolor(GREEN);
            outtextxy(10,2,zycia);
            outtextxy(60,2,liczba_zyc);
            outtextxy(100,2,punkty_napis);
            outtextxy(150,2,wynik);
            outtextxy(200,2,pomoc);
            outtextxy(300,2,zapisywanie);
            outtextxy(420,2,odczytywanie);
            if(trudnosc==3){
                przeciwnik1(xp6,yp6,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
                przeciwnik1(xp5,yp5,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            if(trudnosc==2 || trudnosc==3){
                przeciwnik1(xp4,yp4,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            przeciwnik1(xp3,yp3,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp2,yp2,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            ruchprzeciwnika2(&xp1,&yp1,&flaga1);
            przeciwnik1(xp1,yp1,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp2,yp2,BLACK,BLACK,BLACK,BLACK,faza);
            ruchprzeciwnika2(&xp2,&yp2,&flaga2);
            przeciwnik1(xp2,yp2,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp3,yp3,BLACK,BLACK,BLACK,BLACK,faza);
            ruchprzeciwnika2(&xp3,&yp3,&flaga3);
            przeciwnik1(xp3,yp3,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            if(trudnosc==2 || trudnosc==3){
                przeciwnik1(xp4,yp4,BLACK,BLACK,BLACK,BLACK,faza);
            }
            if(trudnosc==2 || trudnosc==3){
                ruchprzeciwnika2(&xp4,&yp4,&flaga4);
                przeciwnik1(xp4,yp4,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            if(trudnosc==3){
                przeciwnik1(xp5,yp5,BLACK,BLACK,BLACK,BLACK,faza);
            }
            if(trudnosc==3){
                ruchprzeciwnika2(&xp5,&yp5,&flaga5);
                przeciwnik1(xp5,yp5,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
                przeciwnik1(xp6,yp6,BLACK,BLACK,BLACK,BLACK,faza);
                ruchprzeciwnika2(&xp6,&yp6,&flaga6);
                przeciwnik1(xp6,yp6,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            sprawdz_kolizje(x,y,&kolizja);
            sterowanie(&x,&y,z);
            if(kolizja==1){
                ilosc_zyc--;
                b=z;
                itoa(ilosc_zyc,liczba_zyc,10);
                if(ilosc_zyc>0){
                        while(b!=ESC){
                        swapbuffers();
                        info2(liczba_zyc);
                        swapbuffers();
                        b=getch();
                    }
                }
                if(ilosc_zyc==0){
                    while(b!=ESC){
                        swapbuffers();
                        info3(liczba_zyc);
                        swapbuffers();
                        punkty=0;
                        ilosc_zyc=3;
                        b=getch();
                    }
                }
                cleardevice();
                inicjalizacja_danych(dane);
                uklad_punktow(dane);
                swapbuffers();
                cleardevice();
                plansza();
                x=getmaxx()/2;
                y=getmaxy()/2;
                xp1=MAKSX-5;
                yp1=25;
                xp2=MAKSX/2;
                yp2=MAKSY/2+25;
                xp3=35;
                yp3=MAKSY-60;
                xp4=580;
                yp4=115;
                xp5=75;
                yp5=265;
                xp6=70;
                yp6=75;
                kolizja=0;
                swapbuffers();

            }
            postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
            swapbuffers();
            plansza();
            setcolor(GREEN);
            outtextxy(10,2,zycia);
            outtextxy(60,2,liczba_zyc);
            outtextxy(100,2,punkty_napis);
            outtextxy(150,2,wynik);
            outtextxy(200,2,pomoc);
            outtextxy(300,2,zapisywanie);
            outtextxy(420,2,odczytywanie);
            uklad_punktow(dane);
            if(kbhit()){
                z=getch();
                if(z == ESC){
                    c=0;
                    do{
                        swapbuffers();
                        info4();
                        swapbuffers();
                        c=getch();
                    }while(c!= ESC && c!=ENTER);
                    if(c==ESC){
                        z=ENTER;
                    }
                    cleardevice();
                    swapbuffers();
                    cleardevice();
                    plansza();
                    uklad_punktow(dane);
                    postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
                    swapbuffers();

                }
                if(z==KEY_F1){
                    a=z;
                    while(a!=ESC){
                        swapbuffers();
                        info();
                        swapbuffers();
                        a=getch();
                    }
                    cleardevice();
                    swapbuffers();
                    cleardevice();
                    plansza();
                    uklad_punktow(dane);
                    postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
                    swapbuffers();
                }
                if(z == 'z'){
                    for(i=0;i<L;i++){
                        zapis.wiad[i]=dane[i];
                    }
                    zapis.xp1=xp1;
                    zapis.xp2=xp2;
                    zapis.xp3=xp3;
                    zapis.xp4=xp4;
                    zapis.xp5=xp5;
                    zapis.xp6=xp6;
                    zapis.yp1=yp1;
                    zapis.yp2=yp2;
                    zapis.yp3=yp3;
                    zapis.yp4=yp4;
                    zapis.yp5=yp5;
                    zapis.yp6=yp6;
                    zapis.x=x;
                    zapis.y=y;
                    zapis.ilosc_zyc=ilosc_zyc;
                    zapis.punkty=punkty;
                    plik=fopen("zapis.txt","w");
                    fwrite(&zapis,sizeof(zapis),1,plik);
                    fclose(plik);
                    do{
                        swapbuffers();
                        infozapis();
                        swapbuffers();
                        z=getch();

                    }while(z!=ENTER);
                    cleardevice();
                    swapbuffers();
                    cleardevice();
                    plansza();
                    uklad_punktow(dane);
                    postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
                    swapbuffers();

                }
                if(z == 'o'){
                    plik=fopen("zapis.txt","r");
                    fread(&zapis,sizeof(zapis),1,plik);
                    fclose(plik);
                    xp1=zapis.xp1;
                    xp2=zapis.xp2;
                    xp3=zapis.xp3;
                    xp4=zapis.xp4;
                    xp5=zapis.xp5;
                    xp6=zapis.xp6;
                    yp1=zapis.yp1;
                    yp2=zapis.yp2;
                    yp3=zapis.yp3;
                    yp4=zapis.yp4;
                    yp5=zapis.yp5;
                    yp6=zapis.yp6;
                    y=zapis.y;
                    x=zapis.x;
                    ilosc_zyc=zapis.ilosc_zyc;
                    punkty=zapis.punkty;
                    for(i=0;i<L;i++){
                        dane[i]=zapis.wiad[i];
                    }

                    do{
                        swapbuffers();
                        infoodczyt();
                        swapbuffers();
                        z=getch();

                    }while(z!=ENTER);
                    cleardevice();
                    swapbuffers();
                    cleardevice();
                    plansza();
                    uklad_punktow(dane);
                    postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
                    swapbuffers();

                }

            }
            delay(55);
            swapbuffers();
            wymazywanie_skarbow(dane,&punkty);
            uklad_punktow(dane);
            itoa(punkty,wynik,10);
            itoa(ilosc_zyc,liczba_zyc,10);
            przeciwnik1(xp1,yp1,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp2,yp2,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp3,yp3,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            if(trudnosc==2 || trudnosc==3){
                przeciwnik1(xp4,yp4,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            if(trudnosc==3){
                przeciwnik1(xp5,yp5,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
                przeciwnik1(xp6,yp6,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
            postac(x,y,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK);
            przeciwnik1(xp1,yp1,BLACK,BLACK,BLACK,BLACK,faza);
            przeciwnik1(xp2,yp2,BLACK,BLACK,BLACK,BLACK,faza);
            przeciwnik1(xp3,yp3,BLACK,BLACK,BLACK,BLACK,faza);
            if(trudnosc==2 || trudnosc==3){
                przeciwnik1(xp4,yp4,BLACK,BLACK,BLACK,BLACK,faza);
            }
            if(trudnosc==3){
                przeciwnik1(xp5,yp5,BLACK,BLACK,BLACK,BLACK,faza);
                przeciwnik1(xp6,yp6,BLACK,BLACK,BLACK,BLACK,faza);
            }

        }

        for(faza=3;faza>0;faza--){
            plansza();
            setcolor(GREEN);
            outtextxy(10,2,zycia);
            outtextxy(60,2,liczba_zyc);
            outtextxy(100,2,punkty_napis);
            outtextxy(150,2,wynik);
            outtextxy(200,2,pomoc);
            outtextxy(300,2,zapisywanie);
            outtextxy(420,2,odczytywanie);
            if(trudnosc==3){
                przeciwnik1(xp6,yp6,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
                przeciwnik1(xp5,yp5,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            if(trudnosc==3 || trudnosc==2){
                przeciwnik1(xp4,yp4,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            przeciwnik1(xp3,yp3,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp2,yp2,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            ruchprzeciwnika2(&xp1,&yp1,&flaga1);
            przeciwnik1(xp1,yp1,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp2,yp2,BLACK,BLACK,BLACK,BLACK,faza);
            ruchprzeciwnika2(&xp2,&yp2,&flaga2);
            przeciwnik1(xp2,yp2,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp3,yp3,BLACK,BLACK,BLACK,BLACK,faza);
            ruchprzeciwnika2(&xp3,&yp3,&flaga3);
            przeciwnik1(xp3,yp3,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            if(trudnosc==2 || trudnosc==3){
                przeciwnik1(xp4,yp4,BLACK,BLACK,BLACK,BLACK,faza);
                ruchprzeciwnika2(&xp4,&yp4,&flaga4);
                przeciwnik1(xp4,yp4,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            if(trudnosc==3){
                przeciwnik1(xp5,yp5,BLACK,BLACK,BLACK,BLACK,faza);
                ruchprzeciwnika2(&xp5,&yp5,&flaga5);
                przeciwnik1(xp5,yp5,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
                przeciwnik1(xp6,yp6,BLACK,BLACK,BLACK,BLACK,faza);
                ruchprzeciwnika2(&xp6,&yp6,&flaga6);
                przeciwnik1(xp6,yp6,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            sprawdz_kolizje(x,y,&kolizja);
            sterowanie(&x,&y,z);
            if(kolizja==1){
                ilosc_zyc--;
                b=z;
                itoa(ilosc_zyc,liczba_zyc,10);
                if(ilosc_zyc>0){
                        while(b!=ESC){
                        swapbuffers();
                        info2(liczba_zyc);
                        swapbuffers();
                        b=getch();
                    }
                }
                if(ilosc_zyc==0){
                    while(b!=ESC){
                        swapbuffers();
                        info3(liczba_zyc);
                        swapbuffers();
                        punkty=0;
                        ilosc_zyc=3;
                        b=getch();
                    }
                }
                cleardevice();
                inicjalizacja_danych(dane);
                uklad_punktow(dane);
                swapbuffers();
                cleardevice();
                plansza();
                x=getmaxx()/2;
                y=getmaxy()/2;
                xp1=MAKSX-5;
                yp1=25;
                xp2=MAKSX/2;
                yp2=MAKSY/2+25;
                xp3=35;
                yp3=MAKSY-60;
                xp4=580;
                yp4=115;
                xp5=75;
                yp5=265;
                xp6=70;
                yp6=75;
                kolizja=0;
                swapbuffers();

            }
            postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
            swapbuffers();
            plansza();
            setcolor(GREEN);
            outtextxy(10,2,zycia);
            outtextxy(60,2,liczba_zyc);
            outtextxy(100,2,punkty_napis);
            outtextxy(150,2,wynik);
            outtextxy(200,2,pomoc);
            outtextxy(300,2,zapisywanie);
            outtextxy(420,2,odczytywanie);
            uklad_punktow(dane);
            if(kbhit()){
                z=getch();
                if(z == ESC){
                    c=0;
                    do{
                        swapbuffers();
                        info4();
                        swapbuffers();
                        c=getch();
                    }while(c!= ESC && c!=ENTER);
                    if(c==ESC){
                        z=ENTER;
                    }
                    cleardevice();
                    swapbuffers();
                    cleardevice();
                    plansza();
                    uklad_punktow(dane);
                    postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
                    swapbuffers();

                }
                if(z==KEY_F1){
                    a=z;
                    while(a!=ESC){
                        swapbuffers();
                        info();
                        swapbuffers();
                        a=getch();
                    }
                    cleardevice();
                    swapbuffers();
                    cleardevice();
                    plansza();
                    uklad_punktow(dane);
                    postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
                    swapbuffers();
                }
                if(z == 'z'){
                    for(i=0;i<L;i++){
                        zapis.wiad[i]=dane[i];
                    }
                    zapis.xp1=xp1;
                    zapis.xp2=xp2;
                    zapis.xp3=xp3;
                    zapis.xp4=xp4;
                    zapis.xp5=xp5;
                    zapis.xp6=xp6;
                    zapis.yp1=yp1;
                    zapis.yp2=yp2;
                    zapis.yp3=yp3;
                    zapis.yp4=yp4;
                    zapis.yp5=yp5;
                    zapis.yp6=yp6;
                    zapis.x=x;
                    zapis.y=y;
                    zapis.ilosc_zyc=ilosc_zyc;
                    zapis.punkty=punkty;
                    plik=fopen("zapis.txt","w");
                    fwrite(&zapis,sizeof(zapis),1,plik);
                    fclose(plik);
                    do{
                        swapbuffers();
                        infozapis();
                        swapbuffers();
                        z=getch();

                    }while(z!=ENTER);
                    cleardevice();
                    swapbuffers();
                    cleardevice();
                    plansza();
                    uklad_punktow(dane);
                    postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
                    swapbuffers();

                }
                if(z == 'o'){
                    plik=fopen("zapis.txt","r");
                    fread(&zapis,sizeof(zapis),1,plik);
                    fclose(plik);
                    xp1=zapis.xp1;
                    xp2=zapis.xp2;
                    xp3=zapis.xp3;
                    xp4=zapis.xp4;
                    xp5=zapis.xp5;
                    xp6=zapis.xp6;
                    yp1=zapis.yp1;
                    yp2=zapis.yp2;
                    yp3=zapis.yp3;
                    yp4=zapis.yp4;
                    yp5=zapis.yp5;
                    yp6=zapis.yp6;
                    y=zapis.y;
                    x=zapis.x;
                    ilosc_zyc=zapis.ilosc_zyc;
                    punkty=zapis.punkty;
                    for(i=0;i<L;i++){
                        dane[i]=zapis.wiad[i];
                    }

                    do{
                        swapbuffers();
                        infoodczyt();
                        swapbuffers();
                        z=getch();

                    }while(z!=ENTER);
                    cleardevice();
                    swapbuffers();
                    cleardevice();
                    plansza();
                    uklad_punktow(dane);
                    postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
                    swapbuffers();

                }

            }
            delay(55);
            swapbuffers();
            wymazywanie_skarbow(dane,&punkty);
            uklad_punktow(dane);
            itoa(punkty,wynik,10);
            itoa(ilosc_zyc,liczba_zyc,10);
            przeciwnik1(xp1,yp1,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp2,yp2,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            przeciwnik1(xp3,yp3,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            if(trudnosc==3 || trudnosc==2){
                przeciwnik1(xp4,yp4,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            if(trudnosc==3){
                przeciwnik1(xp5,yp5,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
                przeciwnik1(xp6,yp6,RED,RED,LIGHTRED,LIGHTMAGENTA,faza);
            }
            postac(x,y,BROWN,BROWN,LIGHTBLUE,YELLOW,RED,BLUE);
            postac(x,y,BLACK,BLACK,BLACK,BLACK,BLACK,BLACK);
            przeciwnik1(xp1,yp1,BLACK,BLACK,BLACK,BLACK,faza);
            przeciwnik1(xp2,yp2,BLACK,BLACK,BLACK,BLACK,faza);
            przeciwnik1(xp3,yp3,BLACK,BLACK,BLACK,BLACK,faza);
            if(trudnosc==3 || trudnosc==2){
                przeciwnik1(xp4,yp4,BLACK,BLACK,BLACK,BLACK,faza);
            }
            if(trudnosc==3){
                przeciwnik1(xp5,yp5,BLACK,BLACK,BLACK,BLACK,faza);
                przeciwnik1(xp6,yp6,BLACK,BLACK,BLACK,BLACK,faza);
            }

        }
        licznik++;
    }while(z!=ESC);
    closegraph();
}

