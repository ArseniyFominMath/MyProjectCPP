#include<windows.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<windows.h>
#include "DLG.h"
#pragma once
namespace Калькулятор2 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{//не оптимально для решения задач с большим количеством операций(сложных вычислений)
			//MessageBox::Show("Бетта версия. В следущем обновлении ждите обратные тригонометрические функции,и точность расчета","сообщение");
			/*DLG^ f2 = gcnew DLG();
		    f2->ShowDialog(this);*/
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//	
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ РежимToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ инженерныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ стандартныйToolStripMenuItem1;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ инструкцияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rUРусскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eNEnglishToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::ToolStripMenuItem^ About_programToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button45;
	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;

	private:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->РежимToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->инженерныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стандартныйToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rUРусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eNEnglishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструкцияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->About_programToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(27, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(104, 212);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 53);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(181, 212);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 53);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Silver;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(27, 271);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 53);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(104, 271);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(71, 53);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(181, 271);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(71, 53);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Silver;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(27, 330);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(71, 53);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Location = System::Drawing::Point(104, 330);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(71, 53);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Silver;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Location = System::Drawing::Point(181, 330);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(71, 53);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button9->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Silver;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Location = System::Drawing::Point(333, 271);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(71, 53);
			this->button10->TabIndex = 10;
			this->button10->Text = L" - ";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			this->button10->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Silver;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Location = System::Drawing::Point(333, 330);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(71, 53);
			this->button11->TabIndex = 11;
			this->button11->Text = L" * ";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			this->button11->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Silver;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Location = System::Drawing::Point(258, 330);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(71, 53);
			this->button12->TabIndex = 12;
			this->button12->Text = L" / ";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			this->button12->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Silver;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button13->Location = System::Drawing::Point(27, 153);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(71, 53);
			this->button13->TabIndex = 13;
			this->button13->Text = L"c";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			this->button13->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Silver;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::DimGray;
			this->button14->Location = System::Drawing::Point(410, 330);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(81, 53);
			this->button14->TabIndex = 14;
			this->button14->Text = L"M+";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Silver;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::DarkRed;
			this->button15->Location = System::Drawing::Point(104, 153);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(71, 54);
			this->button15->TabIndex = 15;
			this->button15->Text = L"⇚";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			this->button15->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Silver;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button16->Location = System::Drawing::Point(258, 271);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(71, 53);
			this->button16->TabIndex = 16;
			this->button16->Text = L" + ";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			this->button16->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Silver;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button17->Location = System::Drawing::Point(258, 212);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(71, 53);
			this->button17->TabIndex = 17;
			this->button17->Tag = L"0";
			this->button17->Text = L"√  ";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Silver;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button18->Location = System::Drawing::Point(258, 153);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(71, 53);
			this->button18->TabIndex = 18;
			this->button18->Tag = L"";
			this->button18->Text = L"x² ";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Silver;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button19->Location = System::Drawing::Point(655, 389);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(71, 53);
			this->button19->TabIndex = 19;
			this->button19->Tag = L"";
			this->button19->Text = L" xⁿ ";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Silver;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button20->Location = System::Drawing::Point(333, 153);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(71, 53);
			this->button20->TabIndex = 20;
			this->button20->Tag = L"";
			this->button20->Text = L"1/x";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Silver;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button21->Location = System::Drawing::Point(104, 389);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(71, 53);
			this->button21->TabIndex = 21;
			this->button21->Text = L"0";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::Enter_Number);
			this->button21->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Silver;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::Maroon;
			this->button22->Location = System::Drawing::Point(181, 389);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(148, 53);
			this->button22->TabIndex = 22;
			this->button22->Text = L"=";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			this->button22->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Silver;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::Color::DimGray;
			this->button23->Location = System::Drawing::Point(410, 389);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(81, 54);
			this->button23->TabIndex = 23;
			this->button23->Text = L"M-";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Silver;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->ForeColor = System::Drawing::Color::DimGray;
			this->button24->Location = System::Drawing::Point(410, 271);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(81, 53);
			this->button24->TabIndex = 24;
			this->button24->Text = L"MS";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label1->Location = System::Drawing::Point(16, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 32);
			this->label1->TabIndex = 25;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Silver;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button25->Location = System::Drawing::Point(27, 389);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(71, 53);
			this->button25->TabIndex = 26;
			this->button25->Text = L".";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			this->button25->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkGray;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->РежимToolStripMenuItem,
					this->помощьToolStripMenuItem, this->About_programToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(874, 31);
			this->menuStrip1->TabIndex = 27;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// РежимToolStripMenuItem
			// 
			this->РежимToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripSeparator1,
					this->инженерныйToolStripMenuItem, this->стандартныйToolStripMenuItem1
			});
			this->РежимToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->РежимToolStripMenuItem->Name = L"РежимToolStripMenuItem";
			this->РежимToolStripMenuItem->Size = System::Drawing::Size(78, 27);
			this->РежимToolStripMenuItem->Text = L"Режим";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(194, 6);
			// 
			// инженерныйToolStripMenuItem
			// 
			this->инженерныйToolStripMenuItem->Name = L"инженерныйToolStripMenuItem";
			this->инженерныйToolStripMenuItem->Size = System::Drawing::Size(197, 28);
			this->инженерныйToolStripMenuItem->Text = L"инженерный";
			this->инженерныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::инженерныйToolStripMenuItem_Click);
			// 
			// стандартныйToolStripMenuItem1
			// 
			this->стандартныйToolStripMenuItem1->Name = L"стандартныйToolStripMenuItem1";
			this->стандартныйToolStripMenuItem1->Size = System::Drawing::Size(197, 28);
			this->стандартныйToolStripMenuItem1->Text = L"стандартный";
			this->стандартныйToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::стандартныйToolStripMenuItem1_Click);
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->языкToolStripMenuItem,
					this->инструкцияToolStripMenuItem
			});
			this->помощьToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(91, 27);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			this->помощьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::помощьToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->rUРусскийToolStripMenuItem,
					this->eNEnglishToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(184, 28);
			this->языкToolStripMenuItem->Text = L"язык";
			this->языкToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::языкToolStripMenuItem_Click);
			// 
			// rUРусскийToolStripMenuItem
			// 
			this->rUРусскийToolStripMenuItem->Name = L"rUРусскийToolStripMenuItem";
			this->rUРусскийToolStripMenuItem->Size = System::Drawing::Size(183, 28);
			this->rUРусскийToolStripMenuItem->Text = L"RU Русский";
			this->rUРусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rUРусскийToolStripMenuItem_Click);
			// 
			// eNEnglishToolStripMenuItem
			// 
			this->eNEnglishToolStripMenuItem->Name = L"eNEnglishToolStripMenuItem";
			this->eNEnglishToolStripMenuItem->Size = System::Drawing::Size(183, 28);
			this->eNEnglishToolStripMenuItem->Text = L"EN English";
			this->eNEnglishToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eNEnglishToolStripMenuItem_Click);
			// 
			// инструкцияToolStripMenuItem
			// 
			this->инструкцияToolStripMenuItem->Name = L"инструкцияToolStripMenuItem";
			this->инструкцияToolStripMenuItem->Size = System::Drawing::Size(184, 28);
			this->инструкцияToolStripMenuItem->Text = L"инструкция";
			this->инструкцияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::инструкцияToolStripMenuItem_Click);
			// 
			// About_programToolStripMenuItem
			// 
			this->About_programToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->About_programToolStripMenuItem->Name = L"About_programToolStripMenuItem";
			this->About_programToolStripMenuItem->Size = System::Drawing::Size(131, 27);
			this->About_programToolStripMenuItem->Text = L"О программе";
			this->About_programToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::About_programToolStripMenuItem_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Silver;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button26->Location = System::Drawing::Point(526, 154);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(106, 53);
			this->button26->TabIndex = 28;
			this->button26->Text = L"sin()";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Silver;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button27->Location = System::Drawing::Point(526, 213);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(106, 53);
			this->button27->TabIndex = 29;
			this->button27->Text = L"cos()";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Silver;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button28->Location = System::Drawing::Point(526, 271);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(106, 53);
			this->button28->TabIndex = 30;
			this->button28->Text = L"tg()";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Silver;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button29->Location = System::Drawing::Point(526, 330);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(106, 53);
			this->button29->TabIndex = 31;
			this->button29->Text = L"ctg()";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Silver;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button30->Location = System::Drawing::Point(526, 389);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(58, 54);
			this->button30->TabIndex = 32;
			this->button30->Text = L"e";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Silver;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button31->Location = System::Drawing::Point(761, 154);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(90, 53);
			this->button31->TabIndex = 33;
			this->button31->Text = L"lg()";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Silver;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button32->Location = System::Drawing::Point(761, 213);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(90, 53);
			this->button32->TabIndex = 34;
			this->button32->Text = L"ln()";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Silver;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button33->Location = System::Drawing::Point(761, 272);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(90, 53);
			this->button33->TabIndex = 35;
			this->button33->Text = L"n!";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::Silver;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button34->Location = System::Drawing::Point(761, 330);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(90, 53);
			this->button34->TabIndex = 36;
			this->button34->Text = L"mod";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Silver;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button35->Location = System::Drawing::Point(590, 389);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(59, 53);
			this->button35->TabIndex = 37;
			this->button35->Text = L" 𝝅 ";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label2->Location = System::Drawing::Point(59, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 32);
			this->label2->TabIndex = 38;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label3->Location = System::Drawing::Point(16, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 32);
			this->label3->TabIndex = 39;
			this->label3->Text = L"M";
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::Silver;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button36->ForeColor = System::Drawing::Color::DimGray;
			this->button36->Location = System::Drawing::Point(410, 153);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(81, 53);
			this->button36->TabIndex = 40;
			this->button36->Text = L"MR";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Silver;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button37->ForeColor = System::Drawing::Color::DimGray;
			this->button37->Location = System::Drawing::Point(410, 212);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(81, 53);
			this->button37->TabIndex = 41;
			this->button37->Text = L"MC";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::Silver;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button38->ForeColor = System::Drawing::Color::DarkGreen;
			this->button38->Location = System::Drawing::Point(181, 153);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(71, 53);
			this->button38->TabIndex = 42;
			this->button38->Text = L"CE";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::Silver;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button39->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button39->Location = System::Drawing::Point(333, 212);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(71, 54);
			this->button39->TabIndex = 43;
			this->button39->Text = L"%   ";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click_1);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::Silver;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button40->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button40->Location = System::Drawing::Point(333, 389);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(71, 53);
			this->button40->TabIndex = 44;
			this->button40->Text = L" ±";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(22, 109);
			this->textBox1->MaxLength = 14;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(840, 38);
			this->textBox1->TabIndex = 46;
			this->textBox1->Text = L"0";
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyDown_Number);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::Silver;
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button41->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button41->Location = System::Drawing::Point(638, 330);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(117, 53);
			this->button41->TabIndex = 50;
			this->button41->Text = L"actg()";
			this->button41->UseVisualStyleBackColor = false;
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Silver;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button42->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button42->Location = System::Drawing::Point(638, 272);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(117, 53);
			this->button42->TabIndex = 49;
			this->button42->Text = L"atg()";
			this->button42->UseVisualStyleBackColor = false;
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::Silver;
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button43->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button43->Location = System::Drawing::Point(638, 213);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(117, 53);
			this->button43->TabIndex = 48;
			this->button43->Text = L"acos()";
			this->button43->UseVisualStyleBackColor = false;
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::Silver;
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button44->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button44->Location = System::Drawing::Point(638, 154);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(117, 53);
			this->button44->TabIndex = 47;
			this->button44->Text = L"asin()";
			this->button44->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DarkGray;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(526, 69);
			this->textBox2->MaxLength = 14;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(336, 38);
			this->textBox2->TabIndex = 51;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label4->Location = System::Drawing::Point(521, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 29);
			this->label4->TabIndex = 52;
			this->label4->Text = L"Точность";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::Silver;
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button45->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button45->Location = System::Drawing::Point(732, 389);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(90, 53);
			this->button45->TabIndex = 53;
			this->button45->Text = L"ε";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(874, 513);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Opacity = 0.95;
			this->Text = L"Калькулятор";
			this->TransparencyKey = System::Drawing::Color::SeaGreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		bool indicator1=true, indicator2 = true, language = true;
		double value1=0, value2=0, memory=0;
		String^ operations=" + ";
		String^operator_procent=" ";
		double fact(double n)
		{
			if (n==0) { return 1; }
			else return n * fact(n - 1);
		}
		/*void message_print(bool language)
		{
			if (language) { MessageBox::Show("Ошибка ввода", "Ошибка"); }
			else { MessageBox::Show("Input Error", "Error"); }
		}*/
		
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{	
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = "0";
	label1->Text = L"";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) 
{	
	if (textBox1->Text->Length != 0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1);
	}
	else textBox1->Text = "0";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
{	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{		
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{		
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{		
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{	
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) 
{
		memory = memory - System::Convert::ToDouble(textBox1->Text);
		label2->Text = System::Convert::ToString(memory);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (indicator2) { value2 = System::Convert::ToDouble(textBox1->Text); }
	else { indicator2 = true; }
	label1->Text = label1->Text + textBox1->Text;
	textBox1->Text = "";
	if (operations == " + ")
		{
			if(operator_procent[0]=='%')
			{
				value1 = value1 + value1*value2/100;
				textBox1->Text = System::Convert::ToString(value1);
			}
			else
			{
				value1 = value1 + value2;
				textBox1->Text = System::Convert::ToString(value1);
			}
		}
		else if (operations == " - ")
		{
			if (operator_procent[0] == '%')
			{
				value1 = value1 - value1 * value2 / 100;
				textBox1->Text = System::Convert::ToString(value1);
			}
			else
			{
				value1 = value1 - value2;
				textBox1->Text = System::Convert::ToString(value1);
			}
		}
		else if (operations == " * ")
		{
			if (operator_procent[0] == '%')
			{
				value1 = value1 * value2 / 100;
				textBox1->Text = System::Convert::ToString(value1);
			}
			else
			{
				value1 = value1 * value2;
				textBox1->Text = System::Convert::ToString(value1);
			}
		}
		else if (operations == " / ")
		{
		if (value2 != 0)
		{
			if (operator_procent[0] == '%')
			{
				value1 = (100 * value1) / value2;
				textBox1->Text = System::Convert::ToString(value1);
			}
			else
			{
				value1 = value1 / value2;
				textBox1->Text = System::Convert::ToString(value1);
			}
		}
		else
		{
			if (language) { MessageBox::Show("Попытка деления на 0", "Ошибка"); }
			else { MessageBox::Show("Attempt to divide by 0", "Error"); }
			textBox1->Text = "0";
		}
		}
		else if (operations[0] == ' ')
		{
			if( (value1<0 &&(value2 - long(value2)) == 0)||(value1 > 0)||(value1==0 && value2>0))
			{
				value1 = powl(value1, value2);
				textBox1->Text = System::Convert::ToString(value1);
			}
			else
			{
				textBox1->Text = System::Convert::ToString(value1);
				if (language) { MessageBox::Show("Функция не определена! a^x существует при a>=0!", "Ошибка"); }
				else { MessageBox::Show("Function undefined! a^x exists for a>= 0!", "Error"); }
			}
		}
		else if (operations == "mod")
		{
			value1 = fmod(value1,value2);
			textBox1->Text = System::Convert::ToString(value1);
		}
	
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) 
{	
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) 
{
    memory = System::Convert::ToDouble(textBox1->Text);
	label2->Text = System::Convert::ToString(memory);
	indicator1 = false;	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->MaxLength = 14;
	MyForm::Height = 415;
	MyForm::Width =400;
	textBox1->Width = 365;
}
private: System::Void Enter_Number(System::Object^ sender, System::EventArgs^ e) 
{
	Button^ Numbers = safe_cast<Button^>(sender);
	if (textBox1->Text=="0")
	{
		textBox1->Text = Numbers->Text;
	}
	else if (textBox1->Text->Length > 16)
	{
	}
	else
	{
		textBox1->Text = textBox1->Text + Numbers->Text;
	}
}
private: System::Void Operation(System::Object^ sender, System::EventArgs^ e) 
{	
		Button^ NumbersOp = safe_cast<Button^>(sender);
		operations = NumbersOp->Text;
		operator_procent = NumbersOp->Text;
		if (textBox1->Text == "")
		{
			if (language) { MessageBox::Show("Возможно вы пытались использовать две операции подряд!", "Неизвестная Ошибка"); }
			else { MessageBox::Show("Perhaps you tried to use two operations in a row!", "Unknown еrror"); }
			textBox1->Text = "0";
		}
		value1 = System::Convert::ToDouble(textBox1->Text);
		label1->Text = L"";
		label1->Text = label1->Text + textBox1->Text;
		textBox1->Text = L"";
		if (operations == " + ")
		{
			label1->Text = label1->Text + "+";
		}
		else if (operations == " - " )
		{
			label1->Text = label1->Text + "-";
		}
		else if (operations == " * ")
		{
			label1->Text = label1->Text + "*";
		}
		else if (operations == " / ")
		{
			label1->Text = label1->Text + "/";
		}
		else if (operations[0] ==' ')
		{
			label1->Text = label1->Text + "^";
		}
		else if (operations[1] == ' ')
		{
		    label1->Text = System::Convert::ToChar(0x221A) + label1->Text ;
			if (value1>=0)
			{
				value1 = sqrt(value1);
				textBox1->Text = System::Convert::ToString(value1);
			}
			else
			{
				textBox1->Text = System::Convert::ToString(value1);
				if (language) { MessageBox::Show("Функция не определена!", "Ошибка"); }
				else { MessageBox::Show("Function undefined!", "Error"); }
			}
			
		}
		else if (operations[2] == 'x')
		{
			if (value1 != 0)
			{
				label1->Text = "1/" + label1->Text;
				value1 = 1 / value1;	
			}
			else if (language) { MessageBox::Show("Попытка деления на 0", "Ошибка"); }
			else { MessageBox::Show("Attempt to divide by 0", "Error"); }
			textBox1->Text = System::Convert::ToString(value1);
		}
		else if (operations[0] == 'x')
		{
			label1->Text = label1->Text+"^2";
			value1 = value1* value1;
			textBox1->Text = System::Convert::ToString(value1);
		}
		else if (operations[0] ==' ')
		{
			label1->Text = label1->Text + "^";
		}
		else if (operations[2] == 'x')
		{
			label1->Text = "1/" + label1->Text;
			value1 = 1/value1;
			textBox1->Text = System::Convert::ToString(value1);
		}
		else if (operations[0] == 'x')
		{
			label1->Text = label1->Text+"^2";
			value1 = value1* value1;
			textBox1->Text = System::Convert::ToString(value1);
		}
		else if (operations == "sin()")
		{
			label1->Text = "sin("+label1->Text+")" ;
			value1 = sin(value1);
			textBox1->Text = System::Convert::ToString(value1);
		}
		else if (operations == "cos()")
		{
			label1->Text = "cos(" + label1->Text + ")";
			value1 = cos(value1);
			textBox1->Text = System::Convert::ToString(value1);
		}
		else if (operations == "tg()")
		{
			label1->Text = "tg(" + label1->Text + ")";
			value1 = tan(value1);
			textBox1->Text = System::Convert::ToString(value1);
		}
		else if (operations == "ctg()")
		{
			label1->Text = "ctg(" + label1->Text + ")";
			value1 = 1/tan(value1);
			textBox1->Text = System::Convert::ToString(value1);
		}
		else if (operations == "lg()")
		{
			label1->Text = "lg(" + label1->Text + ")";
			if (value1 > 0)
			{
				value1 = log10(value1);
				textBox1->Text = System::Convert::ToString(value1);
			}
			else
			{
				textBox1->Text = System::Convert::ToString(value1);
				if (language) { MessageBox::Show("Функция не определена!", "Ошибка"); }
				else { MessageBox::Show("Function undefined!", "Error"); }
			}
		}
		else if (operations == "ln()")
		{
			label1->Text = "ln(" + label1->Text + ")";
			if (value1 > 0)
			{
				value1 = log(value1);
				textBox1->Text = System::Convert::ToString(value1);
			}
			else
			{
				textBox1->Text = System::Convert::ToString(value1);
				if (language) { MessageBox::Show("Функция не определена!", "Ошибка"); }
				else { MessageBox::Show("Function undefined!", "Error"); }
			}
		}
		else if (operations == "mod")
		{
			label1->Text = label1->Text + " mod ";
		}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (!textBox1->Text->Contains(","))
	{
		textBox1->Text = textBox1->Text + ",";
	}
}
	private: System::Void инженерныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm::Height = 415;
		MyForm::Width = 670;
		textBox1->Width = 630;
	}
private: System::Void стандартныйToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MyForm::Height = 415;
	MyForm::Width = 400;
	textBox1->Width = 365;
}
	private: System::Void инструкцияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (language)
		{
			MessageBox::Show("Вас приветсвует приложение калькулятор! \n  СТАНДАРТНЫЙ РЕЖИМ\n(±) - позволяет изменить текущее положительное число на отрицательное или наоборот\n(MS)«Memory Save» – записывает текущее значение на дисплее в буфер памяти для последующего использования.\n(MC)«Memory Clean» – удаляет все данные в памяти (обнуляет).\n(MR)«Memory Read» – отображает текущее содержимое буфера памяти.\n(M-) — вычитает значение в буфере из текущего значения на дисплее и сохраняет в буфер памяти, итоговое значение можно увидеть только после нажатия MR.\n(M+) — аналогично (M-) , только значение прибавляется и сохраняется обратно в буфер памяти.\n   КОМБИНАЦИИ\n(+)+(%) - к введенному числу прибавляет n его процентов;(-)+(%) - аналогично (+)+(%), только вычитвет n процентов;\n(/)+(%) - находит число от кторого оно составляет n%;(*)+(%) - находит n процентов от введенного числа\n  ИНЖЕНЕРНЫЙ РЕЖИМ\nx mod y - находит остаток от деления х на у\nТригонометрические функции в аргумент принимают только радианы!\nФакториал работает только с натуральными числами и 0!\n Функция х^n определеная для х>=0!", "Инструкции");
		}
		else
		{
			MessageBox::Show("Welcome to the calculator app!\n  STANDARD MODE\n(±) - allows you to change the current positive number to negative or vice versa\n(MS)«Memory Save» - ​​writes the current value on the display to the memory buffer for later use.\n(MC)«Memory Clean» - deletes all data in memory (zeroes).\n(MR)«Memory Read» - displays the current contents of the memory buffer.\n(M-) - subtracts the value in the buffer from the current value on the display and saves it to the memory buffer, the total value can be seen only after pressing MR.\n(M +) - similar to (M-), only the value is added and saved back to the memory buffer.\n   COMBINATIONS \n(+) + (%) - adds n percent to the entered number;(-) + (%) - similar to (+) + (%), only subtracts n percent;\n(/) + (%) - finds the number from which it is n%; (*) + (%) - finds n percent of the entered number \n   ENGINEERING MODE \nx mod y - finds remainders after division by y \nTrigonometric functions take only radians as an argument!\nFactorial only works with natural numbers and 0!\nFunction x^n defined for x > = 0!", "Instructions");
		}
	}
private: System::Void помощьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void РежимToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void языкToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void rUРусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	language = true;
	MyForm::Text = "Кальулятор";
	помощьToolStripMenuItem->Text = "Помощь";
	языкToolStripMenuItem->Text = "Язык";
	инструкцияToolStripMenuItem->Text = "Инструкции";
	РежимToolStripMenuItem->Text = "Режим";
	инженерныйToolStripMenuItem->Text = "Инженерный";
	стандартныйToolStripMenuItem1->Text = "Стандартный";
	About_programToolStripMenuItem->Text = "О программе";
}
private: System::Void eNEnglishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	language = false;
	MyForm::Text = "Calculator";
	помощьToolStripMenuItem->Text = "Help";
	языкToolStripMenuItem->Text = "Language";
	инструкцияToolStripMenuItem->Text = "Instructions";
	РежимToolStripMenuItem->Text = "Mode";
	инженерныйToolStripMenuItem->Text = "Engineering";
	стандартныйToolStripMenuItem1->Text = "Standard";
	About_programToolStripMenuItem->Text = "About program";
	
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = "2,71828182845904";
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = "3,14159265358979";
}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
		memory = memory+System::Convert::ToDouble(textBox1->Text);
		label2->Text = System::Convert::ToString(memory);
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) 
{
		value1 = System::Convert::ToDouble(textBox1->Text);
		double n ;
		if (value1>=0 && !modf(value1, &n))
		{
			label1->Text = System::Convert::ToString(value1) + "!";
			value1 = fact(value1);
			textBox1->Text = System::Convert::ToString(value1);
		}
		else
		{
			if (language) { MessageBox::Show("Число не натуральное", "Ошибка"); }
			else { MessageBox::Show("The number is not natural", "Error"); }
		}
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) 
{
	value2 = memory;
	indicator2 = false; 
	textBox1->Text=System::Convert::ToString(value2);
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) 
{
		System::Convert::ToDouble(memory);
		indicator1 = true;
		memory = 0;
		label2->Text = System::Convert::ToString(memory);
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = "0";
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) 
{
	value1 = System::Convert::ToDouble(textBox1->Text);
	value1 = -value1;
	textBox1->Text = System::Convert::ToString(value1);
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e)
{	
}
private: System::Void button39_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	Button^ NumbersOp1 = safe_cast<Button^>(sender);
	operator_procent = NumbersOp1->Text;
	label1->Text = label1->Text + "%";
}
private: System::Void About_programToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (language)
	{
		MessageBox::Show("Калькулятор\nВерсия 3.5.0.1\n© Фомин Арсений Ильич, 2021.\nСвободный доступ.\nСвязь с разработчиком: arseniyif@gmail.com", "О программе");
	}
	else
	{
		MessageBox::Show("Calculator\nVersion 3.5.0.1\n© Arseniy Ilyich Fomin, 2021.\nFree access.\nContact the developer: arseniyif@gmail.com", "About program");
	}
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) 
{	
}
Void KeyDown_Number(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
{
	if (e->KeyValue == 0x60)
	{
		Enter_Number(button21, e);
	}
	else if (e->KeyValue == 0x61)
	{
		Enter_Number(button1, e);
	}
	else if (e->KeyValue == 0x62)
	{
		Enter_Number(button2, e);
	}
	else if (e->KeyValue == 0x63)
	{
		Enter_Number(button3, e);
	}
	else if (e->KeyValue == 0x64)
	{
		Enter_Number(button4, e);
	}
	else if (e->KeyValue == 0x65)
	{
		Enter_Number(button5, e);
	}
	else if (e->KeyValue == 0x66)
	{
		Enter_Number(button6, e);
	}
	else if (e->KeyValue == 0x67)
	{
		Enter_Number(button7, e);
	}
	else if (e->KeyValue == 0x68)
	{
		Enter_Number(button8, e);
	}
	else if (e->KeyValue == 0x69)
	{
		Enter_Number(button9, e);
	}
	else if (e->KeyValue == 0x6B)
	{
		Operation(button16, e);
	}
	else if (e->KeyValue == 0x6A)
	{
		Operation(button11, e);
	}
	else if (e->KeyValue == VK_SUBTRACT)
	{
		Operation(button10, e);
	}
	else if (e->KeyValue == VK_DIVIDE)
	{
		Operation(button12, e); 
	}
	else if (e->KeyValue == VK_DECIMAL)
	{
		button25_Click(button25, e);
	}
	else if (e->KeyValue == 0x8)
	{
		button15_Click(button15, e);
	}
	else if (e->KeyValue == 0xBB)
	{
		button22_Click(button22, e);
	}
	else if (e->KeyValue == VK_DELETE)
	{
		button13_Click(button13, e);
	}
	else {}
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//boxs = this->textBox2;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
}
};
}
