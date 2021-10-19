#pragma once
#include "TSet.h"
#include <msclr\marshal_cppstd.h>

namespace TBitForm
{
	TSet* setA = nullptr;
	TSet* setB = nullptr;
	TSet* setC = nullptr;

	//using namespace System;
	//using namespace System::ComponentModel;
	//using namespace System::Collections;
	//using namespace System::Windows::Forms;
	//using namespace System::Data;
	//using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete setA;
			delete setB;
			delete setC;
			setA = nullptr;
			setB = nullptr;
			setC = nullptr;
		}

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;




	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ labelSetA;

	private: System::Windows::Forms::Label^ labelSetB;
	private: System::Windows::Forms::Label^ labelSetC;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->labelSetA = (gcnew System::Windows::Forms::Label());
			this->labelSetB = (gcnew System::Windows::Forms::Label());
			this->labelSetC = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(670, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 62);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(79, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(506, 62);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(79, 250);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(506, 62);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(18, 82);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(55, 47);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"A";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(18, 260);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(55, 47);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"B";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(18, 378);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(55, 47);
			this->textBox7->TabIndex = 15;
			this->textBox7->Text = L"C";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(715, 21);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(142, 47);
			this->textBox8->TabIndex = 16;
			this->textBox8->Text = L"Universe";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(132, 152);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(69, 49);
			this->button4->TabIndex = 9;
			this->button4->Text = L"&&";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(223, 152);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(69, 49);
			this->button5->TabIndex = 10;
			this->button5->Text = L"|";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(315, 152);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(69, 49);
			this->button6->TabIndex = 11;
			this->button6->Tag = L"Tilda";
			this->button6->Text = L"~";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// labelSetA
			// 
			this->labelSetA->AutoEllipsis = true;
			this->labelSetA->AutoSize = true;
			this->labelSetA->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelSetA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelSetA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSetA->Location = System::Drawing::Point(79, 32);
			this->labelSetA->Name = L"labelSetA";
			this->labelSetA->Size = System::Drawing::Size(2, 41);
			this->labelSetA->TabIndex = 7;
			// 
			// labelSetB
			// 
			this->labelSetB->AutoEllipsis = true;
			this->labelSetB->AutoSize = true;
			this->labelSetB->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelSetB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelSetB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSetB->Location = System::Drawing::Point(79, 208);
			this->labelSetB->Name = L"labelSetB";
			this->labelSetB->Size = System::Drawing::Size(2, 41);
			this->labelSetB->TabIndex = 17;
			// 
			// labelSetC
			// 
			this->labelSetC->AutoSize = true;
			this->labelSetC->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelSetC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelSetC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSetC->Location = System::Drawing::Point(79, 378);
			this->labelSetC->MaximumSize = System::Drawing::Size(800, 0);
			this->labelSetC->Name = L"labelSetC";
			this->labelSetC->Size = System::Drawing::Size(2, 41);
			this->labelSetC->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 661);
			this->Controls->Add(this->labelSetC);
			this->Controls->Add(this->labelSetB);
			this->Controls->Add(this->labelSetA);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){}
		private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e){}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			const int len = System::Convert::ToInt32(textBox1->Text);

			if (setA != nullptr && setB != nullptr && setC != nullptr)
			{
				delete setA;
				delete setB;
				delete setC;
			}
			if (len > 0)
			{
				setA = new TSet(len);
				setB = new TSet(len);
				setC = new TSet(len);
			}

		}
		private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			enter_TextBox(textBox2, setA, labelSetA);
		}
		private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			enter_TextBox(textBox3, setB, labelSetB);
		}
		private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e){}
		private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

		private: System::Void enter_TextBox(System::Windows::Forms::TextBox^ box
										  , TSet*& set
										  , System::Windows::Forms::Label^ label)
		{
			if (set != nullptr)
			{
				const int power = set->getPower();
				delete set;
				set = new TSet(power);
			}

			const int len = box->Text->Length;
			std::vector<std::string> vecStr(1);

			for (int i = 0, k = 0; i < len; ++i)
			{
				if (box->Text[i] != ' ')
				{
					vecStr[k] += box->Text[i];
				}
				else
				{
					++k;
					vecStr.push_back("");
				}
			}
			for (int i = 0, value; i < vecStr.size(); ++i)
			{
				value = std::atoi(vecStr[i].c_str());
				set->add(value);
			}
			const std::string res = set->ToString();
			if (label->Text != nullptr)
				delete label->Text;
			label->Text = gcnew System::String(res.c_str());
		}

	
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			const int powerC = setC->getPower();
			delete setC;
			setC = new TSet(powerC);
			
			if(setA != nullptr)
			{
				*setC = *setA & *setB;
			}
			const std::string res = setC->ToString();
			if (labelSetC->Text != nullptr)
			{
				delete labelSetC->Text;
			}
			labelSetC->Text = gcnew System::String(res.c_str());
		}
	
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
		{
			const int powerC = setC->getPower();
			delete setC;
			setC = new TSet(powerC);

			if (setA != nullptr)
			{
				*setC = *setA | *setB;
			}
			const std::string res = setC->ToString();
			if (labelSetC->Text != nullptr)
			{
				delete labelSetC->Text;
			}
			labelSetC->Text = gcnew System::String(res.c_str());
		}
		
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		const int powerC = setC->getPower();
		delete setC;
		setC = new TSet(powerC);
		if (setA != nullptr)
		{
			*setC = ~*setA;
		}
		const std::string res = setC->ToString();
		if(labelSetC->Text != nullptr)
		{
			delete labelSetC->Text;
		}
		labelSetC->Text = gcnew System::String(res.c_str());
	}

};
}
