#include<iostream>
#include<ctime>
#include<windows.h>

#pragma once

namespace Судоку {
    using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Reflection;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
        MyForm(void)
        {
            srand(time(NULL));
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
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    protected:
private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ saveGameToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ openGameToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ optionsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ textToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ languageToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ rURussijnToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ eNEnglishToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ stilesToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ chinaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ russianToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ottomansToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ europeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ nowPictureToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ blackToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ grayToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ aboutProgramToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ lightToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ midleToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ hardToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ newbieToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ expertToolStripMenuItem;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Label^ label81;
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
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->newbieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->lightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->midleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->hardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->expertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->saveGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->textToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->languageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->rURussijnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->eNEnglishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->stilesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->chinaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->russianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ottomansToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->europeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->nowPictureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->blackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->grayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->aboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->label73 = (gcnew System::Windows::Forms::Label());
            this->label74 = (gcnew System::Windows::Forms::Label());
            this->label75 = (gcnew System::Windows::Forms::Label());
            this->label76 = (gcnew System::Windows::Forms::Label());
            this->label77 = (gcnew System::Windows::Forms::Label());
            this->label78 = (gcnew System::Windows::Forms::Label());
            this->label79 = (gcnew System::Windows::Forms::Label());
            this->label80 = (gcnew System::Windows::Forms::Label());
            this->label81 = (gcnew System::Windows::Forms::Label());
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // menuStrip1
            // 
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->menuToolStripMenuItem,
                    this->optionsToolStripMenuItem, this->aboutProgramToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(716, 31);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // menuToolStripMenuItem
            // 
            this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->createToolStripMenuItem,
                    this->saveGameToolStripMenuItem, this->openGameToolStripMenuItem
            });
            this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
            this->menuToolStripMenuItem->Size = System::Drawing::Size(68, 27);
            this->menuToolStripMenuItem->Text = L"Menu";
            // 
            // createToolStripMenuItem
            // 
            this->createToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                this->newbieToolStripMenuItem,
                    this->lightToolStripMenuItem, this->midleToolStripMenuItem, this->hardToolStripMenuItem, this->expertToolStripMenuItem
            });
            this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
            this->createToolStripMenuItem->Size = System::Drawing::Size(184, 28);
            this->createToolStripMenuItem->Text = L"Create";
            this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createToolStripMenuItem_Click);
            // 
            // newbieToolStripMenuItem
            // 
            this->newbieToolStripMenuItem->Name = L"newbieToolStripMenuItem";
            this->newbieToolStripMenuItem->Size = System::Drawing::Size(151, 28);
            this->newbieToolStripMenuItem->Text = L"Newbie";
            this->newbieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newbieToolStripMenuItem_Click);
            // 
            // lightToolStripMenuItem
            // 
            this->lightToolStripMenuItem->Name = L"lightToolStripMenuItem";
            this->lightToolStripMenuItem->Size = System::Drawing::Size(151, 28);
            this->lightToolStripMenuItem->Text = L"Light";
            this->lightToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lightToolStripMenuItem_Click);
            // 
            // midleToolStripMenuItem
            // 
            this->midleToolStripMenuItem->Name = L"midleToolStripMenuItem";
            this->midleToolStripMenuItem->Size = System::Drawing::Size(151, 28);
            this->midleToolStripMenuItem->Text = L"Midle";
            this->midleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::midleToolStripMenuItem_Click);
            // 
            // hardToolStripMenuItem
            // 
            this->hardToolStripMenuItem->Name = L"hardToolStripMenuItem";
            this->hardToolStripMenuItem->Size = System::Drawing::Size(151, 28);
            this->hardToolStripMenuItem->Text = L"Hard";
            this->hardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hardToolStripMenuItem_Click);
            // 
            // expertToolStripMenuItem
            // 
            this->expertToolStripMenuItem->Name = L"expertToolStripMenuItem";
            this->expertToolStripMenuItem->Size = System::Drawing::Size(151, 28);
            this->expertToolStripMenuItem->Text = L"Expert";
            this->expertToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::expertToolStripMenuItem_Click);
            // 
            // saveGameToolStripMenuItem
            // 
            this->saveGameToolStripMenuItem->Name = L"saveGameToolStripMenuItem";
            this->saveGameToolStripMenuItem->Size = System::Drawing::Size(184, 28);
            this->saveGameToolStripMenuItem->Text = L"Save game";
            this->saveGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveGameToolStripMenuItem_Click);
            // 
            // openGameToolStripMenuItem
            // 
            this->openGameToolStripMenuItem->Name = L"openGameToolStripMenuItem";
            this->openGameToolStripMenuItem->Size = System::Drawing::Size(184, 28);
            this->openGameToolStripMenuItem->Text = L"Open game";
            this->openGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openGameToolStripMenuItem_Click);
            // 
            // optionsToolStripMenuItem
            // 
            this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->textToolStripMenuItem,
                    this->languageToolStripMenuItem, this->stilesToolStripMenuItem
            });
            this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
            this->optionsToolStripMenuItem->Size = System::Drawing::Size(84, 27);
            this->optionsToolStripMenuItem->Text = L"Options";
            // 
            // textToolStripMenuItem
            // 
            this->textToolStripMenuItem->Name = L"textToolStripMenuItem";
            this->textToolStripMenuItem->Size = System::Drawing::Size(165, 28);
            this->textToolStripMenuItem->Text = L"Text";
            this->textToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::textToolStripMenuItem_Click);
            // 
            // languageToolStripMenuItem
            // 
            this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->rURussijnToolStripMenuItem,
                    this->eNEnglishToolStripMenuItem
            });
            this->languageToolStripMenuItem->Name = L"languageToolStripMenuItem";
            this->languageToolStripMenuItem->Size = System::Drawing::Size(165, 28);
            this->languageToolStripMenuItem->Text = L"language";
            this->languageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::languageToolStripMenuItem_Click);
            // 
            // rURussijnToolStripMenuItem
            // 
            this->rURussijnToolStripMenuItem->Name = L"rURussijnToolStripMenuItem";
            this->rURussijnToolStripMenuItem->Size = System::Drawing::Size(178, 28);
            this->rURussijnToolStripMenuItem->Text = L"RU Russian";
            this->rURussijnToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rURussijnToolStripMenuItem_Click);
            // 
            // eNEnglishToolStripMenuItem
            // 
            this->eNEnglishToolStripMenuItem->Name = L"eNEnglishToolStripMenuItem";
            this->eNEnglishToolStripMenuItem->Size = System::Drawing::Size(178, 28);
            this->eNEnglishToolStripMenuItem->Text = L"EN English";
            this->eNEnglishToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eNEnglishToolStripMenuItem_Click);
            // 
            // stilesToolStripMenuItem
            // 
            this->stilesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                this->chinaToolStripMenuItem,
                    this->russianToolStripMenuItem, this->ottomansToolStripMenuItem, this->europeToolStripMenuItem, this->nowPictureToolStripMenuItem
            });
            this->stilesToolStripMenuItem->Name = L"stilesToolStripMenuItem";
            this->stilesToolStripMenuItem->Size = System::Drawing::Size(165, 28);
            this->stilesToolStripMenuItem->Text = L"Stiles";
            // 
            // chinaToolStripMenuItem
            // 
            this->chinaToolStripMenuItem->Name = L"chinaToolStripMenuItem";
            this->chinaToolStripMenuItem->Size = System::Drawing::Size(187, 28);
            this->chinaToolStripMenuItem->Text = L"China";
            this->chinaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::chinaToolStripMenuItem_Click);
            // 
            // russianToolStripMenuItem
            // 
            this->russianToolStripMenuItem->Name = L"russianToolStripMenuItem";
            this->russianToolStripMenuItem->Size = System::Drawing::Size(187, 28);
            this->russianToolStripMenuItem->Text = L"Russian";
            this->russianToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::russianToolStripMenuItem_Click);
            // 
            // ottomansToolStripMenuItem
            // 
            this->ottomansToolStripMenuItem->Name = L"ottomansToolStripMenuItem";
            this->ottomansToolStripMenuItem->Size = System::Drawing::Size(187, 28);
            this->ottomansToolStripMenuItem->Text = L"Ottomans";
            this->ottomansToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ottomansToolStripMenuItem_Click);
            // 
            // europeToolStripMenuItem
            // 
            this->europeToolStripMenuItem->Name = L"europeToolStripMenuItem";
            this->europeToolStripMenuItem->Size = System::Drawing::Size(187, 28);
            this->europeToolStripMenuItem->Text = L"Europe";
            this->europeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::europeToolStripMenuItem_Click);
            // 
            // nowPictureToolStripMenuItem
            // 
            this->nowPictureToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->blackToolStripMenuItem,
                    this->grayToolStripMenuItem
            });
            this->nowPictureToolStripMenuItem->Name = L"nowPictureToolStripMenuItem";
            this->nowPictureToolStripMenuItem->Size = System::Drawing::Size(187, 28);
            this->nowPictureToolStripMenuItem->Text = L"Now picture";
            this->nowPictureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::nowPictureToolStripMenuItem_Click);
            // 
            // blackToolStripMenuItem
            // 
            this->blackToolStripMenuItem->Name = L"blackToolStripMenuItem";
            this->blackToolStripMenuItem->Size = System::Drawing::Size(129, 28);
            this->blackToolStripMenuItem->Text = L"Dark";
            this->blackToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::blackToolStripMenuItem_Click);
            // 
            // grayToolStripMenuItem
            // 
            this->grayToolStripMenuItem->Name = L"grayToolStripMenuItem";
            this->grayToolStripMenuItem->Size = System::Drawing::Size(129, 28);
            this->grayToolStripMenuItem->Text = L"Gray";
            this->grayToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grayToolStripMenuItem_Click);
            // 
            // aboutProgramToolStripMenuItem
            // 
            this->aboutProgramToolStripMenuItem->Name = L"aboutProgramToolStripMenuItem";
            this->aboutProgramToolStripMenuItem->Size = System::Drawing::Size(140, 27);
            this->aboutProgramToolStripMenuItem->Text = L"about program";
            this->aboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutProgramToolStripMenuItem_Click);
            // 
            // label1
            // 
            this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(74, 43);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(55, 55);
            this->label1->TabIndex = 1;
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label2
            // 
            this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(135, 43);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(55, 55);
            this->label2->TabIndex = 2;
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label3
            // 
            this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(196, 43);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(55, 55);
            this->label3->TabIndex = 3;
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label4
            // 
            this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(271, 43);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(55, 55);
            this->label4->TabIndex = 4;
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label5
            // 
            this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(332, 43);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(55, 55);
            this->label5->TabIndex = 5;
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label5->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label6
            // 
            this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->Location = System::Drawing::Point(393, 43);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(55, 55);
            this->label6->TabIndex = 6;
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label6->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label7
            // 
            this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(465, 43);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(55, 55);
            this->label7->TabIndex = 7;
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label7->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label8
            // 
            this->label8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(526, 43);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(55, 55);
            this->label8->TabIndex = 8;
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label8->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label9
            // 
            this->label9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(587, 43);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(55, 55);
            this->label9->TabIndex = 9;
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label9->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label10
            // 
            this->label10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(74, 104);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(55, 55);
            this->label10->TabIndex = 10;
            this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label10->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label10->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label11
            // 
            this->label11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(135, 104);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(55, 55);
            this->label11->TabIndex = 11;
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label11->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label11->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label12
            // 
            this->label12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(196, 104);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(55, 55);
            this->label12->TabIndex = 12;
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label12->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label12->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label13
            // 
            this->label13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->Location = System::Drawing::Point(271, 104);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(55, 55);
            this->label13->TabIndex = 13;
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label13->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label13->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label14
            // 
            this->label14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->Location = System::Drawing::Point(332, 104);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(55, 55);
            this->label14->TabIndex = 14;
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label14->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label14->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label15
            // 
            this->label15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->Location = System::Drawing::Point(393, 104);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(55, 55);
            this->label15->TabIndex = 15;
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label15->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label15->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label16
            // 
            this->label16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->Location = System::Drawing::Point(465, 104);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(55, 55);
            this->label16->TabIndex = 16;
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label16->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label16->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label17
            // 
            this->label17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label17->Location = System::Drawing::Point(526, 104);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(55, 55);
            this->label17->TabIndex = 17;
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label17->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label17->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label18
            // 
            this->label18->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->Location = System::Drawing::Point(587, 104);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(55, 55);
            this->label18->TabIndex = 18;
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label18->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label18->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label19
            // 
            this->label19->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label19->Location = System::Drawing::Point(74, 168);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(55, 55);
            this->label19->TabIndex = 19;
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label19->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label19->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label19->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label20
            // 
            this->label20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label20->Location = System::Drawing::Point(135, 168);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(55, 55);
            this->label20->TabIndex = 20;
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label20->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label20->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label20->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label21
            // 
            this->label21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label21->Location = System::Drawing::Point(196, 168);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(55, 55);
            this->label21->TabIndex = 21;
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label21->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label21->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label21->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label22
            // 
            this->label22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label22->Location = System::Drawing::Point(271, 168);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(55, 55);
            this->label22->TabIndex = 22;
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label22->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label22->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label22->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label23
            // 
            this->label23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label23->Location = System::Drawing::Point(332, 168);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(55, 55);
            this->label23->TabIndex = 23;
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label23->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label23->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label23->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label24
            // 
            this->label24->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label24->Location = System::Drawing::Point(393, 168);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(55, 55);
            this->label24->TabIndex = 24;
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label24->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label24->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label24->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label25
            // 
            this->label25->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label25->Location = System::Drawing::Point(465, 168);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(55, 55);
            this->label25->TabIndex = 25;
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label25->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label25->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label25->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label26
            // 
            this->label26->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label26->Location = System::Drawing::Point(526, 168);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(55, 55);
            this->label26->TabIndex = 26;
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label26->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label26->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label26->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label27
            // 
            this->label27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label27->Location = System::Drawing::Point(587, 168);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(55, 55);
            this->label27->TabIndex = 27;
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label27->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label27->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label27->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label28
            // 
            this->label28->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label28->Location = System::Drawing::Point(74, 237);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(55, 55);
            this->label28->TabIndex = 28;
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label28->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label28->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label28->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label29
            // 
            this->label29->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label29->Location = System::Drawing::Point(135, 237);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(55, 55);
            this->label29->TabIndex = 29;
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label29->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label29->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label29->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label30
            // 
            this->label30->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label30->Location = System::Drawing::Point(196, 237);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(55, 55);
            this->label30->TabIndex = 30;
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label30->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label30->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label30->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label31
            // 
            this->label31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label31->Location = System::Drawing::Point(271, 237);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(55, 55);
            this->label31->TabIndex = 31;
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label31->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label31->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label31->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label32
            // 
            this->label32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label32->Location = System::Drawing::Point(332, 237);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(55, 55);
            this->label32->TabIndex = 32;
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label32->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label32->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label32->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label33
            // 
            this->label33->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label33->Location = System::Drawing::Point(393, 237);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(55, 55);
            this->label33->TabIndex = 33;
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label33->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label33->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label33->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label34
            // 
            this->label34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label34->Location = System::Drawing::Point(465, 237);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(55, 55);
            this->label34->TabIndex = 34;
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label34->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label34->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label34->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label35
            // 
            this->label35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label35->Location = System::Drawing::Point(526, 237);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(55, 55);
            this->label35->TabIndex = 35;
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label35->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label35->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label35->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label36
            // 
            this->label36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label36->Location = System::Drawing::Point(587, 237);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(55, 55);
            this->label36->TabIndex = 36;
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label36->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label36->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label36->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label37
            // 
            this->label37->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label37->Location = System::Drawing::Point(74, 297);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(55, 55);
            this->label37->TabIndex = 37;
            this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label37->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label37->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label37->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label38
            // 
            this->label38->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label38->Location = System::Drawing::Point(135, 297);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(55, 55);
            this->label38->TabIndex = 38;
            this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label38->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label38->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label38->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label39
            // 
            this->label39->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label39->Location = System::Drawing::Point(196, 297);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(55, 55);
            this->label39->TabIndex = 39;
            this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label39->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label39->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label39->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label40
            // 
            this->label40->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label40->Location = System::Drawing::Point(271, 297);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(55, 55);
            this->label40->TabIndex = 40;
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label40->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label40->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label40->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label41
            // 
            this->label41->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label41->Location = System::Drawing::Point(332, 297);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(55, 55);
            this->label41->TabIndex = 41;
            this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label41->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label41->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label41->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label42
            // 
            this->label42->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label42->Location = System::Drawing::Point(393, 297);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(55, 55);
            this->label42->TabIndex = 42;
            this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label42->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label42->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label42->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label43
            // 
            this->label43->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label43->Location = System::Drawing::Point(465, 297);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(55, 55);
            this->label43->TabIndex = 43;
            this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label43->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label43->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label43->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label44
            // 
            this->label44->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label44->Location = System::Drawing::Point(526, 297);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(55, 55);
            this->label44->TabIndex = 44;
            this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label44->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label44->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label44->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label45
            // 
            this->label45->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label45->Location = System::Drawing::Point(587, 297);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(55, 55);
            this->label45->TabIndex = 45;
            this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label45->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label45->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label45->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label46
            // 
            this->label46->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label46->Location = System::Drawing::Point(74, 359);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(55, 55);
            this->label46->TabIndex = 46;
            this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label46->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label46->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label46->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label47
            // 
            this->label47->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label47->Location = System::Drawing::Point(135, 359);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(55, 55);
            this->label47->TabIndex = 47;
            this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label47->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label47->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label47->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label48
            // 
            this->label48->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label48->Location = System::Drawing::Point(196, 359);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(55, 55);
            this->label48->TabIndex = 48;
            this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label48->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label48->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label48->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label49
            // 
            this->label49->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label49->Location = System::Drawing::Point(271, 359);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(55, 55);
            this->label49->TabIndex = 49;
            this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label49->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label49->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label49->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label50
            // 
            this->label50->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label50->Location = System::Drawing::Point(332, 359);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(55, 55);
            this->label50->TabIndex = 50;
            this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label50->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label50->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label50->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label51
            // 
            this->label51->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label51->Location = System::Drawing::Point(393, 359);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(55, 55);
            this->label51->TabIndex = 51;
            this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label51->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label51->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label51->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label52
            // 
            this->label52->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label52->Location = System::Drawing::Point(465, 359);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(55, 55);
            this->label52->TabIndex = 52;
            this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label52->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label52->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label52->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label53
            // 
            this->label53->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label53->Location = System::Drawing::Point(526, 359);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(55, 55);
            this->label53->TabIndex = 53;
            this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label53->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label53->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label53->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label54
            // 
            this->label54->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label54->Location = System::Drawing::Point(587, 359);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(55, 55);
            this->label54->TabIndex = 54;
            this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label54->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label54->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label54->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label55
            // 
            this->label55->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label55->Location = System::Drawing::Point(74, 434);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(55, 55);
            this->label55->TabIndex = 55;
            this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label55->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label55->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label55->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label56
            // 
            this->label56->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label56->Location = System::Drawing::Point(135, 434);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(55, 55);
            this->label56->TabIndex = 56;
            this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label56->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label56->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label56->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label57
            // 
            this->label57->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label57->Location = System::Drawing::Point(196, 434);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(55, 55);
            this->label57->TabIndex = 57;
            this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label57->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label57->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label57->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label58
            // 
            this->label58->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label58->Location = System::Drawing::Point(271, 434);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(55, 55);
            this->label58->TabIndex = 58;
            this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label58->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label58->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label58->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label59
            // 
            this->label59->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label59->Location = System::Drawing::Point(332, 434);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(55, 55);
            this->label59->TabIndex = 59;
            this->label59->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label59->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label59->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label59->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label60
            // 
            this->label60->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label60->Location = System::Drawing::Point(393, 434);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(55, 55);
            this->label60->TabIndex = 60;
            this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label60->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label60->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label60->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label61
            // 
            this->label61->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label61->Location = System::Drawing::Point(465, 434);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(55, 55);
            this->label61->TabIndex = 61;
            this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label61->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label61->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label61->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label62
            // 
            this->label62->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label62->Location = System::Drawing::Point(526, 434);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(55, 55);
            this->label62->TabIndex = 62;
            this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label62->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label62->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label62->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label63
            // 
            this->label63->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label63->Location = System::Drawing::Point(587, 434);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(55, 55);
            this->label63->TabIndex = 63;
            this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label63->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label63->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label63->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label64
            // 
            this->label64->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label64->Location = System::Drawing::Point(74, 494);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(55, 55);
            this->label64->TabIndex = 64;
            this->label64->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label64->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label64->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label64->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label65
            // 
            this->label65->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label65->Location = System::Drawing::Point(135, 494);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(55, 55);
            this->label65->TabIndex = 65;
            this->label65->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label65->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label65->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label65->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label66
            // 
            this->label66->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label66->Location = System::Drawing::Point(196, 494);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(55, 55);
            this->label66->TabIndex = 66;
            this->label66->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label66->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label66->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label66->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label67
            // 
            this->label67->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label67->Location = System::Drawing::Point(271, 494);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(55, 55);
            this->label67->TabIndex = 67;
            this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label67->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label67->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label67->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label68
            // 
            this->label68->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label68->Location = System::Drawing::Point(332, 494);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(55, 55);
            this->label68->TabIndex = 68;
            this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label68->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label68->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label68->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label69
            // 
            this->label69->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label69->Location = System::Drawing::Point(393, 494);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(55, 55);
            this->label69->TabIndex = 69;
            this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label69->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label69->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label69->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label70
            // 
            this->label70->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label70->Location = System::Drawing::Point(465, 494);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(55, 55);
            this->label70->TabIndex = 70;
            this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label70->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label70->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label70->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label71
            // 
            this->label71->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label71->Location = System::Drawing::Point(526, 494);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(55, 55);
            this->label71->TabIndex = 71;
            this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label71->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label71->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label71->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label72
            // 
            this->label72->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label72->Location = System::Drawing::Point(587, 494);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(55, 55);
            this->label72->TabIndex = 72;
            this->label72->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label72->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label72->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label72->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label73
            // 
            this->label73->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label73->Location = System::Drawing::Point(74, 555);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(55, 55);
            this->label73->TabIndex = 73;
            this->label73->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label73->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label73->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label73->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label74
            // 
            this->label74->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label74->Location = System::Drawing::Point(135, 555);
            this->label74->Name = L"label74";
            this->label74->Size = System::Drawing::Size(55, 55);
            this->label74->TabIndex = 74;
            this->label74->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label74->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label74->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label74->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label75
            // 
            this->label75->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label75->Location = System::Drawing::Point(196, 555);
            this->label75->Name = L"label75";
            this->label75->Size = System::Drawing::Size(55, 55);
            this->label75->TabIndex = 75;
            this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label75->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label75->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label75->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label76
            // 
            this->label76->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label76->Location = System::Drawing::Point(271, 555);
            this->label76->Name = L"label76";
            this->label76->Size = System::Drawing::Size(55, 55);
            this->label76->TabIndex = 76;
            this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label76->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label76->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label76->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label77
            // 
            this->label77->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label77->Location = System::Drawing::Point(332, 555);
            this->label77->Name = L"label77";
            this->label77->Size = System::Drawing::Size(55, 55);
            this->label77->TabIndex = 77;
            this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label77->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label77->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label77->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label78
            // 
            this->label78->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label78->Location = System::Drawing::Point(393, 555);
            this->label78->Name = L"label78";
            this->label78->Size = System::Drawing::Size(55, 55);
            this->label78->TabIndex = 78;
            this->label78->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label78->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label78->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label78->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label79
            // 
            this->label79->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label79->Location = System::Drawing::Point(465, 555);
            this->label79->Name = L"label79";
            this->label79->Size = System::Drawing::Size(55, 55);
            this->label79->TabIndex = 79;
            this->label79->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label79->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label79->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label79->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label80
            // 
            this->label80->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label80->Location = System::Drawing::Point(526, 555);
            this->label80->Name = L"label80";
            this->label80->Size = System::Drawing::Size(55, 55);
            this->label80->TabIndex = 80;
            this->label80->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label80->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label80->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label80->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // label81
            // 
            this->label81->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label81->Location = System::Drawing::Point(587, 555);
            this->label81->Name = L"label81";
            this->label81->Size = System::Drawing::Size(55, 55);
            this->label81->TabIndex = 81;
            this->label81->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label81->Click += gcnew System::EventHandler(this, &MyForm::Enter_number);
            this->label81->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mause_Down_effect);
            this->label81->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Mouse_Up_return);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(716, 622);
            this->Controls->Add(this->label81);
            this->Controls->Add(this->label80);
            this->Controls->Add(this->label79);
            this->Controls->Add(this->label78);
            this->Controls->Add(this->label77);
            this->Controls->Add(this->label76);
            this->Controls->Add(this->label75);
            this->Controls->Add(this->label74);
            this->Controls->Add(this->label73);
            this->Controls->Add(this->label72);
            this->Controls->Add(this->label71);
            this->Controls->Add(this->label70);
            this->Controls->Add(this->label69);
            this->Controls->Add(this->label68);
            this->Controls->Add(this->label67);
            this->Controls->Add(this->label66);
            this->Controls->Add(this->label65);
            this->Controls->Add(this->label64);
            this->Controls->Add(this->label63);
            this->Controls->Add(this->label62);
            this->Controls->Add(this->label61);
            this->Controls->Add(this->label60);
            this->Controls->Add(this->label59);
            this->Controls->Add(this->label58);
            this->Controls->Add(this->label57);
            this->Controls->Add(this->label56);
            this->Controls->Add(this->label55);
            this->Controls->Add(this->label54);
            this->Controls->Add(this->label53);
            this->Controls->Add(this->label52);
            this->Controls->Add(this->label51);
            this->Controls->Add(this->label50);
            this->Controls->Add(this->label49);
            this->Controls->Add(this->label48);
            this->Controls->Add(this->label47);
            this->Controls->Add(this->label46);
            this->Controls->Add(this->label45);
            this->Controls->Add(this->label44);
            this->Controls->Add(this->label43);
            this->Controls->Add(this->label42);
            this->Controls->Add(this->label41);
            this->Controls->Add(this->label40);
            this->Controls->Add(this->label39);
            this->Controls->Add(this->label38);
            this->Controls->Add(this->label37);
            this->Controls->Add(this->label36);
            this->Controls->Add(this->label35);
            this->Controls->Add(this->label34);
            this->Controls->Add(this->label33);
            this->Controls->Add(this->label32);
            this->Controls->Add(this->label31);
            this->Controls->Add(this->label30);
            this->Controls->Add(this->label29);
            this->Controls->Add(this->label28);
            this->Controls->Add(this->label27);
            this->Controls->Add(this->label26);
            this->Controls->Add(this->label25);
            this->Controls->Add(this->label24);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->MaximizeBox = false;
            this->Name = L"MyForm";
            this->Text = L"Sudocu";
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        Color color_fon1 = System::Drawing::SystemColors::Info, color_fon2 = System::Drawing::SystemColors::ButtonHighlight, color_font1 = Color::FromArgb(255, 128, 128), color_font2 = Color::FromArgb(255, 128, 0),color_effect= Color::FromArgb(255, 192, 110);
        bool ind1 = true, ind2 = true;
        //const int n = 3;
        int** sudocu = new  int* [9];
        void create_array()
        {
            for (int k = 0;k < 9;k++)
            {
                sudocu[k] = new int[9];
            }
            for (int k = 0;k < 9;k++)
            {
                for (int j = 0;j < 9;j++)
                {
                    sudocu[k][j] = (k * 3 + k / 3 + j) % 9 + 1;
                }
            }
        }
        void create_Sudocu(int complexcity,int n)
        {
            int a[9];
            for (int j = 0;j < 9;j++)
            {
                a[j] = 9;
            }
            while (complexcity)
            {
                int j = rand() % 9;
                if (a[j] > n)
                {
                    a[j]--;
                    complexcity--;
                }
            }
            int j1=0,j2=0, f = 0;
            while (true)
            {
                j2 = rand() % 9;
                if (sudocu[j1][j2])
                {
                    sudocu[j1][j2] = 0;
                    a[f]--;
                    if (a[f] == 0)
                    {
                        j1++;
                        f++;
                        if (f == 9)
                        {
                            break;
                        }
                    }
                }
            }
        }
        void transpare()
        {
            int temp;
            for (int k = 0;k < 9;k++)
            {
                for (int j = k + 1;j < 9;j++)
                {
                    temp = sudocu[j][k];
                    sudocu[j][k] = sudocu[k][j];
                    sudocu[k][j] = temp;
                }
            }
        }
        void swap_line()
        {
            // 0 1 2     3 4 5     6 7 8
            short r1 = rand() % 3; // 0 1 2
            short r2 = rand() % 3;
            int temp;
            if (r1 != r2)
            {
                short block = rand() % 3; // 0 1 2
                for (int j = 0;j < 9;j++)
                {
                    temp = sudocu[r1 + 3 * block][j];
                    sudocu[r1 + 3 * block][j] = sudocu[r2 + 3 * block][j];
                    sudocu[r2 + 3 * block][j] = temp;
                }
            }
            else swap_line();
        }
        void swap_colomn()
        {
            short r1 = rand() % 3;
            short r2 = rand() % 3;
            int temp;
            if (r1 != r2)
            {
                short block = rand() % 3;
                for (int j = 0;j < 9;j++)
                {
                    temp = sudocu[j][r1 + 3 * block];
                    sudocu[j][r1 + 3 * block] = sudocu[j][r2 + 3 * block];
                    sudocu[j][r2 + 3 * block] = temp;
                }
            }
            else swap_colomn();
        }
        void swap_line_block()
        {
            short block1 = rand() % 3;
            short block2 = rand() % 3;
            if (block1 != block2)
            {
                int temp;
                for (int j = 0;j < 3;j++)
                {
                    for (int k = 0;k < 9;k++)
                    {
                        temp = sudocu[block1*3][k];
                        sudocu[block1 * 3][k] = sudocu[block2 * 3][k];
                        sudocu[block2 * 3][k] = temp;

                        temp = sudocu[block1 * 3+1][k];
                        sudocu[block1 * 3+1][k] = sudocu[block2 * 3+1][k];
                        sudocu[block2 * 3+1][k] = temp;

                        temp = sudocu[block1 * 3+2][k];
                        sudocu[block1 * 3+2][k] = sudocu[block2 * 3+2][k];
                        sudocu[block2 * 3+2][k] = temp;
                    }
                }
            }
        }
        void swap_colomn_block()
        {
            short block1 = rand() % 3;
            short block2 = rand() % 3;
            if (block1 != block2)
            {
                int temp;
                for (int j = 0;j < 3;j++)
                {
                    for (int k = 0;k < 9;k++)
                    {
                        temp = sudocu[k][block1 * 3];
                        sudocu[k][block1 * 3] = sudocu[k][block2 * 3];
                        sudocu[k][block2 * 3] = temp;

                        temp = sudocu[k][block1 * 3+1];
                        sudocu[k][block1 * 3+1] = sudocu[k][block2 * 3+1];
                        sudocu[k][block2 * 3+1] = temp;

                        temp = sudocu[k][block1 * 3+2];
                        sudocu[k][block1 * 3+2] = sudocu[k][block2 * 3+2];
                        sudocu[k][block2 * 3+2] = temp;
                    }
                }
            }
        }
        void create(int complexcity, int n)
        {
            clear();
            create_array();
            for (int r = 0;r < rand() % 40 + 10; r++)
            {
                if (rand() % 2)
                {
                    swap_colomn();
                    swap_line();
                    swap_colomn_block();
                    swap_line_block();
                }
                else
                {
                    swap_line_block();
                    swap_colomn_block();
                    swap_line();
                    swap_colomn();
                }
                if (rand() % 2 == 0) { transpare(); }
            }
            print_key_file();
            create_Sudocu(complexcity, n);
            print();
            print_sudocu_file();
            for (int j = 0;j < 9;j++)
                delete[]sudocu[j];
        }
        void print_key_file()
        {
            String^ fileName = "C:\\Sudocu\\key_file.txt";
            StreamWriter^ sw = gcnew StreamWriter(fileName);
            for (int k = 0;k < 9;k++)
            {
                if (k % 3 == 0) { sw->Write("\n"); }
                for (int j = 0;j < 9;j++)
                {
                    if (j % 3 == 0) { sw->Write("  "); }
                    sw->Write(" ");
                    sw->Write(System::Convert::ToString(sudocu[k][j]));
                }
                sw->Write("\n");
            }
            sw->Close();
        }
        void print_sudocu_file()
        {
            String^ fileName = "C:\\Sudocu\\sudocu_file.txt";
            StreamWriter^ sw = gcnew StreamWriter(fileName);
            for (int k = 1;k < 82;k++)
            {
                Label^ p = (Label^)this->Controls["label" + k.ToString()];
                if (k % 9 == 0)
                {
                    sw->Write("\n");
                }
                    if (k % 3 == 0)
                    {
                        sw->Write("  ");
                    }
                    if (p->Text == L"")
                    {
                        sw->Write("  ");
                    }
                    else
                    {
                        sw->Write(p->Text);
                    }
                    
                
            }
            sw->Close();
        }
        void print()
        {
            int j1 = 0, j2 = 0;
            for (int k = 1;k < 82;k++)
            {
                Label^ p = (Label^)this->Controls["label" + k.ToString()];
                p->Text = L"";
                p->BackColor = color_fon2;
               // p->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
                if (j2 == 9)
                {
                    j2 = 0;
                    j1++;
                }
                if (sudocu[j1][j2])
                {
                    p->Text = System::Convert::ToString(sudocu[j1][j2]);
                    p->BackColor = color_fon1;
                    p->ForeColor = color_font2;
                }
                j2++;
            }

        }
        void clear()
        {
            for (int k=1;k < 82;k++)
            {
                Label^ p = (Label^)this->Controls["label" + k.ToString()];
                p->Text = L"";
                p->ForeColor= System::Drawing::SystemColors::ButtonHighlight;
                p->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            }
        }
        void check_str(Label^ NumbersOp)
        {
            short ik;
            ik = (NumbersOp->TabIndex-1) / 9;
            //MessageBox::Show(System::Convert::ToString(ik * 9));
            for (int k =1+ik * 9;k < 10 + ik * 9;k++)
            {
                Label^ p = (Label^)this->Controls["label" + k.ToString()];
                if (k == NumbersOp->TabIndex)
                {
                    continue;
                }
                if (p->Text == NumbersOp->Text)
                {
                    NumbersOp->ForeColor = Color::FromArgb(220, 0, 0);
                    break;
                }
            }
        }
        void check_colomn(Label^ NumbersOp)
        {
            short jk;
            jk = (NumbersOp->TabIndex-1) % 9;
           // MessageBox::Show(System::Convert::ToString(jk));
            for (int k = 1+jk;k < jk+72;k=k+9)
            {
                Label^ p = (Label^)this->Controls["label" + k.ToString()];
                if (k == NumbersOp->TabIndex)
                {
                    continue;
                }
                if (p->Text == NumbersOp->Text)
                {
                    NumbersOp->ForeColor = Color::FromArgb(220, 0, 0);
                    break;
                }
            }
        }
        void check_block(Label^ NumbersOp)
        {
            short ik = ((NumbersOp->TabIndex - 1) / 9) % 3;
            short jk = ((NumbersOp->TabIndex - 1) % 9) % 3;
            short loc = NumbersOp->TabIndex - 9 * ik - jk;
           // MessageBox::Show(System::Convert::ToString(loc));
            for (int k = loc;k < loc+3;k++)
            {      
                Label^ p1 = (Label^)this->Controls["label" + k.ToString()];
                Label^ p2 = (Label^)this->Controls["label" + (k+9).ToString()];
                Label^ p3 = (Label^)this->Controls["label" + (k + 18).ToString()];
                 if (p1->TabIndex == NumbersOp->TabIndex)
                 {
                     continue;
                 }
                 else if (p2->TabIndex == NumbersOp->TabIndex)
                 {
                     continue;
                 }
                 else if (p3->TabIndex == NumbersOp->TabIndex)
                 {
                     continue;
                 }
                 else{}
                 if (p1->Text == NumbersOp->Text)
                 {
                     NumbersOp->ForeColor = Color::FromArgb(220, 0, 0);
                     break;
                 }
                 else if (p2->Text == NumbersOp->Text)
                 {
                     NumbersOp->ForeColor = Color::FromArgb(220, 0, 0);
                     break;
                 }
                 else if (p3->Text == NumbersOp->Text)
                 {
                     NumbersOp->ForeColor = Color::FromArgb(220, 0, 0);
                     break;
                 }
                 else {}
            }
        }
        void end_game()
        {
            for (int k = 1;k < 28;k++)
            {
                Label^ p = (Label^)this->Controls["label" + k.ToString()];
                if (p->Text == L"") { break; }
                if (p->ForeColor == Color::FromArgb(220, 0, 0)) { break; }
                if (k == 81) { MessageBox::Show("Судоку разгадано"); }
            }
        }
        void click(Label^ NumbersOp,String^ num)
        {
            for (int k = 1;k < 82;k++)
            {
                Label^ p = (Label^)this->Controls["label" + k.ToString()];
                if (NumbersOp->BackColor == color_fon1)
                {
                    if (p->ForeColor == Color::ForestGreen)
                    {
                        if (p->BackColor == color_fon2) { p->ForeColor = color_font1; }
                        else p->ForeColor = color_font2;
                    }
                }
                if (p->Text==num && p->ForeColor != Color::FromArgb(220, 0, 0))
                {
                  p->ForeColor = Color::ForestGreen;
                }
                
            }
        }
    private: System::Void Enter_number(System::Object^ sender, System::EventArgs^ e) 
    {
        int i = 0;
        Label^ NumbersOp = safe_cast<Label^>(sender);
        //MessageBox::Show(System::Convert::ToString(NumbersOp->BackColor));
        if (NumbersOp->BackColor == color_effect)
        {
            if (NumbersOp->Text == L"" && ind1) { i = 0; }
            else if (NumbersOp->Text == L"" && !ind1) { i = 10; }
            else { i = System::Convert::ToInt32(NumbersOp->Text); }
            if (ind1)
            {
                if (++i == 10)
                {
                    i = 1;
                    NumbersOp->Text = L"";
                }
                else NumbersOp->Text = System::Convert::ToString(i);
            }
            else
            {
                if (--i == 0)
                {
                    i = 9;
                    NumbersOp->Text = L"";
                }
                else NumbersOp->Text = System::Convert::ToString(i);
            }
            NumbersOp->ForeColor = color_font1;
            check_block(NumbersOp);
            check_str(NumbersOp);
            check_colomn(NumbersOp);
            click(NumbersOp, "0");
        }
        else click(NumbersOp, NumbersOp->Text);
        end_game();
    }
private: System::Void Mause_Down_effect(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
    if (e->Button == System::Windows::Forms::MouseButtons::Right)
    {
        ind1 = false;
    }
    else ind1 = true;
    Label^ NumbersOp = safe_cast<Label^>(sender);
   // MessageBox::Show(System::Convert::ToString(NumbersOp->ForeColor));
    //MessageBox::Show(System::Convert::ToString(color_font2));
    if (NumbersOp->BackColor != color_fon1)
        NumbersOp->BackColor = color_effect;
}
private: System::Void Mouse_Up_return(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
    Label^ NumbersOp = safe_cast<Label^>(sender);
    if (NumbersOp->BackColor != color_fon1)
    {
        NumbersOp->BackColor = color_fon2;
    }
    //else NumbersOp->BackColor = color_fon1;
}
private: System::Void createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void textToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    FontDialog^ f2 = gcnew FontDialog();
    f2->ShowColor = true;
   // f2->Font = label1->Font;
   // f2->Color = label1->ForeColor;
    if (f2->ShowDialog() != DialogResult)
    {
        for (int k = 1;k < 82;k++)
        {
            Label^ p = (Label^)this->Controls["label" + k.ToString()];
            p->Font = f2->Font;
            p->ForeColor != f2->Color;
            //p->ForeColor = f2->Color;
        }
    }
}
private: System::Void saveGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    // FILE* fout;
    //fout =fopen("D:\\game_sudocu.txt","w");
    String^ fileName = "C:\\Sudocu\\game_sudocu.txt";
    StreamWriter^ sw = gcnew StreamWriter(fileName);
    /*sw->WriteLine("A text file is born!");
    sw->WriteLine("...or just Write");
    sw->WriteLine("and do {0} output too.", "formatted");
    sw->WriteLine("You can also send non-text objects:");
    sw->WriteLine(DateTime::Now);*/
    for (int k = 1;k < 82;k++)
    {
        Label^ p = (Label^)this->Controls["label" + k.ToString()];
        if (p->ForeColor == color_font2)
        {
            sw->Write(p->Text);
        }
        else if (p->Text == L"") { sw->Write("0"); }
        else sw->Write("&" + p->Text);
    }
    sw->Close();
}
private: System::Void openGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    clear();
   /*String^fileContent;
   String^filePath;
    OpenFileDialog^openFileDialog = gcnew OpenFileDialog();
    openFileDialog->InitialDirectory = "c:\\";
    openFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
    openFileDialog->FilterIndex = 2;
    openFileDialog->RestoreDirectory = true;

    if (openFileDialog->ShowDialog() == DialogResult)
    {
        //Get the path of specified file
        filePath = openFileDialog->FileName;

        //Read the contents of the file into a stream
        auto fileStream = openFileDialog->OpenFile();

        StreamReader^reader = gcnew StreamReader(fileStream);
        {
            fileContent = reader->ReadToEnd();
        }
    }*/
    
   /* FileDialog^ openDlg = gcnew FileDialog();
    openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF|All files (*.*)|*.*";
    if (openDlg->ShowDialog()!=DialogResult)
    {
        String^ fileName = openDlg->FileName;
        // ...
    }*/
    int x = 0;
    String^ fileName = "C:\\Sudocu\\game_sudocu.txt";
    StreamReader^ sw = File::OpenText(fileName);
    String^ s = sw->ReadLine();
    for (int k = 1;k < 82;k++)
    {
        Label^ p = (Label^)this->Controls["label" + k.ToString()];
        p->Text = L"";
        p->BackColor = color_fon2;
        p->ForeColor = System::Drawing::SystemColors::ControlText;
        if (System::Convert::ToString(s[x]) == "0")
        {
            p->Text = "";
        }
        else if (System::Convert::ToString(s[x]) == "&")
        {
            x++;
            p->ForeColor = color_font1;
            p->Text = System::Convert::ToString(s[x]);

        }
        else
        {
            p->Text = System::Convert::ToString(s[x]);
            p->ForeColor = color_font2;
            p->BackColor = color_fon1;
        }
        x++;
    }
    sw->Close();
}
private: System::Void languageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void rURussijnToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    MyForm::Text = "Судоку";
    rURussijnToolStripMenuItem->Text = "RU Русский";
    eNEnglishToolStripMenuItem->Text = "EN Английский";
    europeToolStripMenuItem->Text = "Европа";
    ottomansToolStripMenuItem->Text = "Османы";
    grayToolStripMenuItem->Text = "Серый";
    blackToolStripMenuItem->Text = "Темный";
    russianToolStripMenuItem->Text = "Русь";
    chinaToolStripMenuItem->Text = "Китай";
    textToolStripMenuItem->Text = "Тескт";
    createToolStripMenuItem->Text = "Создать";
    saveGameToolStripMenuItem->Text = "Сохранить игру";
    openGameToolStripMenuItem->Text = "Открыть игру";
    menuToolStripMenuItem->Text = "Mеню";
    optionsToolStripMenuItem->Text = "Настройки";
    languageToolStripMenuItem->Text = "Язык";
    stilesToolStripMenuItem->Text = "Стили";
    aboutProgramToolStripMenuItem->Text = "о программе";
    nowPictureToolStripMenuItem->Text = "Без картинки";
    lightToolStripMenuItem->Text = "Легкий";
    midleToolStripMenuItem->Text = "Средний";
    hardToolStripMenuItem->Text = "Сложный";
    expertToolStripMenuItem->Text = "Мастер";
    newbieToolStripMenuItem->Text = "Новичек";
}
private: System::Void eNEnglishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm::Text = "Sudocu";
    rURussijnToolStripMenuItem->Text = "RU Russian";
    eNEnglishToolStripMenuItem->Text = "EN English";
    europeToolStripMenuItem->Text = "Europe";
    ottomansToolStripMenuItem->Text = "Ottomans";
    grayToolStripMenuItem->Text = "Gray";
    blackToolStripMenuItem->Text = "Dark";
    russianToolStripMenuItem->Text = "Russian";
    chinaToolStripMenuItem->Text = "China";
    textToolStripMenuItem->Text = "Text";
    createToolStripMenuItem->Text = "Create";
    saveGameToolStripMenuItem->Text = "Save game";
    openGameToolStripMenuItem->Text = " Open game";
    menuToolStripMenuItem->Text = "Menu";
    optionsToolStripMenuItem->Text = "Options";
    languageToolStripMenuItem->Text = "Language";
    stilesToolStripMenuItem->Text = "Stiles";
    aboutProgramToolStripMenuItem->Text = "abaut program";
    nowPictureToolStripMenuItem->Text = "Now picture";
    lightToolStripMenuItem->Text = "Light";
    midleToolStripMenuItem->Text = "Midle";
    hardToolStripMenuItem->Text = "Hard";
    expertToolStripMenuItem->Text = "Expert";
    newbieToolStripMenuItem->Text = "Newbie";
}
private: System::Void chinaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    this->BackgroundImage = Image::FromFile("C:\\Sudocu\\Fon1.jpg");
    color_font1 = Color::FromArgb(255, 128, 128);
    color_font2 = Color::FromArgb(255, 128, 0);
    color_fon1 = System::Drawing::SystemColors::Info;
    color_fon2 = System::Drawing::SystemColors::ButtonHighlight;
    color_effect= Color::FromArgb(255, 192, 110);
}
private: System::Void russianToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    this->BackgroundImage = Image::FromFile("C:\\Sudocu\\Fon2.jpg");
    //fore 0; 192; 192  back 192; 255; 192
    color_font1 = Color::FromArgb(0, 92, 92);
    color_font2 = Color::FromArgb(0, 62, 62);
    color_fon1 = Color::FromArgb(214, 214, 214);
    color_fon2 = Color::FromArgb(234, 234, 234);
    color_effect = Color::SpringGreen;
    /*for (int k = 1;k < 82;k++)
    {
        Label^ p = (Label^)this->Controls["label" + k.ToString()];
    }*/
}
private: System::Void ottomansToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    this->BackgroundImage = Image::FromFile("C:\\Sudocu\\Fon4.jpg");
    color_font1 = Color::FromArgb(130, 90, 90);
    color_font2 = Color::FromArgb(100, 90, 98);
    color_fon1 = Color::FromArgb(214, 214, 214);
    color_fon2 = Color::FromArgb(234, 224, 234);
    color_effect = Color::FromArgb(255, 192, 110);
}
private: System::Void europeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    this->BackgroundImage = Image::FromFile("C:\\Sudocu\\Fon3.jpg");
    color_font1 = Color::FromArgb(200, 100, 130);
    color_font2 = Color::FromArgb(200, 130, 198);
    color_fon1 = Color::FromArgb(235, 235, 238);
    color_fon2 = Color::FromArgb(205, 205, 198);
    color_effect = Color::FromArgb(255, 192, 110);
}
private: System::Void blackToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->BackgroundImage = nullptr;
    MyForm::BackColor = System::Drawing::SystemColors::ControlDarkDark;
    color_font1 = System::Drawing::SystemColors::WindowFrame;
    color_font2 = System::Drawing::SystemColors::ActiveCaptionText;
    color_fon1 = System::Drawing::SystemColors::ScrollBar;
    color_fon2 = System::Drawing::SystemColors::ControlLight;
    color_effect = Color::SkyBlue;
}
private: System::Void grayToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    this->BackgroundImage = nullptr;
    MyForm::BackColor = System::Drawing::SystemColors::AppWorkspace;
    color_font1 = System::Drawing::SystemColors::WindowFrame;
    color_font2 = System::Drawing::SystemColors::ActiveCaptionText;
    color_fon1 = System::Drawing::SystemColors::ControlLight;
    color_fon2 = System::Drawing::SystemColors::ButtonHighlight;
    color_effect = Color::SkyBlue;
}
private: System::Void nowPictureToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void aboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    MessageBox::Show("Sudocu\n Version 4.0 exp.\n© Arseniy Ilyich Fomin, 2021.\nAccess for beta testers.\nContact the developer: arseniyif@gmail.com", "About program");
}
private: System::Void lightToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    create(rand() % 6 + 30,3);
}
private: System::Void midleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    create(rand() % 6 + 25,4);
}
private: System::Void hardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    create(rand()%5+20,6);
}
private: System::Void newbieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    create(rand() % 5 + 36, 2);
}
private: System::Void expertToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    create(rand() % 4 + 17, 6);
}

};
}
