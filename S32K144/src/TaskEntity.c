/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Archie
 * @Date: 2020-04-19 14:28:17
 * @LastEditors: Archie
 * @LastEditTime: 2020-05-10 16:53:42
 */
/*��Ϊ�������Ͷ�������⣬MCAL��ص�ͷ�ļ�������OS��ͷ�ļ�֮ǰ���� */
#include "Dio.h"
#include "TaskEntity.h"


static uint32 g_task1RunngingCnt = 0;
static Dio_LevelType ledBlue = STD_HIGH;
TASK(Task1)
{

    g_task1RunngingCnt++;
    ActivateTask(Task2);
    TerminateTask();
}

static uint32 g_taks2RunnnigCnt = 0;

TASK(Task2)
{
  static Dio_LevelType ledBlue = STD_HIGH;

    g_taks2RunnnigCnt++;
    ActivateTask(Task1);
    TerminateTask();
}