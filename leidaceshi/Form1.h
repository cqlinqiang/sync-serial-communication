#pragma once
#include <afxwin.h >
#include <string>
  UINT ThreadFunc(LPVOID pParam);  
 
namespace leidaceshi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
    volatile bool flag=1;
	//DWORD WINAPI caiji( LPVOID lpParam ); 
	
	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联 
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form 
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}
   
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}  
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RadioButton^  radioButton1;

	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;




	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label13;





	
	protected: 
              
              HWND hWnd;
	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(518, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"开始";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::start_click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(518, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"停止";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::stop_click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(116, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(294, 29);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(204, 319);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(59, 29);
			this->textBox2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Fuchsia;
			this->label1->Location = System::Drawing::Point(56, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 14);
			this->label1->TabIndex = 5;
			this->label1->Text = L"消息帧";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Fuchsia;
			this->label2->Location = System::Drawing::Point(169, 322);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 14);
			this->label2->TabIndex = 6;
			this->label2->Text = L"距离";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(269, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 12);
			this->label3->TabIndex = 7;
			this->label3->Text = L"厘米";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(197, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 12);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Hz";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Fuchsia;
			this->label5->Location = System::Drawing::Point(232, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 28);
			this->label5->TabIndex = 9;
			this->label5->Text = L"实际蜂鸣器\r\n频率";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(142, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(49, 29);
			this->textBox3->TabIndex = 8;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton1->Location = System::Drawing::Point(317, 464);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(67, 23);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->Text = L"后右";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton2->Location = System::Drawing::Point(204, 487);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(67, 23);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->Text = L"后中";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton3->Location = System::Drawing::Point(84, 464);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(67, 23);
			this->radioButton3->TabIndex = 14;
			this->radioButton3->Text = L"后左";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(74, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label7->Location = System::Drawing::Point(405, 508);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(266, 28);
			this->label7->TabIndex = 16;
			this->label7->Text = L"版权所有 ©2012 电子电器部电子科测试组\r\n        weibo.com/2085762275";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(92, 417);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(41, 41);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(217, 440);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(41, 41);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 18;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(343, 417);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 41);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(493, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 16);
			this->label6->TabIndex = 24;
			this->label6->Text = L"有故障的探头：";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(492, 124);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 19);
			this->label8->TabIndex = 28;
			this->label8->Text = L"后左";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(492, 173);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 19);
			this->label9->TabIndex = 29;
			this->label9->Text = L"后右";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(563, 173);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 19);
			this->label10->TabIndex = 30;
			this->label10->Text = L"后右中";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(563, 123);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 19);
			this->label11->TabIndex = 31;
			this->label11->Text = L"后左中";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Fuchsia;
			this->label12->Location = System::Drawing::Point(59, 214);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 28);
			this->label12->TabIndex = 32;
			this->label12->Text = L"对应蜂鸣器\r\n频率";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(320, 213);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 29);
			this->textBox4->TabIndex = 33;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(380, 216);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 12);
			this->label13->TabIndex = 34;
			this->label13->Text = L"Hz";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(672, 536);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"Form1";
			this->Text = L"倒车雷达测试程序V1.0";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void start_click(System::Object^  sender, System::EventArgs^  e) 
{
	
	//CWinThread* pThread;
              //HANDLE hThread;
              //DWORD ThreadID;
	hWnd=::FindWindow(NULL,_T("倒车雷达测试程序V1.0"));		
		
	//void (*ThreadFunc)(void);
	//ThreadFunc=&leidaceshi::Form1::caiji;
	//hThread=CreateThread(NULL,0,&leidaceshi::Form1::caiji,NULL,0,&ThreadID);
	//pThread=AfxBeginThread(ThreadFunc,this);
	    // ::EnableWindow(hWnd,FALSE);
        // ::EnableWindow(hWnd,TRUE);
	 
		
		      
		
	//Sleep(200);
	 /*  QueryPerformanceCounter(&litmp); 
                      QPart2   =   litmp.QuadPart;//获得中止值 
                      dfMinus   =   (double)(QPart2-QPart1); 
                      dfTim   =   dfMinus   /   dfFreq;//   获得对应的时间值，单位为秒  */
	//::CloseHandle(hCom);		 
 }
/*	private: System::Void reset_click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text ="";
		         textBox2->Text ="";
				 textBox3->Text ="";
                 radioButton1->Checked=0;
				 radioButton2->Checked=0;
				 radioButton3->Checked=0;
				 pictureBox2->Visible=0;
				 pictureBox3->Visible=0;
				 pictureBox4->Visible=0;
			 }     */
private: System::Void stop_click(System::Object^  sender, System::EventArgs^  e) {
		 flag=0;
		 ::EnableWindow(hWnd,FALSE);
         ::EnableWindow(hWnd,TRUE);
		 }
//DWORD WINAPI caiji( LPVOID lpParam ) 
UINT ThreadFunc(LPVOID pParam)
 {
   int juli=0;
   CString m_pData;
   CString m_pb1,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
   unsigned int t1,t2,i;
   
			HANDLE hCom;
			//DWORD dwError; 
			//OVERLAPPED o;
            DWORD dwEvtMask;
            DWORD lpModemStat;
			
			hCom=CreateFile(_T("COM1"),GENERIC_READ|GENERIC_WRITE,0,NULL,OPEN_EXISTING,
				FILE_ATTRIBUTE_NORMAL,NULL);
			if(hCom==INVALID_HANDLE_VALUE)
			{printf("CreateFile failed with error %d.\n", GetLastError());
			
			return 0;
			}
			else
			{
			DCB dcb;
			::GetCommState(hCom,&dcb);
			dcb.BaudRate=1000;
			dcb.ByteSize=8;
			dcb.Parity=NOPARITY;
			dcb.StopBits=ONESTOPBIT;
			dcb.fOutxCtsFlow=0;
			dcb.fRtsControl=RTS_CONTROL_ENABLE;
			::SetCommState(hCom,&dcb);
			::PurgeComm(hCom,PURGE_TXCLEAR | PURGE_RXCLEAR);
			::SetCommMask(hCom,EV_DSR);
			}
			// Create an event object for use by WaitCommEvent. 

        /* o.hEvent = ::CreateEvent(
        NULL,   // default security attributes 
        TRUE,   // manual-reset event 
        FALSE,  // not signaled 
        NULL    // no name
		);  
    

    // Initialize the rest of the OVERLAPPED structure to zero.
    o.Internal = 0;
    o.InternalHigh = 0;
    o.Offset = 0;
    o.OffsetHigh = 0;

    assert(o.hEvent);  */
    
/*  LARGE_INTEGER   litmp; 
    LONGLONG   QPart1,QPart2; 
    double   dfMinus,   dfFreq,   dfTim; 
    QueryPerformanceFrequency(&litmp); 
    dfFreq   =   (double)litmp.QuadPart;//   获得计数器的时钟频率  */
	//int t4[500]={0};
   
   
    if (::WaitCommEvent(hCom, &dwEvtMask, NULL)) 
        {t1=GetTickCount();
         
	     }
   //flag=1;
  while(flag)
  {
    if (::WaitCommEvent(hCom, &dwEvtMask, NULL)) 
        {t2=GetTickCount();
        //t4[j]=t2;
		 //::ResetEvent(o.hEvent);
         } 
        if ((t2-t1)>90)
         {
	         m_pData="";
			 m_pb1="";
			 p1=p2=p3=p4="";
			 for(i=0;i<=47;i++)  //开始采集数据
	           {if (::WaitCommEvent(hCom, &dwEvtMask, NULL)) 
		      
    			 {if(::GetCommModemStatus(hCom,&lpModemStat))
                      //{if(static_cast<bool>(lpModemStat & MS_DSR_ON)==false) 
					  {if(lpModemStat & MS_DSR_ON ) 
			             {if (lpModemStat & MS_CTS_ON)
			               m_pData=m_pData+'0';
			 			 else
						 m_pData=m_pData+'1'; 
			              }            
                       }
                     
			        }
                }   //循环完毕，采集到数据
		/*	 QueryPerformanceCounter(&litmp); 
             QPart1   =   litmp.QuadPart;//   获得初始值  */
			 t1=GetTickCount();

			     //textBox1->Text ="";
			     textBox2->Text ="";
				 textBox3->Text =""; 
                 textBox4->Text ="";
                 radioButton1->Checked=0;
				 radioButton2->Checked=0;
				 radioButton3->Checked=0;
				 pictureBox2->Visible=0;
				 pictureBox3->Visible=0;
				 pictureBox4->Visible=0;    
             
			p5=m_pData.Mid(8,8);
			 if (p5=="00011111")
			 {
                p6=m_pData.Mid(2,3);
				p7=m_pData.Mid(5,1);
				p8=m_pData.Mid(6,1);
				p9=m_pData.Mid(7,1);
				if (p8=="1")
                 label11->Visible=1;
			 else
                 label11->Visible=0;
			 if (p6=="111")
                 label10->Visible=1;
			  else
                 label10->Visible=0;
             if (p7=="1")
                 label9->Visible=1;
			  else
                 label9->Visible=0;
             if (p9=="1")
                 label8->Visible=1;
			  else
                 label8->Visible=0;
			 }
			 
			 else
		  {
			 p1=m_pData.Mid(5,1);
			if (p1=="1")
                radioButton1->Checked=1;
			p2=m_pData.Mid(6,1);
			if (p2=="1")
                radioButton2->Checked=1;
			p3=m_pData.Mid(7,1);
			if (p3=="1")
                radioButton3->Checked=1;
			
		    p4=m_pData.Mid(8,3);
            if (p4=="001")
                pictureBox2->Visible=1;
			if (p4=="010")
                pictureBox3->Visible=1;
			if (p4=="100")
                pictureBox4->Visible=1; 

            p10=m_pData.Mid(2,3);
			if (p10=="000" || p10=="111")
				textBox4->Text ="不响";
            if (p10=="001")
				textBox4->Text ="1";
			if (p10=="010")
				textBox4->Text ="2";
            if (p10=="011")
				textBox4->Text ="4";
            if (p10=="100")
				textBox4->Text ="8";
            if (p10=="101")
				textBox4->Text ="长鸣";
            

			m_pb1=m_pData.Mid(11,5);
			juli= _wtoi(m_pb1); 
			switch(juli)
			{case 0: this->textBox2->Text ="太远";
			     textBox3->Text ="不响";               
			     break;
             case 1: this->textBox2->Text ="Stop";
			     textBox3->Text ="长鸣";          
				 break;
             case 10: this->textBox2->Text="35或Stop";
			     textBox3->Text ="长鸣";          
				 break;
             case 11: this->textBox2->Text="40";
			     textBox3->Text ="4";          
				 break;
             case 100: this->textBox2->Text="45";
			     textBox3->Text ="4";           
				 break;
             case 101: this->textBox2->Text="50";
			     textBox3->Text ="4";           
				 break;
             case 110: this->textBox2->Text="55";
			     textBox3->Text ="4";           
				 break;
             case 111: this->textBox2->Text="60";
			     textBox3->Text ="4";           
				 break;
             case 1000: this->textBox2->Text="65";
			     textBox3->Text ="2";           
				 break;
             case 1001: this->textBox2->Text="70";
			     textBox3->Text ="2";           
				 break;
             case 1010: this->textBox2->Text="75";
			     textBox3->Text ="2";           
				 break;
             case 1011: this->textBox2->Text="80";
			     textBox3->Text ="2";          
				 break;
             case 1100: this->textBox2->Text="85";
			     textBox3->Text ="2";          
				 break;
             case 1101: this->textBox2->Text="90";
			     textBox3->Text ="2";          
				 break;
             case 1110: this->textBox2->Text="95";
			     textBox3->Text ="1";          
				 break;
             case 1111: this->textBox2->Text="100";
			     textBox3->Text ="1";          
				 break;
             case 10000: this->textBox2->Text="105";
			     textBox3->Text ="1";          
				 break;
             case 10001: this->textBox2->Text="110";
			     textBox3->Text ="1";          
				 break;
             case 10010: this->textBox2->Text="115";
			     textBox3->Text ="1";          
				 break;
             case 10011: this->textBox2->Text="120";
			     textBox3->Text ="1";          
				 break;
             case 10100: this->textBox2->Text="125";
			     textBox3->Text ="1";          
				 break;
             case 10101: this->textBox2->Text="130";
			     textBox3->Text ="1";          
				 break;
             case 10110: this->textBox2->Text="135";
			     textBox3->Text ="1";          
				 break;
             case 10111: this->textBox2->Text="140";
			     textBox3->Text ="1";          
				 break;
             case 11000: this->textBox2->Text="145";
			     textBox3->Text ="1";          
				 break;
             case 11001: this->textBox2->Text="150";
			     textBox3->Text ="1";          
				 break;
			}
			}
		m_pData=m_pData.Mid(0,8)+" "+p5+" "+m_pData.Mid(16,8);
		System::String ^ s0 = gcnew System::String(m_pData.GetBuffer());
		m_pData.ReleaseBuffer();	
		textBox1->Text=s0; 
		    
        UpdateWindow(hWnd);       	
     }   //显示完毕
		else 
			t1=t2;
					
   }  //未读取到帧的起始信号或一帧采集完成，进行新采集
    ::CloseHandle(hCom);
	 return 0; 	
}	
};

}

