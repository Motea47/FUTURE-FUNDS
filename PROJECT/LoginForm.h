#pragma once
#include "User.h"
namespace FutureFunds {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm1
	/// </summary>
	public ref class LoginForm1 : public System::Windows::Forms::Form
	{
	public:
		LoginForm1(void)
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
		~LoginForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Username;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::TextBox^ tbPassword;



	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	
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
		/// 
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 30);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 79.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(714, 328);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(703, 112);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Login";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm1::label2_Click);
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->BackColor = System::Drawing::Color::Transparent;
			this->Username->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->ForeColor = System::Drawing::Color::Sienna;
			this->Username->Location = System::Drawing::Point(721, 507);
			this->Username->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(185, 31);
			this->Username->TabIndex = 2;
			this->Username->Text = L"Username";
			this->Username->Click += gcnew System::EventHandler(this, &LoginForm1::Username_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"EuroRoman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->tbEmail->Location = System::Drawing::Point(910, 505);
			this->tbEmail->Margin = System::Windows::Forms::Padding(2);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(385, 36);
			this->tbEmail->TabIndex = 3;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &LoginForm1::tbEmail_TextChanged);
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"EuroRoman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->tbPassword->Location = System::Drawing::Point(910, 570);
			this->tbPassword->Margin = System::Windows::Forms::Padding(2);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(385, 36);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm1::tbpassword_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Sienna;
			this->label3->Location = System::Drawing::Point(721, 567);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 31);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm1::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button1->Location = System::Drawing::Point(910, 620);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 49);
			this->button1->TabIndex = 8;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button2->Location = System::Drawing::Point(1102, 620);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(193, 49);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm1::button2_Click);
			// 
			// LoginForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"EuroRoman", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"LoginForm1";
			this->Text = L"FutureFunds";
			this->Load += gcnew System::EventHandler(this, &LoginForm1::LoginForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void LoginForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}	
      public: User^ user = nullptr; // dito ba nag dedeclare ng global variable?
	private: System::Void Username_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tbEmail->Text;
	String^ password = this->tbPassword->Text;

	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter your email and password",
			"Email or Password is Empty", MessageBoxButtons::OK);
			return;
	}

	try{
		String^ connString = "Data Source=localhost\\SQLEXPRESS02;Initial Catalog=master;Integrated Security=True;Encrypt=False";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);


		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			//error yung global variable kasi hindi niya na reread ito
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->name = reader->GetString(1);
			user->email = reader->GetString(2);
			user->phone = reader->GetString(3);
			user->address = reader->GetString(4);
			user->password = reader->GetString(5);

			this->Close();
		}
		else {
			MessageBox::Show("Email or Password is incorrect",
				"Email or Password Error", MessageBoxButtons::OK);

		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
		return;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void tbpassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
