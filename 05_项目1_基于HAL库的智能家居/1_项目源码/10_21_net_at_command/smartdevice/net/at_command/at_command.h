
#ifndef __NET_SYSTEM_H
#define __NET_SYSTEM_H

#include "net_device.h"

/**********************************************************************
 * 函数名称： ATInterfaceInit
 * 功能描述： 初始化硬件接口
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 0-成功
 * 修改日期       版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/10/15	     V1.0	  韦东山	      创建
 ***********************************************************************/
int ATInterfaceInit(void);

/**********************************************************************
 * 函数名称： ATCommandSend
 * 功能描述： 发送AT命令,并等待、解析返回结果
 * 输入参数： cmd-AT命令
 * 输入参数： iTimeoutMS-超时时间
 * 输出参数： piLen-用来数据长度
 * 返 回 值： 0-成功, (-1)-错误, (-2)-超时
 * 修改日期       版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/10/15	     V1.0	  韦东山	      创建
 ***********************************************************************/
int ATCommandSend(char *cmd, int iTimeoutMS);

/**********************************************************************
 * 函数名称： ATDataRecv
 * 功能描述： 接收网络数据
 * 输入参数： ptDev-网卡设备
 * 输入参数： Data-数据buffer
 * 输入参数： iTimeoutMS-超时时间
 * 输出参数： piLen-用来数据长度
 * 返 回 值： 0-成功, (-1)-错误, (-2)-超时
 * 修改日期       版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/10/15	     V1.0	  韦东山	      创建
 ***********************************************************************/
int ATDataRecv(struct NetDevice *ptDev, unsigned char *Data, int *piLen, int iTimeoutMS);


#endif /* __NET_SYSTEM_H */

