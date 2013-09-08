#include"stdafx.h"
#include "CDrawObj.h"

CDrawObj::CDrawObj(const CRect &position)
{
	_position = position;
	//_document = NULL;

	_pen = TRUE;
	_logPen.lopnStyle = PS_INSIDEFRAME;
	_logPen.lopnWidth.x = 2;
	_logPen.lopnWidth.y = 2;
	_logPen.lopnColor = RGB(0,0,0);

	_brush = TRUE;
	_logBrush.lbStyle = BS_SOLID;
	_logBrush.lbColor = RGB(192,192,192);
	_logBrush.lbHatch = HS_HORIZONTAL;

}