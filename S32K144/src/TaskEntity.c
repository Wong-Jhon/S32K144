/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Archie
 * @Date: 2020-04-19 14:28:17
 * @LastEditors: Archie
 * @LastEditTime: 2020-04-25 11:56:33
 */
/*��Ϊ�������Ͷ�������⣬MCAL��ص�ͷ�ļ�������OS��ͷ�ļ�֮ǰ���� */
#include "Dio.h"
#include "TaskEntity.h"

TASK(Task1)
{
  static Dio_LevelType ledBlue = STD_HIGH;
  Dio_WriteChannel(DioConf_DioChannel_Dio_Rgb_Blue, ledBlue);
  ledBlue = (Dio_LevelType)(!ledBlue);
}

TASK(Task2)
{

}