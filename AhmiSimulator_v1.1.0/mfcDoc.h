// mfcDoc.h : CmfcDoc 类的接口
//

#include "publicDefine.h"
#ifdef PC_SIM

#pragma once


class CmfcDoc : public CDocument
{
protected: // 仅从序列化创建
	CmfcDoc();
	DECLARE_DYNCREATE(CmfcDoc)

// 属性
public:

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// 实现
public:
	virtual ~CmfcDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};


#endif