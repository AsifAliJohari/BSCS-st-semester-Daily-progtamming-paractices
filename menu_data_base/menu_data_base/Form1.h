#pragma once

namespace menu_data_base {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newItemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  listOfItemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchItemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteItemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Button^  ok_btn;
	private: System::Windows::Forms::TextBox^  name_tbx;
	private: System::Windows::Forms::TextBox^  Id_tbx;
	private: System::Windows::Forms::TextBox^  price_tbx;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newItemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listOfItemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchItemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteItemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ok_btn = (gcnew System::Windows::Forms::Button());
			this->name_tbx = (gcnew System::Windows::Forms::TextBox());
			this->Id_tbx = (gcnew System::Windows::Forms::TextBox());
			this->price_tbx = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(347, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->newItemToolStripMenuItem, 
				this->listOfItemToolStripMenuItem, this->searchItemToolStripMenuItem, this->deleteItemToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newItemToolStripMenuItem
			// 
			this->newItemToolStripMenuItem->Name = L"newItemToolStripMenuItem";
			this->newItemToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->newItemToolStripMenuItem->Text = L"new item";
			this->newItemToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newItemToolStripMenuItem_Click);
			// 
			// listOfItemToolStripMenuItem
			// 
			this->listOfItemToolStripMenuItem->Name = L"listOfItemToolStripMenuItem";
			this->listOfItemToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->listOfItemToolStripMenuItem->Text = L"list of item";
			// 
			// searchItemToolStripMenuItem
			// 
			this->searchItemToolStripMenuItem->Name = L"searchItemToolStripMenuItem";
			this->searchItemToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->searchItemToolStripMenuItem->Text = L"search item";
			// 
			// deleteItemToolStripMenuItem
			// 
			this->deleteItemToolStripMenuItem->Name = L"deleteItemToolStripMenuItem";
			this->deleteItemToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->deleteItemToolStripMenuItem->Text = L"delete item";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// ok_btn
			// 
			this->ok_btn->Location = System::Drawing::Point(139, 151);
			this->ok_btn->Name = L"ok_btn";
			this->ok_btn->Size = System::Drawing::Size(75, 23);
			this->ok_btn->TabIndex = 1;
			this->ok_btn->Text = L"OK";
			this->ok_btn->UseVisualStyleBackColor = true;
			this->ok_btn->Click += gcnew System::EventHandler(this, &Form1::ok_btn_Click);
			// 
			// name_tbx
			// 
			this->name_tbx->Location = System::Drawing::Point(51, 45);
			this->name_tbx->Name = L"name_tbx";
			this->name_tbx->Size = System::Drawing::Size(282, 20);
			this->name_tbx->TabIndex = 2;
			// 
			// Id_tbx
			// 
			this->Id_tbx->Location = System::Drawing::Point(51, 76);
			this->Id_tbx->Name = L"Id_tbx";
			this->Id_tbx->Size = System::Drawing::Size(282, 20);
			this->Id_tbx->TabIndex = 3;
			// 
			// price_tbx
			// 
			this->price_tbx->Location = System::Drawing::Point(51, 110);
			this->price_tbx->Name = L"price_tbx";
			this->price_tbx->Size = System::Drawing::Size(282, 20);
			this->price_tbx->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Id";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"price";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(347, 184);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->price_tbx);
			this->Controls->Add(this->Id_tbx);
			this->Controls->Add(this->name_tbx);
			this->Controls->Add(this->ok_btn);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"asif johari";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		struct employ
{ 
  string name;
  int emp_id;
  float salery;
  string dept;
  string garde;
};
	private: System::Void newItemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void ok_btn_Click(System::Object^  sender, System::EventArgs^  e) { 
			 struct employ employs;           
                employs. name=name_tbx.Text;
                employs. emp_id=id_tbx.Text.ToString();

		 }
};
}


