#include<stdio.h>

 

int main()

{

	int number1,number2,number3,temp; 

	printf("�п�J�T�ӼƦr,�|�i��ƧǡG");  

	scanf("%d%d%d",&number1,&number2,&number3); 

	if(number1>number2){ 

		temp=number1;  

		number1=number2; 

		number2=temp; 

	}

	if(number1>number3){ 

		temp=number1; 

		number1=number3; 

		number3=temp; 

	}

	if(number2>number3){   

		temp=number2;   

		number2=number3; 

		number3=temp;

	}

	printf("�q�p��j���ƦC�O:%d %d %d",number1,number2,number3);

	

	return 0;

}
