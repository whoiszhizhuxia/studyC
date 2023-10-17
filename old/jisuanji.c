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
		printf("\t\t|                  实用计数器                 |\n");
		printf("\t\t|---------------------------------------------|\n");
		printf("\t\t|                   1---加法                  |\n");
		printf("\t\t|                   2---减法                  |\n");
		printf("\t\t|                   3---乘法                  |\n");
		printf("\t\t|                   4---除法                  |\n");
		printf("\t\t|                   0---退出                  |\n");
		printf("\t\t|---------------------------------------------|\n");
		printf("\n");
		printf("\t\t 请选择运算类型（0-4）：");
		scanf("%d",&choose);		
		if(choose>1 && choose<=4){
			printf("\t\t  请输入第一位运算数：");
			scanf("%f",&num1);
			printf("\n");
			printf("\t\t  请输入第二位运算数：");
			scanf("%f",&num2);
			printf("\n");
			printf("\t\t 运算结果：\n");
		}

		
		switch(choose){
			case 1:printf("\t\t  %.2f + %.2f = %.2f\n",num1,num2,num1+num2);break;
			case 2:printf("\t\t  %.2f - %.2f = %.2f\n",num1,num2,num1-num2);break;
			case 3:printf("\t\t  %.2f * %.2f = %.2f\n",num1,num2,num1*num2);break;
			case 4:
				if(num2==0){
					printf("\t\t 除数不能为0");
				}
				else{
					printf("\t\t  %.2f / %.2f = %.2f\n",num1,num2,num1/num2);break;
				}
			case 0:exit(0);
			default:printf("\t\t 输入选项错误");
		}

		printf("\n\t\t 是否继续计算（输入Y或y继续，其他字符退出）");
		scanf("\n%c",&yes_no);
	}while(yes_no=='y'||yes_no=='Y');
	
}