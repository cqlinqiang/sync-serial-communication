// leidaceshi.cpp: 主项目文件。

#include "stdafx.h"
#include "Form1.h"
//#define _AFXDLL 
//using namespace std;
using namespace leidaceshi;

[STAThreadAttribute]
/*int main(array<System::String ^> ^args)

{
	// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// 创建主窗口并运行它
	Application::Run(gcnew Form1());
	return 0;
	  
}*/
//windows应用程序入口函数
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,
       LPSTR lpCmdLine,int nShowCmd)
{
 
// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// 创建主窗口并运行它
	Application::Run(gcnew Form1());
	return 0;
}
