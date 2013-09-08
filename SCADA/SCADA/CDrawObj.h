#ifndef CDRAWOBJ_H
#define CDRAWOBJ_H

class CDrawObj :public CObject
{
public:
	CDrawObj();
	CDrawObj(const CRect &position);
	
	/*
	functions
	*/
	//virtual int GetHandleCount();
	//virtual CPoint GetHandle(int handle);
	//CRect GetHandleRect(int handle);//not complete 
	//virtual HCURSOR GetHandleCursor(int handle);
	

	/*
	Attribute
	*/
	CRect _position;
	CDocument * _document;
protected:
	BOOL _pen;
	LOGPEN _logPen;
	BOOL _brush;
	LOGBRUSH _logBrush;
};
#endif