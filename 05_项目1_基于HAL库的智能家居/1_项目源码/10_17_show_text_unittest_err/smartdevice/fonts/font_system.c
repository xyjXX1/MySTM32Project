
static PFontLib g_ptDefaultFontLib;


/**********************************************************************
 * 函数名称： AddFontLibs
 * 功能描述： 注册多个字库
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 无
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/10/08	     V1.0	  韦东山	      创建
 ***********************************************************************/
void AddFontLibs(void)
{
	AddFontLibASCII();
}

/**********************************************************************
 * 函数名称： GetFontLib
 * 功能描述： 获得字库
 * 输入参数： name-字库的名称
 * 输出参数： 无
 * 返 回 值： 成功-PFontLib, 失败-NULL
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/10/09	     V1.0	  韦东山	      创建
 ***********************************************************************/
PFontLib GetFontLib(char *name)
{
	return __GetFontLib(name);
}


/**********************************************************************
 * 函数名称： SetDefaultFontLib
 * 功能描述： 设置默认的字库
 * 输入参数： name-字库的名称
 * 输出参数： 无
 * 返 回 值： 成功-0, 失败-(-1)
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/10/12	     V1.0	  韦东山	      创建
 ***********************************************************************/
int SetDefaultFontLib(char *name)
{
	g_ptDefaultFontLib = GetFontLib(name);
	if (g_ptDefaultFontLib)
		return 0;
	else
		return -1;
}

int InitDefaultFontLib(void)
{
	if (g_ptDefaultFontLib->FontInit)	
		return g_ptDefaultFontLib->FontInit(g_ptDefaultFontLib);
	else
		return 0;
}


/**********************************************************************
 * 函数名称： GetFontBitMap
 * 功能描述： 在默认的字库里, 获取某个字符的点阵
 * 输入参数： dwCode-哪个字符,字符的编码
 * 输出参数： ptFontBitMap-用来保存字库点阵
 * 返 回 值： 0-成功, -1-失败
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2021/10/12	     V1.0	  韦东山	      创建
 ***********************************************************************/
int GetFontBitMap(unsigned int dwCode, PFontBitMap ptFontBitMap)
{
	return g_ptDefaultFontLib->GetFontBitMap(dwCode, ptFontBitMap);
}



