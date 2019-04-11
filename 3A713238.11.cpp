#include<stdio.h>

 

int main()

{

	int number1,number2,number3,temp; 

	printf("請輸入三個數字,會進行排序：");  

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

	printf("從小到大的排列是:%d %d %d",number1,number2,number3);

	

	return 0;

}
