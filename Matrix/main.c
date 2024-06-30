#include <REGX52.H>
 
unsigned char code maquet[8]={0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char code maled[8]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
 
void delay(unsigned int t) //hàm delay
   {
      unsigned int x,y;
      for(x=0;x<t;x++)
        {
            for(y=0;y<123;y++);
        }
   } 
void main()
{
 while(1)
 {
	 
		 P2 = maled[0];  //xuat ma led dong i
		 P0 = maquet[1]; //bat sang dong i       //delay de mat kip nhin
	
 }
}