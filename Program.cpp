
#include "LoginForm.h"
#include "MyForm.h"
#include "SignUpForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FutureFunds::LoginForm1 loginForm;

	User^ user = nullptr;
	while (true) {
		FutureFunds::LoginForm1 loginForm;
		loginForm.ShowDialog();

		if (loginForm. switchToSignUp) {
			FutureFunds::SignUPForm signupForm;
			signupForm.ShowDialog();

			if (signupForm.switchToLogin) {

		 }

		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		FutureFunds::MyForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);

	}
}