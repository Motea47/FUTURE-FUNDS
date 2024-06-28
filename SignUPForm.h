#pragma once
#include"User.h"

namespace FutureFunds {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for SignUPForm
	/// </summary>
	public ref class SignUPForm : public System::Windows::Forms::Form
	{
	public:
		SignUPForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUPForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Label^ btnOk;
	private: System::Windows::Forms::Label^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;



	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Label());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(537, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign Up";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &SignUPForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &SignUPForm::label2_Click);
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(247, 85);
			this->tbName->Multiline = true;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(288, 34);
			this->tbName->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(51, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 18);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			this->label3->Click += gcnew System::EventHandler(this, &SignUPForm::label3_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(247, 136);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(288, 34);
			this->tbEmail->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(51, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone";
			this->label4->Click += gcnew System::EventHandler(this, &SignUPForm::label4_Click);
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(247, 190);
			this->tbPhone->Multiline = true;
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(288, 34);
			this->tbPhone->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(51, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address";
			this->label5->Click += gcnew System::EventHandler(this, &SignUPForm::label5_Click);
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(247, 241);
			this->tbAddress->Multiline = true;
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(288, 34);
			this->tbAddress->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(51, 301);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 18);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			this->label6->Click += gcnew System::EventHandler(this, &SignUPForm::label6_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(247, 295);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(288, 34);
			this->tbPassword->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 357);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 18);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Confirm Password";
			this->label7->Click += gcnew System::EventHandler(this, &SignUPForm::label7_Click);
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(247, 350);
			this->tbConfirmPassword->Multiline = true;
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(288, 34);
			this->tbConfirmPassword->TabIndex = 2;
			// 
			// btnOk
			// 
			this->btnOk->AutoSize = true;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Location = System::Drawing::Point(321, 404);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(36, 18);
			this->btnOk->TabIndex = 3;
			this->btnOk->Text = L"OK";
			this->btnOk->Click += gcnew System::EventHandler(this, &SignUPForm::label8_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->AutoSize = true;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(424, 404);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 18);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->Click += gcnew System::EventHandler(this, &SignUPForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(467, 444);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(40, 16);
			this->llLogin->TabIndex = 5;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SignUPForm::llLogin_LinkClicked);
			// 
			// SignUPForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 478);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SignUPForm";
			this->Text = L"SignUPForm";
			this->Load += gcnew System::EventHandler(this, &SignUPForm::SignUPForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SignUPForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name= tbName->Text;
	String^ email = tbEmail->Text;
	String^ phone = tbPhone->Text;
	String^ address = tbAddress->Text;
	String^ password = tbPassword->Text;
	String^ confirmPassword = tbConfirmPassword->Text;
	 
	if (name->Length == 0 || email->Length == 0
		|| phone->Length == 0 || address->Length == 0
		|| password->Length == 0) {

		MessageBox::Show("Please Enter All the Fields",
			"On or more empty fields", MessageBoxButtons::OK);
		return;
	 }
	if (String::Compare(password, confirmPassword) != 0) {
		MessageBox::Show("Password and Confirm Password do not Match",
			"Password Error,", MessageBoxButtons::OK);
			return;
		 }

	try {
		String^ connString = "Data Source=localhost\\SQLEXPRESS02;Initial Catalog=master;Integrated Security=True;Encrypt=False";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users" +
			"(name,email,phone,address,password) VALUES " +
			"(@name,@email,@phone,@address,@password);";


		SqlCommand command( sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@address", address);
		command.Parameters->AddWithValue("@password", password);

		command.ExecuteNonQuery();
		user = gcnew User;
		user->name = name;
		user->email = email;
		user->phone = phone;
		user->address = address;
		user->password = password;

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to Sign Up new user",
			"Sign Up Failure", MessageBoxButtons::OK);
	}
} 
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	public:bool switchToLogin = false;
    private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	 this-> switchToLogin = true;
	 this->Close();
}
	 public: User^ user = nullptr;
};
}
