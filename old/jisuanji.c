#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	float num1,num2;
	int choose;
	char yes_no;
	yes_no = 'y';
	do{
		
		system("cls");
		printf("\t\t|---------------------------------------------|\n");
		printf("\t\t|                  ʵ�ü�����                 |\n");
		printf("\t\t|---------------------------------------------|\n");
		printf("\t\t|                   1---�ӷ�                  |\n");
		printf("\t\t|                   2---����                  |\n");
		printf("\t\t|                   3---�˷�                  |\n");
		printf("\t\t|                   4---����                  |\n");
		printf("\t\t|                   0---�˳�                  |\n");
		printf("\t\t|---------------------------------------------|\n");
		printf("\n");
		printf("\t\t ��ѡ���������ͣ�0-4����");
		scanf("%d",&choose);		
		if(choose>1 && choose<=4){
			printf("\t\t  �������һλ��������");
			scanf("%f",&num1);
			printf("\n");
			printf("\t\t  ������ڶ�λ��������");
			scanf("%f",&num2);
			printf("\n");
			printf("\t\t ��������\n");
		}

		
		switch(choose){
			case 1:printf("\t\t  %.2f + %.2f = %.2f\n",num1,num2,num1+num2);break;
			case 2:printf("\t\t  %.2f - %.2f = %.2f\n",num1,num2,num1-num2);break;
			case 3:printf("\t\t  %.2f * %.2f = %.2f\n",num1,num2,num1*num2);break;
			case 4:
				if(num2==0){
					printf("\t\t ��������Ϊ0");
				}
				else{
					printf("\t\t  %.2f / %.2f = %.2f\n",num1,num2,num1/num2);break;
				}
			case 0:exit(0);
			default:printf("\t\t ����ѡ�����");
		}

		printf("\n\t\t �Ƿ�������㣨����Y��y�����������ַ��˳���");
		scanf("\n%c",&yes_no);
	}while(yes_no=='y'||yes_no=='Y');
	
}