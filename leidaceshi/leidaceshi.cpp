// leidaceshi.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "Form1.h"
//#define _AFXDLL 
//using namespace std;
using namespace leidaceshi;

[STAThreadAttribute]
/*int main(array<System::String ^> ^args)

{
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// ���������ڲ�������
	Application::Run(gcnew Form1());
	return 0;
	  
}*/
//windowsӦ�ó�����ں���
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,
       LPSTR lpCmdLine,int nShowCmd)
{
 
// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// ���������ڲ�������
	Application::Run(gcnew Form1());
	return 0;
}
