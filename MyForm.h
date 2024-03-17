#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <regex>
//#include <locale>
#include "lib\include\nlohmann\json.hpp"
#include <msclr\marshal_cppstd.h>

int noq, k, bilet, lb = 0, erro=0;
std::string exstring;
std::string nobilet;
nlohmann::json massive;
std::string answ[4];
std::string tru;
std::string aimg;
std::string category;
std::string patchtobilet;

namespace dosaaf {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace nlohmann;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выборКатегорииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aBMToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ cDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выборБилетаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ listBox1;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выборКатегорииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aBMToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выборБилетаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 34);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(698, 225);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 262);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->MaximumSize = System::Drawing::Size(700, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(592, 474);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Проверить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(13, 392);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Visible = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(13, 430);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Visible = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(13, 470);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->Visible = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(13, 509);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->Visible = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 340);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->MaximumSize = System::Drawing::Size(675, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(30, 392);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->MaximumSize = System::Drawing::Size(525, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 18);
			this->label3->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(30, 430);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->MaximumSize = System::Drawing::Size(525, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 18);
			this->label4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(30, 470);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->MaximumSize = System::Drawing::Size(525, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 18);
			this->label5->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(30, 509);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->MaximumSize = System::Drawing::Size(525, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 18);
			this->label6->TabIndex = 10;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->выборКатегорииToolStripMenuItem,
					this->выборБилетаToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(755, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выборКатегорииToolStripMenuItem
			// 
			this->выборКатегорииToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aBMToolStripMenuItem,
					this->cDToolStripMenuItem
			});
			this->выборКатегорииToolStripMenuItem->Name = L"выборКатегорииToolStripMenuItem";
			this->выборКатегорииToolStripMenuItem->Size = System::Drawing::Size(115, 20);
			this->выборКатегорииToolStripMenuItem->Text = L"Выбор категории";
			// 
			// aBMToolStripMenuItem
			// 
			this->aBMToolStripMenuItem->Name = L"aBMToolStripMenuItem";
			this->aBMToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->aBMToolStripMenuItem->Text = L"ABM";
			this->aBMToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aBMToolStripMenuItem_Click);
			// 
			// cDToolStripMenuItem
			// 
			this->cDToolStripMenuItem->Name = L"cDToolStripMenuItem";
			this->cDToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->cDToolStripMenuItem->Text = L"CD";
			this->cDToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cDToolStripMenuItem_Click);
			// 
			// выборБилетаToolStripMenuItem
			// 
			this->выборБилетаToolStripMenuItem->Name = L"выборБилетаToolStripMenuItem";
			this->выборБилетаToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->выборБилетаToolStripMenuItem->Text = L"Выбор билета";
			this->выборБилетаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выборБилетаToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox1->Location = System::Drawing::Point(216, 308);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(266, 20);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"Номер билета 1 - 40";
			this->textBox1->Visible = false;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->Location = System::Drawing::Point(507, 308);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 19);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Выбрать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 25);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(755, 577);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->BackColor = System::Drawing::SystemColors::Window;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20"
			});
			this->listBox1->Location = System::Drawing::Point(591, 264);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(152, 199);
			this->listBox1->TabIndex = 16;
			this->listBox1->Visible = false;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 542);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox2);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"PDD_EXAM";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {		
		if ((radioButton1->Checked == 1 || radioButton2->Checked == 1 || radioButton3->Checked == 1 || radioButton4->Checked == 1) && button1->Text=="Проверить") {
			lb = 1;
			checkques(k);
			listBox1->Items[noq] = listBox1->Items[noq] + " РЕШЁН";
			button1->Text = "Далее";
			label6->Visible = 1;
			//radioButton4->Visible = 1;
			noq += 1;
			if (noq >= 20) {
				button1->Visible = false;
				label2->Text = "Тренеровка закончена. " + gcnew String(to_string(erro).c_str()) + " ошибок допущено";
				button1->Visible = 0;
			}
		}
		else if (button1->Text == "Далее") {
			label1->Text = "";
			radioButton1->Checked = 0;
			radioButton2->Checked = 0;
			radioButton3->Checked = 0;
			radioButton4->Checked = 0;
			getques(0, noq);
			button1->Text = "Проверить";
		}
	}

	void checkques(int k) {
		if (massive[noq]["answers"][k - 1]["is_correct"].dump() == "false") {
			label1->Text = gcnew String(massive[noq]["answer_tip"].dump().c_str(), 0, 1000, System::Text::Encoding::GetEncoding("utf-8"));
			erro += 1;
		}
		else {
			label1->Text = "Верно!";
		}
	}

	void getques(bool first, int noq) {
		if (first){
			fstream f;
			f.open(patchtobilet);
			f >> massive;
			f.close();
		}
		int i = 0;
		label6->Visible = 1;
		radioButton4->Visible = 1;
		label1->Text = "Билет № " + gcnew String(nobilet.c_str()) +", Вопрос № " + gcnew String(to_string(noq+1).c_str());
		string noimg = massive[noq]["image"].dump();
		noimg = regex_replace(noimg, regex("\""), "");
		noimg = regex_replace(noimg, regex("./images/A_B/"), "");
		noimg = regex_replace(noimg, regex("./images/C_D/"), "");
		noimg = regex_replace(noimg, regex("./images/"), "");
		String^ imagg = gcnew String((aimg + noimg).c_str());
		//Ниже шаблон вывода значения json в LABEL
		pictureBox1->Image=Bitmap::FromFile(imagg);
		String^ str2 = gcnew String(massive[noq]["question"].dump().c_str(), 0, 1000, System::Text::Encoding::GetEncoding("utf-8"));
		label2->Text = str2;
		for (i = 0; i < 4; i++) {
			answ[i] = massive[noq]["answers"][i]["answer_text"].dump();
		}
		tru = massive[noq]["answers"][i]["is_correct"].dump();
		label3->Text = gcnew String(answ[0].c_str(), 0, 1000, System::Text::Encoding::GetEncoding("utf-8"));
		label4->Text = gcnew String(answ[1].c_str(), 0, 1000, System::Text::Encoding::GetEncoding("utf-8"));
		label5->Text = gcnew String(answ[2].c_str(), 0, 1000, System::Text::Encoding::GetEncoding("utf-8"));
		label6->Text = gcnew String(answ[3].c_str(), 0, 1000, System::Text::Encoding::GetEncoding("utf-8"));
		if (label6->Text == "null") {
			label6->Visible = 0;
			radioButton4->Visible = 0;
		}
		lb = 0;
	}

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	k = 1;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	k = 2;
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	k = 3;
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	k = 4;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Text = "Проверить";
}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void aBMToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	aimg = "bilet\\images\\";
	patchtobilet = "bilet\\questions\\A_B\\tickets\\Билет ";
	aBMToolStripMenuItem->Checked = 0;
	cDToolStripMenuItem->Checked = 1;
	MessageBox::Show(L"Выбрана категория ABM", L"Выбор категории", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void cDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		aimg = "bilet\\images\\";
	patchtobilet = "bilet\\questions\\A_B\\tickets\\Билет ";
	aBMToolStripMenuItem->Checked = 1;
	cDToolStripMenuItem->Checked = 0;
	MessageBox::Show(L"Выбрана категория CD", L"Выбор категории", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	patchtobilet = patchtobilet + msclr::interop::marshal_as<std::string>(textBox1->Text) + ".json";
	nobilet = msclr::interop::marshal_as<std::string>(textBox1->Text);
	textBox1->Visible = 0;
	button2->Visible = 0;
	radioButton1->Visible = 1;
	radioButton2->Visible = 1;
	radioButton3->Visible = 1;
	radioButton4->Visible = 1;
	button1->Visible = 1;
	listBox1->Visible = 1;
	getques(1, noq);
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
private: System::Void выборБилетаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (aimg != "") {
		textBox1->Visible = 1;
		button2->Visible = 1;
	}
	else {
		MessageBox::Show(L"Перед выбором билета выберите категорию", L"Ошибка выбора билета", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (lb == 0) {
		String^ is = listBox1->Items[this->listBox1->SelectedIndex]->ToString();
		msclr::interop::marshal_context context;
		std::string iss = context.marshal_as<std::string>(is);
		iss = regex_replace(iss, regex(" РЕШЁН"), "");
		int a = stoi(iss);
		noq = a - 1;
		getques(0, noq);
	}
}
};
}
