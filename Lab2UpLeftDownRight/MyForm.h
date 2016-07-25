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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(805, 471);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Up
			// 
			this->Up->Location = System::Drawing::Point(679, 160);
			this->Up->Name = L"Up";
			this->Up->Size = System::Drawing::Size(75, 48);
			this->Up->TabIndex = 2;
			this->Up->Text = L"Up";
			this->Up->UseVisualStyleBackColor = true;
			this->Up->Click += gcnew System::EventHandler(this, &MyForm::Up_Click);
			// 
			// Down
			// 
			this->Down->Location = System::Drawing::Point(679, 322);
			this->Down->Name = L"Down";
			this->Down->Size = System::Drawing::Size(75, 48);
			this->Down->TabIndex = 3;
			this->Down->Text = L"Down";
			this->Down->UseVisualStyleBackColor = true;
			this->Down->Click += gcnew System::EventHandler(this, &MyForm::Down_Click);
			// 
			// Left
			// 
			this->Left->Location = System::Drawing::Point(679, 214);
			this->Left->Name = L"Left";
			this->Left->Size = System::Drawing::Size(75, 48);
			this->Left->TabIndex = 4;
			this->Left->Text = L"Left";
			this->Left->UseVisualStyleBackColor = true;
			this->Left->Click += gcnew System::EventHandler(this, &MyForm::Left_Click);
			// 
			// Right
			// 
			this->Right->Location = System::Drawing::Point(679, 268);
			this->Right->Name = L"Right";
			this->Right->Size = System::Drawing::Size(75, 48);
			this->Right->TabIndex = 5;
			this->Right->Text = L"Right";
			this->Right->UseVisualStyleBackColor = true;
			this->Right->Click += gcnew System::EventHandler(this, &MyForm::Right_Click);
			// 
			// ShowHide
			// 
			this->ShowHide->Location = System::Drawing::Point(679, 49);
			this->ShowHide->Name = L"ShowHide";
			this->ShowHide->Size = System::Drawing::Size(75, 23);
			this->ShowHide->TabIndex = 6;
			this->ShowHide->Text = L"Show / Hide";
			this->ShowHide->UseVisualStyleBackColor = true;
			this->ShowHide->Click += gcnew System::EventHandler(this, &MyForm::ShowHide_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 495);
			this->Controls->Add(this->ShowHide);
			this->Controls->Add(this->Right);
			this->Controls->Add(this->Left);
			this->Controls->Add(this->Down);
			this->Controls->Add(this->Up);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Graphics^ g;
		PicLocation^ pic_location = gcnew PicLocation();
		Bitmap^ bmp = gcnew Bitmap(L"lion.bmp");
		
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		g = pictureBox1->CreateGraphics();
		Invalidate();
	}
	private: System::Void Up_Click(System::Object^  sender, System::EventArgs^  e) {
	
		pic_location->setx(256);
		pic_location->sety(12);
		
		g->DrawImage(bmp, pic_location->getx(), pic_location->gety(), bmp->Width, bmp->Height);
		pictureBox1->Invalidate();
	}

private: System::Void Down_Click(System::Object^  sender, System::EventArgs^  e) {

	pic_location->setx(256);
	pic_location->sety(283);
	
	g->DrawImage(bmp, pic_location->getx(), pic_location->gety(), bmp->Width, bmp->Height);
	
}
private: System::Void Left_Click(System::Object^  sender, System::EventArgs^  e) {
	
	pic_location->setx(12);
	pic_location->sety(149);
	
	g->DrawImage(bmp, pic_location->getx(), pic_location->gety(), bmp->Width, bmp->Height);
	
}
private: System::Void Right_Click(System::Object^  sender, System::EventArgs^  e) {
	
	pic_location->setx(460);
	pic_location->sety(149);
	
	g->DrawImage(bmp, pic_location->getx(), pic_location->gety(), bmp->Width, bmp->Height);
	
}
private: System::Void ShowHide_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Visible = !pictureBox1->Visible;
	
}
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {


		g->DrawImage(bmp, pic_location->getx(), pic_location->gety(), bmp->Width, bmp->Height);
		//Update();
	}

};
}
