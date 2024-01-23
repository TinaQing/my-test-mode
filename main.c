#include "stm32f10x.h"
#include "delay.h"
#include "OLED.h"		
	
int main(void)
{
  
	 OLED_Init();
   OLED_ShowChar(2,1,'B');//Êä³öÒ»¸ö×Ö·û¡
  OLED_ShowString(1,1,"abcd");//Êä³öÒ»¸ö×Ö·û´®
  OLED_ShowNum(1,6,1882,4);//Êý×Ö
  Delay_ms(1000);
  OLED_Clear();
  Delay_ms(1000);
  OLED_ShowChinese(1,1,0);//µç
  OLED_ShowChinese(1,2,1);//¿Ø
  OLED_ShowChinese(1,3,2);//¾º
  OLED_ShowChinese(1,4,3);//Åà
  OLED_ShowChinese(1,5,4);//Óª
  OLED_ShowChinese(2,1,5);//Ìï
  OLED_ShowChinese(2,2,6);//Çç
	while(1)
	{
		
		
	}
	
}
