#include "stm32f10x.h"
#include "stm32f10x_gpio.h"

int main(void)
{
	#if 0    // 6�е�14�в�����
	*(unsigned int *)0x40021018 |= (1<<3) ;// ��GPIO�˿ڵ�ʱ��(����RCC_APB2ENR�Ĵ���)
	
	*(unsigned int *)0x40010c00 &=~((0X0f)<<0) ;// �Ƚ����4λ����
	
	*(unsigned int *)0x40010c00 |= (1<<0) ;// ������IOΪ�������ģʽ������ٶ�10M(����CRL�Ĵ���)
	
	*(unsigned int *)0x40010c0c &= ~(1<<0) ;// ��������(����ODR�Ĵ���)
/*0x40010c0cǰ���unsigned int*�ǽ���ת��Ϊָ�����ͣ��ټ���һ��*�ǽ�������Ӧ�ĵ�ַȡ��*/	
	while(1);
	
	#elif 0  // #elif 0�����䲻����(��18�е�25�в�����) 
	
	RCC_APB2ENR |= (1<<3) ;// ��GPIO�˿ڵ�ʱ��(����RCC_APB2ENR�Ĵ���)
	
	GPIOB_CRL &=~((0x0f)<<0) ;// �Ƚ����4λ����
	
	GPIOB_CRL |= (1<<0) ;// ������IOΪ�������ģʽ������ٶ�10M(����CRL�Ĵ���)
	
	GPIOB_ODR &=~(1<<0) ;// ��������(����ODR�Ĵ���)
	while(1);
	
	#elif 0  // ֻ��#elif 0������ű�����
	RCC->APB2ENR |= (1<<3) ;// ��GPIO�˿ڵ�ʱ��(����RCC_APB2ENR�Ĵ���)
	
	GPIOB->CRL &=~((0x0f)<<0) ;// �Ƚ����4λ����
	
	GPIOB->CRL |= (1<<0) ;// ������IOΪ�������ģʽ������ٶ�10M(����CRL�Ĵ���)
	
	GPIOB->ODR &=~(1<<0) ;// ��������(����ODR�Ĵ���)
	while(1);
	
	#elif 1  // ֻ��#elif 1������ű�����
	RCC->APB2ENR |= (1<<3) ;// ��GPIO�˿ڵ�ʱ��(����RCC_APB2ENR�Ĵ���)
	
	GPIOB->CRL &=~((0x0f)<<0) ;// �Ƚ����4λ����
	
	GPIOB->CRL |= (1<<0) ;// ������IOΪ�������ģʽ������ٶ�10M(����CRL�Ĵ���)
	
  GPIO_SetBits(GPIOB,GPIO_Pin_0);// ����GPIO��λ��������PB0��1����Ϩ��
	
	GPIO_ResetBits(GPIOB,GPIO_Pin_0);// ����GPIO��λ��������PB0��λ���Ƶ���
	while(1);
	#endif
}

void SystemInit(void)
{
	// ������Ϊ�գ�Ŀ����ƭ��������������
}
