#pragma once
#include <cstdlib>
#include<ctime>

const int n = 2, m = 3;
int a[n][m], i, j;

namespace Project03 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
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






	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->button1->Location = System::Drawing::Point(216, 310);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Знайти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->panel1->Location = System::Drawing::Point(441, 146);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(271, 118);
			this->panel1->TabIndex = 3;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(41, 82);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(96, 33);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Сума";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(41, 43);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(179, 33);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Мінімальний";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(41, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(205, 33);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Максимальний";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->button2->Location = System::Drawing::Point(763, 310);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Дізнатися";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label1->Location = System::Drawing::Point(309, 386);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(21, 374);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 50);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Середнє арифметичне \r\nодновимірного масиву: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(728, 158);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(728, 197);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(728, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView1->Location = System::Drawing::Point(26, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(169, 321);
			this->dataGridView1->TabIndex = 8;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Column8";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Column9";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Column10";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column11,
					this->Column12, this->Column13
			});
			this->dataGridView2->Location = System::Drawing::Point(441, 30);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(504, 93);
			this->dataGridView2->TabIndex = 9;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Column11";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Column12";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 125;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Column13";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 125;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label3->Location = System::Drawing::Point(437, 316);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 29);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Вивести матрицю:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label4->Location = System::Drawing::Point(300, 444);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 29);
			this->label4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label5->Location = System::Drawing::Point(21, 435);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(247, 50);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Середнє арифметичне \r\nпарних індексів: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->label6->Location = System::Drawing::Point(421, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 504);
			this->label6->TabIndex = 13;
			this->label6->Text = L"|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n"
				L"\r\n";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(965, 530);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Практична робота 4";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add(10);
	dataGridView2->Rows->Add(3);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int const n = 10; int i, s = 0, count_parni = 0, s_parni = 0; int mas[n]; float sr;  float  sr_parni = 0.0f;
	Random^ rnd = gcnew Random();
	for (i = 0; i < n; i++)
		dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(rnd->Next(-50, 50));
	for (i = 0; i < n; i++)
	{
		mas[i] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
		s += mas[i];
	}
	for (i = 0; i < n; i++) {
		mas[i] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
		s += mas[i];
		if (i % 2 == 0) 
		{ 
			s_parni += mas[i];
			count_parni++;
		}
	}
	sr = (float)s / n;
	label1->Text = Convert::ToString(sr);

	if (count_parni != 0) {
		float sr_parni = s_parni / count_parni;
		label4->Text = Convert::ToString(sr_parni);
	}
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			a[i][j] = Convert::ToInt32(dataGridView2[j, i]->Value);
		}
	int maxs = a[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (checkBox1->Checked == true)
			{
				{
					if (a[i][j] > maxs)
						maxs = a[i][j];
				}

			}
	textBox1->Text = maxs.ToString();
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			a[i][j] = Convert::ToInt32(dataGridView2[j, i]->Value);
		}
	int mins = a[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (checkBox2->Checked == true)
			{
				{
					if (a[i][j] < mins)
						mins = a[i][j];
				}

			}
	textBox2->Text = mins.ToString();
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			a[i][j] = Convert::ToInt32(dataGridView2[j, i]->Value);
		}
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (checkBox3->Checked == true)
			{
				{
					sum += a[i][j];
				}

			}
	textBox3->Text = sum.ToString();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ rnd = gcnew Random();
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			dataGridView2[j, i]->Value = Convert::ToString(rnd->Next(50));
		}
}
};
}
