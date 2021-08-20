#include "U8glib.h" 
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);
char *txts[] = {"Badz grzeczna!", "Milego dnia :3", "Kocham Cie <3", "Tesknie za Toba", "Spotkamy sie?", "Daj calusa :*", "Usmiechnij sie", "Mysle o Tobie",
"Lubie Cie bardzo", "P + M = <3", "Smacznej kawusi", "Tule Cie mocno", "Napisz do mnie!", "< 09.05.2021 >", "Jestes piekna", "Podobasz mi sie", "Jestem tutaj", 
"Brakuje Ciebie", "Co robisz?", "Moze telefon?", "Odpocznij troche", "Ladnie wygladasz", "Moj Aniolek", "Chodz na spacer", "Wyspij sie dzis", "Jestes super", "You complete me",
"Ugotowac Ci cos?", "Moze kino?", "Dziekuje za Cb", "Dobrze ze jestes", "Dobrze Cie miec", "Uwielbiam Cie", "Pilnuje Cie", "Jestem w sercu", "My dear",
"Carpe diem", "Duzo sily!", "Szczescia :]", "Wiecej milosci", "Dobrego nastroju", "Dobrego dnia", "Dasz rade!", "Jestes madra", "Come to me", "I need you", "Moja polowka",
"Mi vida <3", "My honey bun"};
long txt;
void setup(void)
{
Serial.begin(9600);
randomSeed(analogRead(0));
u8g.setFont(u8g_font_unifont);
txt = random(0, 50);
}
void loop(void)
{
u8g.firstPage();
do {
draw();
} while (u8g.nextPage());
delay(10);
}
void draw(void)
{
u8g.drawStr(1, 30, txts[txt]);
}
