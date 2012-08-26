========================================================================
    应用程序：leidaceshi 项目概述
========================================================================

本项目已实现同步串行信号的捕捉及解析，但尚有两个功能未实现：
There are two features that haven't been completed:
1.因未实现多线程运行，目前“停止”按钮功能未实现；
  In this program,the "stop" feature hasn't been completed yet by using multithread; 
2.仿真模块发送同步串行信号功能未实现。
  Simulating to transmit sync-serial communication signal hasn't been completed.
组成 leidaceshi 应用程序的每个文件的内容：

leidaceshi.vcproj
    这是使用应用程序向导生成的 VC++ 项目的主项目文件。 
    它包含生成该文件的 Visual C++ 的版本信息，以及有关使用应用程序向导选择的
    平台、配置和项目功能的信息。

leidaceshi.cpp
    这是主应用程序源文件。
    包含用于显示窗体的代码。

Form1.h
    包含窗体类的实现和 InitializeComponent() 函数。

AssemblyInfo.cpp
    包含用于修改程序集元数据的自定义属性。

/////////////////////////////////////////////////////////////////////////////
其他标准文件：

StdAfx.h, StdAfx.cpp
    这些文件用于生成名为 leidaceshi.pch 的预编译头文件
    和名为 StdAfx.obj 的预编译类型文件。

/////////////////////////////////////////////////////////////////////////////
