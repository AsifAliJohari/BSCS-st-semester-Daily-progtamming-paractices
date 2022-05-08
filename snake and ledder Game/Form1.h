#pragma once
#include <iostream>
#include <ctime>
using namespace std;
namespace graphicsexample {

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
		int dice;
		int u1Pos, u2Pos;
		int u1Sart;
		int u2Start;
		int u;
		int sixCount;
		int x,y;
			
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	public: 
	private: System::Windows::Forms::Label^  label3;
	public: 
		//int sixCount;
    
		Form1(void)
		{
			InitializeComponent();
			dice=0;
			u1Pos=0, u2Pos=0;
			u1Sart=0;
			u2Start=0;
			u=1;
			sixCount=0;
			x=pictureBox2->Location.X;
			y=pictureBox2->Location.Y;
			 
			 
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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(257, 669);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Roll Dice";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(349, 675);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(220, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L" 1";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(12, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 600);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(32, 600);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(36, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(154, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"User :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(325, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(413, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"label5";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(34, 601);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 35);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(157, 242);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(304, 265);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(165, 250);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(150, 113);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 731);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Snake Ladder";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
void switchUser(void)
{
     if (u==1)
        u=2;
     else
         u=1;
	 label2->Text=System::Convert::ToString(u);
 }

void  uesrFunction(int dice, int user)
{
	int start=0;
	int pos=0;

	if (user==1)
	{
		start=u1Sart;
		pos=u1Pos;
	    
	}
	else
	{
		start=u2Start;
		pos=u2Pos;
	}
		
		
     if (start==0)
     {
		 if(user==1)
             {      if (dice==6)
				   {       
					   start=1;
					  
						   pictureBox2->Visible=true;
						   pictureBox2->Location=Point(34,600);
				   }
			} 
		 else
			 {		if (dice==6)
				   {       
					   start=1;
					  
						   pictureBox3->Visible=true;
						   pictureBox3->Location=Point(34,600);
				   }
			}
     }
     else
     {
         (pos+=dice);
                                                    
          switch(pos)
          {
                      case 8:                                                   //if (*pos==8)
                            pos=31;
                             break;
                      case 15:                                                    //if (*pos==15)
                             pos=97;
                              break;
                      case 24:                                                    // if (*pos==24)
                             pos=1;
                              break;
                      case 42:                                                    // if (*pos==42)
                             pos=81;
                              break;
                      case 55:                                                    //if (*pos==55)   
                             pos=13;
                              break;
                      case 66:                                                    //if (*pos==66)
                             pos=87;
                              break; 
                      case 71:                                                    //if (*pos==71)
                             pos=29;
                              break;
                      case 88:                                                    //if (*pos==88)
                             pos=67;
                              break;
                      case 99:                                                    //if (*pos==99)
                             pos=6;
                              break;
                      case 100:                                                    //if (*pos>=100)
                              cout<<"win "<<endl;
                              break;           
          }                                                
                                                                 
     }           
	 if (user==1)
	{
		u1Sart=start;
		u1Pos=pos;
	}
	else
	{
		u2Start=start;
		u2Pos=pos;
	}
                             
}
Point setLoction(int pos)
{

	int Sx=34,Sy=600, xl=560;
	int c_x,c_y;
	int gw=58;

	if (pos<=10)
	{
		c_x=pos-1;
		c_y=0;
	}
	else
	{
		c_x=((pos-1)%(10));
		c_y=((pos)/(10));
	}
	
	if (c_y%2==0)
		x=(Sx)+((c_x)*(gw));
	else
		x=(xl)-((c_x)*(gw));
	y=(Sy)-((c_y)*(gw));

	
return Point(x,y);
}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				
			 srand((unsigned) time(NULL));
			 dice=(rand()%6)+1;
			
			 label1->Text=System::Convert::ToString(dice);
			
		if (u==1)
             {
				
                if (dice==6)
                   {
                      sixCount++;
                      if (sixCount==3)
                      {
                          sixCount=0;
                          switchUser();
                      } 
					  return;
                     
                   }
                
                for(int sixes=0;sixes<sixCount;sixes++)
									uesrFunction(6, u);
						uesrFunction(dice, u);
						pictureBox2->Location=setLoction(u1Pos);
						sixCount=0;        
						switchUser();
						
             }
             else
             {
				 
                 if (dice==6)
                   {
                      sixCount++;
                      if (sixCount==3)
                      {
                          sixCount=0;
                          switchUser();
                      }   
                      return;
                   }
                
                for(int sixes=0;sixes<sixCount;sixes++)
									uesrFunction(6, u);
						uesrFunction(dice, u);
						pictureBox3->Location=setLoction(u2Pos);					
						sixCount=0;
						switchUser();
				 
               
             }	
			label4->Text=System::Convert::ToString(u1Pos);
			label5->Text=System::Convert::ToString(u2Pos);
			 if((u1Pos>=100) || (u2Pos>=100))
             { 
				 if(u1Pos==100)
				 {
					 pictureBox4->Visible=true;
					 u1Sart=0;
					 u2Start=0;
					 return;
				 }
				 else
				 {
					 pictureBox5->Visible=true;
					 u1Sart=0;
					 u2Start=0;

					 return;
				 }
                        //char ch;
                        //cout<<"are you want to play again ? y/n : ";
                        //cin>>ch;
                       /* if (ch=='y')
                        { 
                                    u1Sart=0,u2Start=0;
                                    u1Pos=0,u2Pos=0;
                                    dice=0;
                        }
                        if (ch=='n')  
                                    break;*/
             }
    
			 	 
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 } 
			 
			 
				

private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }




};
}

