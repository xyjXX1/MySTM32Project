
#include <cal_time.h>

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
TIME_T KAL_GetTime(void)
{
	return CAL_GetTime();
}


