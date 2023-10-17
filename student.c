// 预处理命令--加载调用的库
#include <stdio.h> //输入输出函数调用
#include <conio.h> //使用 getch()
#include <stdlib.h> //使用 system()
#include <time.h>
#include <string.h>
#define MAXSTU 30    //定义一个符号常量 MAXSTU 值为30【最大学生人数】

// 函数原型声明
void PassWord(); //密码验证函数声明
void MainMenu(); //主菜单函数声明
int InputScroe(int score[]); //录入学生成绩函数声明
void DisplayScore(int score[],int n); //显示学生成绩函数声明
void SumAvgScore(int score[],int n); //统计课程总分和平均分函数声明
void MaxMinScore(int score[],int n); //统计课程最高分和最低分函数声明
void GradScore(int score[],int n); //统计课程各分数段人数函数声明

// 函数定义
void PassWord(){
    //密码验证函数
    printf("请输入密码：");
    getch();
}
void MainMenu(){
    //显示主菜单函数
    system("cls"); //清屏
    printf("\n\n");
    printf("\t\t|-------------------------------------------------------|\n");
    printf("\t\t|                学 生 成 绩 统 计 系 统                |\n");
    printf("\t\t|-------------------------------------------------------|\n");
    printf("\t\t|                  1--录入学生成绩                      |\n");
    printf("\t\t|                  2--显示学生成绩                      |\n");
    printf("\t\t|                  3--统计总分和平均分                  |\n");
    printf("\t\t|                  4--统计最高分和最低分                |\n");
    printf("\t\t|                  5--统计各分数段人数                  |\n");
    printf("\t\t|                  0--退出                              |\n");
    printf("\t\t|-------------------------------------------------------|\n");
}
int InputScroe(int score[]){
    //输入学生成绩函数
    printf("输入学生成绩\n");
    return(0); //返回输入的学生人数
}
void DisplayScore(int score[],int n){
    //显示学生成绩函数
    printf("显示学生成绩\n");
    return;
}
void SumAvgScore(int score[],int n){
    //统计课程总分和平均分函数
    printf("统计总分和平均分\n");
    return;
}
void MaxMinScore(int score[],int n){
    //统计课程最高分和最低分函数
    printf("统计最高分和最低分\n");
    return;
}
void GradScore(int score[],int n){
    //统计课程各分数段人数函数
    printf("统计各分数段人数\n");
    return;
}

// 主函数
void main(){
    int stu_score[MAXSTU]; //定义一维数组，存放学生某门课程的成绩
    int stu_count = 0; //存放学生实际人数
    int choose; //存放主菜单选择序号
    PassWord(); //调用密码验证函数
    while (1)
    {
        MainMenu(); //调用显示主菜单函数
        printf("\t\t 选择主菜单序号（0-5）:");
        scanf("%d",&choose);
        switch(choose)
        {
            case 1:stu_count=InputScroe(stu_score);break; //调用录入学生成绩函数
            case 2:DisplayScore(stu_score,stu_count);break; //调用显示学生成绩函数
            case 3:SumAvgScore(stu_score,stu_count);break; //调用统计课程总分和平均分函数
            case 4:MaxMinScore(stu_score,stu_count);break; //调用统计课程最高分和最低分函数
            case 5:GradScore(stu_score,stu_count);break; //调用统计课程各分数段人数函数
            case 0:return; //终止程序
            default:printf("\n\t\t 输入无效，请重新选择！\n");
        }
        printf("\n\n\t\t 按任意键返回主菜单");
        getch(); //获取一个字符，不显示
    }
    
}


