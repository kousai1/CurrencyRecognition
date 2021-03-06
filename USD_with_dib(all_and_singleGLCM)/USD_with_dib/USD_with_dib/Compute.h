#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "GrayShow.h"
//#include<vector>

#include<io.h>



class CCompute
{
public:
	CGrayShow m_grayShow; //定义一个灰度共现矩阵类
	/*
	double	m_dCorrelation1;
	double	m_dEnergy1;
	double	m_dEntropy1;
	double	m_dInertiaQuadrature1;
	double	m_dLocalCalm1;

	double	m_dCorrelation2;
	double	m_dEnergy2;
	double	m_dEntropy2;
	double	m_dInertiaQuadrature2;
	double	m_dLocalCalm2;

	double	m_dCorrelation3;
	double	m_dEnergy3;
	double	m_dEntropy3;
	double	m_dInertiaQuadrature3;
	double	m_dLocalCalm3;

	double	m_dCorrelation4;
	double	m_dEnergy4;
	double	m_dEntropy4;
	double	m_dInertiaQuadrature4;
	double	m_dLocalCalm4;
	*/

	CCompute();
	~CCompute();

	int splitWidth;	//分割宽度

	//打开BMP图片，获取图片原始数据
	void OpenImage(CString& FilePathName);

	//计算纹理参数，并以vector形式返回
	vector<double> ComputeFeature();

	//获取指定路劲下的所有文件夹和文件名
	void getAllFiles( string path, vector<string>& files);
};