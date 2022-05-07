#include <reg51.h> // on-islemci yonergeler
void delay (int); // gecikme fonksiyonu

void main(void) // ana fonksiyon
{
P1 = 0x00;
/* port1 pin'leri LOW ayarinda, 0
p1 = port1 */

while(1)
{
P1 = 0xFF; // port1 pinlerini HIGH yapip LED'leri yakiyor
delay(1000);
/* 1000 ms'lik bir gecikme (1 sn'lik) */

P1 = 0x00; // port1 pinlerini LOW yapip LED'leri sonduruyor
delay(1000);
}
}

void delay (int d) // gecikme fonksiyonu
{
unsigned int i=0; 
 
/* 1000 ms'lik gecikme fonksiyonu icin gereken dongu */

for(;d>0;d–)
{
for(i=250;i>0;i – -);
for(i=248;i>0;i – -);
}
}

 
