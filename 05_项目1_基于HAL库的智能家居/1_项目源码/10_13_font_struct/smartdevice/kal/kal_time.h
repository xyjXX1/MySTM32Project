
#ifndef __KAL_TIMER_H
#define __KAL_TIMER_H

#include <input_system.h>

/**********************************************************************
 * 函数名称： KAL_GetTime
 * 功能描述： 获得系统时间
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值：系统时间
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/09/24	     V1.0	  韦东山	      创建
 ***********************************************************************/ 
TIME_T KAL_GetTime(void);

/**********************************************************************
 * 函数名称： KAL_Delay
 * 功能描述： 延时
 * 输入参数： DelayMS-延时时间,单位: ms
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期       版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/09/27	     V1.0	  韦东山	      创建
 ***********************************************************************/
void KAL_Delay(unsigned int DelayMS);


#endif /* __KAL_TIMER_H */

