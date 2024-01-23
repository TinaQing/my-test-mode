#include "stm32f10x.h"
#include "delay.h"
#include "OLED.h"		
	
int main(void)
{
  
	 OLED_Init();
   OLED_ShowChar(2,1,'B');//输出一个字符�
  OLED_ShowString(1,1,"abcd");//输出一个字符串
  OLED_ShowNum(1,6,1882,4);//数字
  Delay_ms(1000);
  OLED_Clear();
  Delay_ms(1000);
 
 
	while(1)
	{
		

	}
	
}
