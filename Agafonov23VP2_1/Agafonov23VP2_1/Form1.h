#pragma once
#include <cmath>
#include "Figure.h"
#include "List.h"
#include <string>
#using <system.drawing.dll>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		FStack stack;
		int xc = 0;
		int yc = 0;
		int radc = 0;
		int exradc = 0;

		Form1(void)
		{
			InitializeComponent();
		}
	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::ComboBox^ comboBoxFigure;

		System::Windows::Forms::Label^ labelFigure;
		System::Windows::Forms::Label^ labelRadius;
		System::Windows::Forms::Label^ labelExRadius;
		System::Windows::Forms::Label^ labelX;
		System::Windows::Forms::Label^ labelY;
		System::Windows::Forms::Label^ labelCreate;

		System::Windows::Forms::TextBox^ textBoxRadius;
		System::Windows::Forms::TextBox^ textBoxExRadius;
		System::Windows::Forms::TextBox^ textBoxX;
		System::Windows::Forms::TextBox^ textBoxY;

		System::Windows::Forms::Panel^ panelCreate;

		System::Windows::Forms::Button^ buttonCreate;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelStack;
	private: System::Windows::Forms::Button^ buttonDeleteStack;

	private: System::Windows::Forms::Button^ buttonShowStack;

	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Label^ labelError;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonHide;
	private: System::Windows::Forms::Button^ buttonMove;



		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->comboBoxFigure = (gcnew System::Windows::Forms::ComboBox());
			   this->labelFigure = (gcnew System::Windows::Forms::Label());
			   this->labelRadius = (gcnew System::Windows::Forms::Label());
			   this->labelExRadius = (gcnew System::Windows::Forms::Label());
			   this->textBoxRadius = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxExRadius = (gcnew System::Windows::Forms::TextBox());
			   this->labelX = (gcnew System::Windows::Forms::Label());
			   this->labelY = (gcnew System::Windows::Forms::Label());
			   this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			   this->panelCreate = (gcnew System::Windows::Forms::Panel());
			   this->buttonMove = (gcnew System::Windows::Forms::Button());
			   this->buttonHide = (gcnew System::Windows::Forms::Button());
			   this->buttonCreate = (gcnew System::Windows::Forms::Button());
			   this->labelCreate = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->buttonDeleteStack = (gcnew System::Windows::Forms::Button());
			   this->buttonShowStack = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->labelStack = (gcnew System::Windows::Forms::Label());
			   this->buttonClear = (gcnew System::Windows::Forms::Button());
			   this->labelError = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->panelCreate->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // comboBoxFigure
			   // 
			   this->comboBoxFigure->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->comboBoxFigure->FormattingEnabled = true;
			   this->comboBoxFigure->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Круг", L"Звезда", L"Сложная фигура" });
			   this->comboBoxFigure->Location = System::Drawing::Point(236, 23);
			   this->comboBoxFigure->Name = L"comboBoxFigure";
			   this->comboBoxFigure->Size = System::Drawing::Size(210, 33);
			   this->comboBoxFigure->TabIndex = 0;
			   this->comboBoxFigure->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged_1);
			   // 
			   // labelFigure
			   // 
			   this->labelFigure->AutoSize = true;
			   this->labelFigure->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->labelFigure->Location = System::Drawing::Point(3, 26);
			   this->labelFigure->Name = L"labelFigure";
			   this->labelFigure->Size = System::Drawing::Size(190, 27);
			   this->labelFigure->TabIndex = 1;
			   this->labelFigure->Text = L"Выберите фигуру: ";
			   // 
			   // labelRadius
			   // 
			   this->labelRadius->AutoSize = true;
			   this->labelRadius->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->labelRadius->Location = System::Drawing::Point(3, 194);
			   this->labelRadius->Name = L"labelRadius";
			   this->labelRadius->Size = System::Drawing::Size(90, 27);
			   this->labelRadius->TabIndex = 2;
			   this->labelRadius->Text = L"Радиус :";
			   this->labelRadius->Visible = false;
			   // 
			   // labelExRadius
			   // 
			   this->labelExRadius->AutoSize = true;
			   this->labelExRadius->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->labelExRadius->Location = System::Drawing::Point(3, 251);
			   this->labelExRadius->Name = L"labelExRadius";
			   this->labelExRadius->Size = System::Drawing::Size(204, 27);
			   this->labelExRadius->TabIndex = 3;
			   this->labelExRadius->Text = L"Внутренний радиус:";
			   this->labelExRadius->Visible = false;
			   // 
			   // textBoxRadius
			   // 
			   this->textBoxRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->textBoxRadius->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->textBoxRadius->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBoxRadius->Location = System::Drawing::Point(236, 182);
			   this->textBoxRadius->Name = L"textBoxRadius";
			   this->textBoxRadius->Size = System::Drawing::Size(90, 44);
			   this->textBoxRadius->TabIndex = 5;
			   this->textBoxRadius->Visible = false;
			   this->textBoxRadius->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxRadius_TextChanged);
			   // 
			   // textBoxExRadius
			   // 
			   this->textBoxExRadius->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->textBoxExRadius->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->textBoxExRadius->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBoxExRadius->Location = System::Drawing::Point(236, 238);
			   this->textBoxExRadius->Name = L"textBoxExRadius";
			   this->textBoxExRadius->Size = System::Drawing::Size(90, 44);
			   this->textBoxExRadius->TabIndex = 6;
			   this->textBoxExRadius->Visible = false;
			   this->textBoxExRadius->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxExRadius_TextChanged);
			   // 
			   // labelX
			   // 
			   this->labelX->AutoSize = true;
			   this->labelX->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->labelX->Location = System::Drawing::Point(3, 83);
			   this->labelX->Name = L"labelX";
			   this->labelX->Size = System::Drawing::Size(35, 27);
			   this->labelX->TabIndex = 2;
			   this->labelX->Text = L"X :";
			   this->labelX->Visible = false;
			   this->labelX->Click += gcnew System::EventHandler(this, &Form1::labelX_Click);
			   // 
			   // labelY
			   // 
			   this->labelY->AutoSize = true;
			   this->labelY->Font = (gcnew System::Drawing::Font(L"Calibri", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->labelY->Location = System::Drawing::Point(3, 138);
			   this->labelY->Name = L"labelY";
			   this->labelY->Size = System::Drawing::Size(27, 27);
			   this->labelY->TabIndex = 3;
			   this->labelY->Text = L"Y:";
			   this->labelY->Visible = false;
			   // 
			   // textBoxX
			   // 
			   this->textBoxX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->textBoxX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->textBoxX->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBoxX->Location = System::Drawing::Point(236, 71);
			   this->textBoxX->Name = L"textBoxX";
			   this->textBoxX->Size = System::Drawing::Size(90, 44);
			   this->textBoxX->TabIndex = 5;
			   this->textBoxX->Visible = false;
			   this->textBoxX->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxX_TextChanged);
			   // 
			   // textBoxY
			   // 
			   this->textBoxY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->textBoxY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->textBoxY->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBoxY->Location = System::Drawing::Point(236, 126);
			   this->textBoxY->Name = L"textBoxY";
			   this->textBoxY->Size = System::Drawing::Size(90, 44);
			   this->textBoxY->TabIndex = 6;
			   this->textBoxY->Visible = false;
			   this->textBoxY->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxY_TextChanged);
			   // 
			   // panelCreate
			   // 
			   this->panelCreate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->panelCreate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panelCreate->Controls->Add(this->buttonMove);
			   this->panelCreate->Controls->Add(this->buttonHide);
			   this->panelCreate->Controls->Add(this->buttonCreate);
			   this->panelCreate->Controls->Add(this->comboBoxFigure);
			   this->panelCreate->Controls->Add(this->textBoxExRadius);
			   this->panelCreate->Controls->Add(this->labelFigure);
			   this->panelCreate->Controls->Add(this->textBoxRadius);
			   this->panelCreate->Controls->Add(this->labelX);
			   this->panelCreate->Controls->Add(this->labelExRadius);
			   this->panelCreate->Controls->Add(this->labelY);
			   this->panelCreate->Controls->Add(this->labelRadius);
			   this->panelCreate->Controls->Add(this->textBoxX);
			   this->panelCreate->Controls->Add(this->textBoxY);
			   this->panelCreate->Location = System::Drawing::Point(39, 566);
			   this->panelCreate->Name = L"panelCreate";
			   this->panelCreate->Size = System::Drawing::Size(460, 76);
			   this->panelCreate->TabIndex = 7;
			   this->panelCreate->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panelCreate_Paint);
			   // 
			   // buttonMove
			   // 
			   this->buttonMove->BackColor = System::Drawing::Color::MintCream;
			   this->buttonMove->Location = System::Drawing::Point(236, 349);
			   this->buttonMove->Name = L"buttonMove";
			   this->buttonMove->Size = System::Drawing::Size(206, 43);
			   this->buttonMove->TabIndex = 8;
			   this->buttonMove->Text = L"Переместить";
			   this->buttonMove->UseVisualStyleBackColor = false;
			   this->buttonMove->Visible = false;
			   this->buttonMove->Click += gcnew System::EventHandler(this, &Form1::buttonMove_Click);
			   // 
			   // buttonHide
			   // 
			   this->buttonHide->BackColor = System::Drawing::Color::MintCream;
			   this->buttonHide->Location = System::Drawing::Point(15, 349);
			   this->buttonHide->Name = L"buttonHide";
			   this->buttonHide->Size = System::Drawing::Size(206, 43);
			   this->buttonHide->TabIndex = 7;
			   this->buttonHide->Text = L"Скрыть";
			   this->buttonHide->UseVisualStyleBackColor = false;
			   this->buttonHide->Visible = false;
			   this->buttonHide->Click += gcnew System::EventHandler(this, &Form1::buttonHide_Click);
			   // 
			   // buttonCreate
			   // 
			   this->buttonCreate->BackColor = System::Drawing::Color::MintCream;
			   this->buttonCreate->Location = System::Drawing::Point(15, 298);
			   this->buttonCreate->Name = L"buttonCreate";
			   this->buttonCreate->Size = System::Drawing::Size(206, 43);
			   this->buttonCreate->TabIndex = 0;
			   this->buttonCreate->Text = L"Создать фигуру";
			   this->buttonCreate->UseVisualStyleBackColor = false;
			   this->buttonCreate->Visible = false;
			   this->buttonCreate->Click += gcnew System::EventHandler(this, &Form1::buttonCreate_Click);
			   // 
			   // labelCreate
			   // 
			   this->labelCreate->AutoSize = true;
			   this->labelCreate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->labelCreate->Location = System::Drawing::Point(44, 551);
			   this->labelCreate->MinimumSize = System::Drawing::Size(130, 22);
			   this->labelCreate->Name = L"labelCreate";
			   this->labelCreate->Size = System::Drawing::Size(133, 22);
			   this->labelCreate->TabIndex = 8;
			   this->labelCreate->Text = L"Создать фигуру";
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel1->Controls->Add(this->buttonDeleteStack);
			   this->panel1->Controls->Add(this->buttonShowStack);
			   this->panel1->Controls->Add(this->label3);
			   this->panel1->Location = System::Drawing::Point(523, 566);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(443, 245);
			   this->panel1->TabIndex = 9;
			   // 
			   // buttonDeleteStack
			   // 
			   this->buttonDeleteStack->BackColor = System::Drawing::Color::MintCream;
			   this->buttonDeleteStack->Location = System::Drawing::Point(130, 172);
			   this->buttonDeleteStack->Name = L"buttonDeleteStack";
			   this->buttonDeleteStack->Size = System::Drawing::Size(156, 58);
			   this->buttonDeleteStack->TabIndex = 4;
			   this->buttonDeleteStack->Text = L"Очистить список";
			   this->buttonDeleteStack->UseVisualStyleBackColor = false;
			   this->buttonDeleteStack->Click += gcnew System::EventHandler(this, &Form1::buttonDeleteStack_Click);
			   // 
			   // buttonShowStack
			   // 
			   this->buttonShowStack->BackColor = System::Drawing::Color::MintCream;
			   this->buttonShowStack->Location = System::Drawing::Point(102, 108);
			   this->buttonShowStack->Name = L"buttonShowStack";
			   this->buttonShowStack->Size = System::Drawing::Size(214, 58);
			   this->buttonShowStack->TabIndex = 3;
			   this->buttonShowStack->Text = L"Показать фигуры списка";
			   this->buttonShowStack->UseVisualStyleBackColor = false;
			   this->buttonShowStack->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			   this->label3->Location = System::Drawing::Point(24, 23);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(365, 48);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"При создании фигуры, \r\nона автоматичеки добавляется в список";
			   this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			   // 
			   // labelStack
			   // 
			   this->labelStack->AutoSize = true;
			   this->labelStack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->labelStack->Location = System::Drawing::Point(535, 551);
			   this->labelStack->MinimumSize = System::Drawing::Size(102, 22);
			   this->labelStack->Name = L"labelStack";
			   this->labelStack->Size = System::Drawing::Size(118, 22);
			   this->labelStack->TabIndex = 10;
			   this->labelStack->Text = L" Список фигур";
			   // 
			   // buttonClear
			   // 
			   this->buttonClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->buttonClear->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold));
			   this->buttonClear->ForeColor = System::Drawing::Color::Indigo;
			   this->buttonClear->Location = System::Drawing::Point(1159, 566);
			   this->buttonClear->Name = L"buttonClear";
			   this->buttonClear->Size = System::Drawing::Size(180, 111);
			   this->buttonClear->TabIndex = 11;
			   this->buttonClear->Text = L"ОЧИСТИТЬ  ПОЛЕ";
			   this->buttonClear->UseVisualStyleBackColor = false;
			   this->buttonClear->Click += gcnew System::EventHandler(this, &Form1::buttonClear_Click);
			   // 
			   // labelError
			   // 
			   this->labelError->AutoSize = true;
			   this->labelError->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				   static_cast<System::Int32>(static_cast<System::Byte>(250)));
			   this->labelError->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->labelError->ForeColor = System::Drawing::Color::Indigo;
			   this->labelError->Location = System::Drawing::Point(532, 818);
			   this->labelError->Name = L"labelError";
			   this->labelError->Size = System::Drawing::Size(430, 40);
			   this->labelError->TabIndex = 12;
			   this->labelError->Text = L"Введите числовые значения !";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				   static_cast<System::Int32>(static_cast<System::Byte>(252)));
			   this->pictureBox1->Location = System::Drawing::Point(39, 29);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(1400, 500);
			   this->pictureBox1->TabIndex = 13;
			   this->pictureBox1->TabStop = false;
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			   this->ClientSize = System::Drawing::Size(1494, 948);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->labelError);
			   this->Controls->Add(this->buttonClear);
			   this->Controls->Add(this->labelStack);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->labelCreate);
			   this->Controls->Add(this->panelCreate);
			   this->MinimumSize = System::Drawing::Size(130, 56);
			   this->Name = L"Form1";
			   this->Text = L"Agafonov23VP2_1";
			   this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			   this->panelCreate->ResumeLayout(false);
			   this->panelCreate->PerformLayout();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
		this->buttonHide->Visible = false;
		this->buttonMove->Visible = false;
		if (comboBoxFigure->SelectedIndex == 0) {
			textBoxX->Visible = true;
			textBoxY->Visible = true;
			labelX->Visible = true;
			labelY->Visible = true;
			textBoxRadius->Visible = true;
			labelRadius->Visible = true;
			panelCreate->Size = System::Drawing::Size(310, 210);
			buttonCreate->Location = System::Drawing::Point(118, 165);

			textBoxExRadius->Visible = false;
			labelExRadius->Visible = false;
			if ((textBoxX->Text == "") || (textBoxY->Text == "") || (textBoxRadius->Text == "")) { buttonCreate->Visible = false; }
			else { buttonCreate->Visible = true; }

		}
		else if (comboBoxFigure->SelectedIndex == 1 || comboBoxFigure->SelectedIndex == 2) {

			textBoxX->Visible = true;
			textBoxY->Visible = true;
			labelX->Visible = true;
			labelY->Visible = true;
			textBoxRadius->Visible = true;
			textBoxExRadius->Visible = true;
			labelRadius->Visible = true;
			labelExRadius->Visible = true;
			panelCreate->Size = System::Drawing::Size(310, 241);
			buttonCreate->Location = System::Drawing::Point(118, 195);
			if (textBoxExRadius->Text == "") {
				buttonCreate->Visible = false;
			}
		}
	}
	private: System::Void textBoxX_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((textBoxX->Text != "") && (textBoxY->Text != "") && (textBoxRadius->Text != "")) {
			if (comboBoxFigure->SelectedIndex == 0) {

				buttonCreate->Visible = true;
			}
			else if (comboBoxFigure->SelectedIndex == 1 || comboBoxFigure->SelectedIndex == 2) {
				if (textBoxExRadius->Text != "") {

					buttonCreate->Visible = true;
				}
				else {
					buttonCreate->Visible = false;
				}
			}
		}
		else {
			buttonCreate->Visible = false;
		}
	}
	private: System::Void textBoxY_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((textBoxX->Text != "") && (textBoxY->Text != "") && (textBoxRadius->Text != "")) {
			if (comboBoxFigure->SelectedIndex == 0) {
				buttonCreate->Location = System::Drawing::Point(118, 165);
				buttonCreate->Visible = true;
			}
			else if (comboBoxFigure->SelectedIndex == 1 || comboBoxFigure->SelectedIndex == 2) {
				if (textBoxExRadius->Text != "") {
					buttonCreate->Location = System::Drawing::Point(118, 195);
					buttonCreate->Visible = true;
				}
				else {
					buttonCreate->Visible = false;
				}
			}
		}
		else {
			buttonCreate->Visible = false;
		}
	}
	private: System::Void textBoxRadius_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->buttonHide->Visible = false;
		this->buttonMove->Visible = false;
		if ((textBoxX->Text != "") && (textBoxY->Text != "") && (textBoxRadius->Text != "")) {
			if (comboBoxFigure->SelectedIndex == 0) {
				buttonCreate->Location = System::Drawing::Point(118, 165);
				buttonCreate->Visible = true;
			}
			else if (comboBoxFigure->SelectedIndex == 1 || comboBoxFigure->SelectedIndex == 2) {
				if (textBoxExRadius->Text != "") {
					buttonCreate->Location = System::Drawing::Point(118, 195);
					buttonCreate->Visible = true;
				}
				else {
					buttonCreate->Visible = false;
				}
			}
		}
		else {
			buttonCreate->Visible = false;
		}
	}
	private: System::Void textBoxExRadius_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->buttonHide->Visible = false;
		this->buttonMove->Visible = false;
		if ((textBoxX->Text != "") && (textBoxY->Text != "") && (textBoxRadius->Text != "")) {
			if (comboBoxFigure->SelectedIndex == 1 || comboBoxFigure->SelectedIndex == 2) {
				if (textBoxExRadius->Text != "") {
					buttonCreate->Location = System::Drawing::Point(118, 195);
					buttonCreate->Visible = true;
				}
				else {
					buttonCreate->Visible = false;
				}
			}
		}
		else {
			buttonCreate->Visible = false;
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = pictureBox1->CreateGraphics();
		stack.show(g);
	}

	private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			int x = System::Convert::ToInt32(textBoxX->Text);
			int y = System::Convert::ToInt32(textBoxY->Text);
			int radius = System::Convert::ToInt32(textBoxRadius->Text);
			xc = x;
			yc = y;
			radc = radius;
			this->labelError->Visible = false;

			Graphics^ g = pictureBox1->CreateGraphics();

			if (comboBoxFigure->SelectedIndex == 0) {
				panelCreate->Size = System::Drawing::Size(310, 240);
				this->buttonHide->Location = System::Drawing::Point(10, 200);
				this->buttonMove->Location = System::Drawing::Point(150, 200);
				this->buttonHide->Visible = true;
				this->buttonMove->Visible = true;
				MyCircle^ circle = gcnew MyCircle(x, y, radius);
				circle->draw(g);
				stack.push(circle);

			}
			else {
				panelCreate->Size = System::Drawing::Size(310, 270);
				this->buttonHide->Location = System::Drawing::Point(10, 230);
				this->buttonMove->Location = System::Drawing::Point(150, 230);
				this->buttonHide->Visible = true;
				this->buttonMove->Visible = true;

				int Exradius = System::Convert::ToInt32(textBoxExRadius->Text);
				exradc = Exradius;

				if (comboBoxFigure->SelectedIndex == 1) {
					MyStar^ star = gcnew MyStar(x, y, radius, Exradius);
					star->draw(g);
					stack.push(star);

				}
				if (comboBoxFigure->SelectedIndex == 2) {
					Complex^ fig = gcnew Complex(x, y, radius, Exradius);
					fig->draw(g);
					stack.push(fig);
				}
			}
		}
		catch (const Figure::BorderException^ ex) {
			this->labelError->Text = "Выход за границы окна!";
			labelError->Visible = true;
		}
		catch (const Figure::NegNumber^ ex) {
			this->labelError->Text = "Нулевые или отрицательные значения параметров!";
			labelError->Visible = true;
		}
		catch (const MyStar::IncorrectRadius^ ex) {
			labelError->Text = "Внутренний радиус больше внешнего!";
			labelError->Visible = true;
		}
		catch (...) {
			labelError->Visible = false;
		}
	}
	private: System::Void buttonHide_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = pictureBox1->CreateGraphics();

		int x = System::Convert::ToInt32(textBoxX->Text);
		int y = System::Convert::ToInt32(textBoxY->Text);
		int radius = System::Convert::ToInt32(textBoxRadius->Text);

		if (comboBoxFigure->SelectedIndex == 0) {

			MyCircle circle(x, y, radius);
			circle.hide(g);
		}
		else {
			int Exradius = System::Convert::ToInt32(textBoxExRadius->Text);
			if (comboBoxFigure->SelectedIndex == 1) {
				MyStar star(x, y, radius, Exradius);
				star.hide(g);
			}
			if (comboBoxFigure->SelectedIndex == 2) {
				Complex fig(x, y, radius, Exradius);
				fig.hide(g);
			}
		}
	}
	private: System::Void buttonMove_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			Graphics^ g = pictureBox1->CreateGraphics();

			int x = System::Convert::ToInt32(textBoxX->Text);
			int y = System::Convert::ToInt32(textBoxY->Text);

			if (comboBoxFigure->SelectedIndex == 0) {
				MyCircle circle(xc, yc, radc);
				circle.move(x, y, g);

			}
			if (comboBoxFigure->SelectedIndex == 1) {
				MyStar star(xc, yc, radc, exradc);
				star.move(x, y, g);
			}
			if (comboBoxFigure->SelectedIndex == 2) {
				Complex fig(xc, yc, radc, exradc);
				fig.move(x, y, g);
			}
			xc = x;
			yc = y;
		}
		catch (const Figure::BorderException^ ex) {
			this->labelError->Text = "Выход за границы окна!";
			this->labelError->Visible = true;
		}
		catch (const Figure::NegNumber^ ex) {
			this->labelError->Text = "Нулевые или отрицательные значения параметров!";
			this->labelError->Visible = true;
		}
		catch (const MyStar::IncorrectRadius^ ex) {
			this->labelError->Text = "Внутренний радиус больше внешнего!";
			this->labelError->Visible = true;
		}
		catch (...) {
			labelError->Visible = false;
		}
	}

	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = pictureBox1->CreateGraphics();
		g->Clear(pictureBox1->BackColor);
	}
	private: System::Void buttonDeleteStack_Click(System::Object^ sender, System::EventArgs^ e) {
		stack.clear();
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelX_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panelCreate_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}
