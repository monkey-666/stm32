#函数

    OUT(PC,13)       //配置PC13强推挽输出  
	PCout(13)=1      //PC13输出高电平  
	IN(PA,0)         //设置PA0上拉输入  
	if(PAin(0)==0)   //当按键S2按下时为真  
	pwmOUT(PB,5)     //配置PB5为pwm输出  
	pwmout(PB,5,150) //PB5 pwm输出150  
	
	
	#include "ymq2.h"
	int main(void)
	{
		OUT(PC,13);
		IN(PA,0);
		while(1)
		{
			PCout(13)=PAin(0);//按下S2后LED亮
		}
	}


![LED and key](/key_led.png)