// Ԥ��������--���ص��õĿ�
#include <stdio.h> //���������������
#include <conio.h> //ʹ�� getch()
#include <stdlib.h> //ʹ�� system()
#include <time.h>
#include <string.h>
#define MAXSTU 30    //����һ�����ų��� MAXSTU ֵΪ30�����ѧ��������

// ����ԭ������
void PassWord(); //������֤��������
void MainMenu(); //���˵���������
int InputScroe(int score[]); //¼��ѧ���ɼ���������
void DisplayScore(int score[],int n); //��ʾѧ���ɼ���������
void SumAvgScore(int score[],int n); //ͳ�ƿγ��ֺܷ�ƽ���ֺ�������
void MaxMinScore(int score[],int n); //ͳ�ƿγ���߷ֺ���ͷֺ�������
void GradScore(int score[],int n); //ͳ�ƿγ̸�������������������

// ��������
void PassWord(){
    //������֤����
    printf("���������룺");
    getch();
}
void MainMenu(){
    //��ʾ���˵�����
    system("cls"); //����
    printf("\n\n");
    printf("\t\t|-------------------------------------------------------|\n");
    printf("\t\t|                ѧ �� �� �� ͳ �� ϵ ͳ                |\n");
    printf("\t\t|-------------------------------------------------------|\n");
    printf("\t\t|                  1--¼��ѧ���ɼ�                      |\n");
    printf("\t\t|                  2--��ʾѧ���ɼ�                      |\n");
    printf("\t\t|                  3--ͳ���ֺܷ�ƽ����                  |\n");
    printf("\t\t|                  4--ͳ����߷ֺ���ͷ�                |\n");
    printf("\t\t|                  5--ͳ�Ƹ�����������                  |\n");
    printf("\t\t|                  0--�˳�                              |\n");
    printf("\t\t|-------------------------------------------------------|\n");
}
int InputScroe(int score[]){
    //����ѧ���ɼ�����
    printf("����ѧ���ɼ�\n");
    return(0); //���������ѧ������
}
void DisplayScore(int score[],int n){
    //��ʾѧ���ɼ�����
    printf("��ʾѧ���ɼ�\n");
    return;
}
void SumAvgScore(int score[],int n){
    //ͳ�ƿγ��ֺܷ�ƽ���ֺ���
    printf("ͳ���ֺܷ�ƽ����\n");
    return;
}
void MaxMinScore(int score[],int n){
    //ͳ�ƿγ���߷ֺ���ͷֺ���
    printf("ͳ����߷ֺ���ͷ�\n");
    return;
}
void GradScore(int score[],int n){
    //ͳ�ƿγ̸���������������
    printf("ͳ�Ƹ�����������\n");
    return;
}

// ������
void main(){
    int stu_score[MAXSTU]; //����һά���飬���ѧ��ĳ�ſγ̵ĳɼ�
    int stu_count = 0; //���ѧ��ʵ������
    int choose; //������˵�ѡ�����
    PassWord(); //����������֤����
    while (1)
    {
        MainMenu(); //������ʾ���˵�����
        printf("\t\t ѡ�����˵���ţ�0-5��:");
        scanf("%d",&choose);
        switch(choose)
        {
            case 1:stu_count=InputScroe(stu_score);break; //����¼��ѧ���ɼ�����
            case 2:DisplayScore(stu_score,stu_count);break; //������ʾѧ���ɼ�����
            case 3:SumAvgScore(stu_score,stu_count);break; //����ͳ�ƿγ��ֺܷ�ƽ���ֺ���
            case 4:MaxMinScore(stu_score,stu_count);break; //����ͳ�ƿγ���߷ֺ���ͷֺ���
            case 5:GradScore(stu_score,stu_count);break; //����ͳ�ƿγ̸���������������
            case 0:return; //��ֹ����
            default:printf("\n\t\t ������Ч��������ѡ��\n");
        }
        printf("\n\n\t\t ��������������˵�");
        getch(); //��ȡһ���ַ�������ʾ
    }
    
}


