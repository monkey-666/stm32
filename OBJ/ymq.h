void out(unsigned char i)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	switch(i){
		case 0:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;break;
		case 1:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;break;
		case 2:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;break;
		case 3:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;break;
		case 4:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;break;
		case 5:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;break;
		case 6:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;break;
		case 7:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;break;
		case 8:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;break;
		case 9:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;break;
		case 10:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;break;
		case 11:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;break;
		case 12:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;break;
		case 13:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;break;
		case 14:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;break;
		case 15:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;break;
		case 16:GPIO_InitStructure.GPIO_Pin = GPIO_Pin_16;break;
	}
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
}

void GPIO(char c,unsigned char i)
{
	out(i);
	switch(c){
		case 'A':GPIO_Init(GPIOA, &GPIO_InitStructure);break;
		case 'B':GPIO_Init(GPIOB, &GPIO_InitStructure);break;
		case 'C':GPIO_Init(GPIOC, &GPIO_InitStructure);break;
		case 'D':GPIO_Init(GPIOD, &GPIO_InitStructure);break;
		case 'E':GPIO_Init(GPIOE, &GPIO_InitStructure);break;
		case 'F':GPIO_Init(GPIOF, &GPIO_InitStructure);break;
		case 'G':GPIO_Init(GPIOG, &GPIO_InitStructure);break;
	}
}