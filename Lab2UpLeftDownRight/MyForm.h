#pragma once
#include "PicLocation.h"
namespace Lab2UpLeftDownRight {

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  Up;
	private: System::Windows::Forms::Button^  Down;
	private: System::Windows::Forms::Button^  Left;
	private: System::Windows::Forms::Button^  Right;
	private: System::Windows::Forms::Button^  Load_image;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ShowHide;

	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Up = (gcnew System::Windows::Forms::Button());
			this->Down = (gcnew System::Windows::Forms::Button());
			this->Left = (gcnew System::Windows::Forms::Button());
			this->Right = (gcnew System::Windows::Forms::Button());
			this->ShowHide = (gcnew System::Windows::Forms::Button());
			this->Load_image = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(323, 283);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(192, 200);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Up
			// 
			this->Up->Location = System::Drawing::Point(679, 231);
			this->Up->Name = L"Up";
			this->Up->Size = System::Drawing::Size(56, 37);
			this->Up->TabIndex = 2;
			this->Up->Text = L"Up";
			this->Up->UseVisualStyleBackColor = true;
			this->Up->Click += gcnew System::EventHandler(this, &MyForm::Up_Click);
			// 
			// Down
			// 
			this->Down->Location = System::Drawing::Point(679, 317);
			this->Down->Name = L"Down";
			this->Down->Size = System::Drawing::Size(56, 37);
			this->Down->TabIndex = 3;
			this->Down->Text = L"Down";
			this->Down->UseVisualStyleBackColor = true;
			this->Down->Click += gcnew System::EventHandler(this, &MyForm::Down_Click);
			// 
			// Left
			// 
			this->Left->Location = System::Drawing::Point(640, 274);
			this->Left->Name = L"Left";
			this->Left->Size = System::Drawing::Size(56, 37);
			this->Left->TabIndex = 4;
			this->Left->Text = L"Left";
			this->Left->UseVisualStyleBackColor = true;
			this->Left->Click += gcnew System::EventHandler(this, &MyForm::Left_Click);
			// 
			// Right
			// 
			this->Right->Location = System::Drawing::Point(720, 274);
			this->Right->Name = L"Right";
			this->Right->Size = System::Drawing::Size(56, 37);
			this->Right->TabIndex = 5;
			this->Right->Text = L"Right";
			this->Right->UseVisualStyleBackColor = true;
			this->Right->Click += gcnew System::EventHandler(this, &MyForm::Right_Click);
			// 
			// ShowHide
			// 
			this->ShowHide->Location = System::Drawing::Point(679, 103);
			this->ShowHide->Name = L"ShowHide";
			this->ShowHide->Size = System::Drawing::Size(75, 23);
			this->ShowHide->TabIndex = 6;
			this->ShowHide->Text = L"Show / Hide";
			this->ShowHide->UseVisualStyleBackColor = true;
			this->ShowHide->Click += gcnew System::EventHandler(this, &MyForm::ShowHide_Click);
			// 
			// Load_image
			// 
			this->Load_image->Location = System::Drawing::Point(679, 20);
			this->Load_image->Name = L"Load_image";
			this->Load_image->Size = System::Drawing::Size(75, 57);
			this->Load_image->TabIndex = 7;
			this->Load_image->Text = L"Load Image";
			this->Load_image->UseVisualStyleBackColor = true;
			this->Load_image->Click += gcnew System::EventHandler(this, &MyForm::Load_image_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(674, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Move";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 495);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Load_image);
			this->Controls->Add(this->ShowHide);
			this->Controls->Add(this->Right);
			this->Controls->Add(this->Left);
			this->Controls->Add(this->Down);
			this->Controls->Add(this->Up);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Graphics^ g;
		PicLocation^ pic_location = gcnew PicLocation();
		Bitmap^ bmp = gcnew Bitmap(L"lion.bmp");
		
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		g = pictureBox1->CreateGraphics();
		//Invalidate();
	}
	private: System::Void Up_Click(System::Object^  sender, System::EventArgs^  e) {
	
		pic_location->setx(256);
		pic_location->sety(12);
		pictureBox1->Location = Point(pic_location->getx(), pic_location->gety());
		
		
	}

private: System::Void Down_Click(System::Object^  sender, System::EventArgs^  e) {

	pic_location->setx(323);
	pic_location->sety(283);
	pictureBox1->Location = Point(pic_location->getx(), pic_location->gety());
	
	
}
private: System::Void Left_Click(System::Object^  sender, System::EventArgs^  e) {
	
	pic_location->setx(12);
	pic_location->sety(149);
	
	pictureBox1->Location = Point(pic_location->getx(), pic_location->gety());
	
}
private: System::Void Right_Click(System::Object^  sender, System::EventArgs^  e) {
	
	pic_location->setx(460);
	pic_location->sety(149);
	
	pictureBox1->Location = Point(pic_location->getx(), pic_location->gety());
	
}
private: System::Void ShowHide_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Visible = !pictureBox1->Visible;
	
}
	

private: System::Void Load_image_Click(System::Object^  sender, System::EventArgs^  e) {

	g->DrawImage(bmp, 0, 0, bmp->Width, bmp->Height);
}
};
}
