#include "stm32f10x.h"
#include "delay.h"
#include "OLED.h"		
	
int main(void)
{
  
	 OLED_Init();
   OLED_ShowChar(2,1,'B');//���һ���ַ��
  OLED_ShowString(1,1,"abcd");//���һ���ַ���
  OLED_ShowNum(1,6,1882,4);//����
  Delay_ms(1000);
  OLED_Clear();
  Delay_ms(1000);
  OLED_ShowChinese(1,1,0);//��
  OLED_ShowChinese(1,2,1);//��
  OLED_ShowChinese(1,3,2);//��
  OLED_ShowChinese(1,4,3);//��
  OLED_ShowChinese(1,5,4);//Ӫ
  OLED_ShowChinese(2,1,5);//��
  OLED_ShowChinese(2,2,6);//��
	while(1)
	{
		
		
	}
	
}
