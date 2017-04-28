#pragma once

#include <msclr\marshal_cppstd.h>
#include "ContactList.h"

namespace IKGContacts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addcontact
	/// </summary>
	public ref class AddContact : public System::Windows::Forms::Form
	{
		ContactList* m_pcContactList;

	public:
		AddContact(ContactList& cContactList)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lstTitle->SelectedIndex = 1;

			m_pcContactList = &cContactList;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddContact()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  grpName;
	protected:
	private: System::Windows::Forms::TextBox^  txtLastName;
	private: System::Windows::Forms::TextBox^  txtFirstName;
	private: System::Windows::Forms::ListBox^  lstTitle;

	private: System::Windows::Forms::Label^  lblLastName;
	private: System::Windows::Forms::Label^  lblFirstName;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::GroupBox^  grpContact;
	private: System::Windows::Forms::GroupBox^  grpOrigin;
	private: System::Windows::Forms::TextBox^  txtPhone;

	private: System::Windows::Forms::TextBox^  txtEmail;

	private: System::Windows::Forms::Label^  lblPhone;
	private: System::Windows::Forms::Label^  lblEmail;
	private: System::Windows::Forms::TextBox^  txtRace;

	private: System::Windows::Forms::TextBox^  txtNation;
	private: System::Windows::Forms::Label^  lblRace;


	private: System::Windows::Forms::Label^  lblNation;

	private: System::Windows::Forms::TextBox^  txtCountry;

	private: System::Windows::Forms::TextBox^  txtState;
	private: System::Windows::Forms::Label^  lblCountry;


	private: System::Windows::Forms::Label^  lblState;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnCancel;

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
			this->grpName = (gcnew System::Windows::Forms::GroupBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lstTitle = (gcnew System::Windows::Forms::ListBox());
			this->lblLastName = (gcnew System::Windows::Forms::Label());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->grpContact = (gcnew System::Windows::Forms::GroupBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->grpOrigin = (gcnew System::Windows::Forms::GroupBox());
			this->txtRace = (gcnew System::Windows::Forms::TextBox());
			this->txtNation = (gcnew System::Windows::Forms::TextBox());
			this->lblRace = (gcnew System::Windows::Forms::Label());
			this->lblNation = (gcnew System::Windows::Forms::Label());
			this->txtCountry = (gcnew System::Windows::Forms::TextBox());
			this->txtState = (gcnew System::Windows::Forms::TextBox());
			this->lblCountry = (gcnew System::Windows::Forms::Label());
			this->lblState = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->grpName->SuspendLayout();
			this->grpContact->SuspendLayout();
			this->grpOrigin->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpName
			// 
			this->grpName->Controls->Add(this->txtLastName);
			this->grpName->Controls->Add(this->txtFirstName);
			this->grpName->Controls->Add(this->lstTitle);
			this->grpName->Controls->Add(this->lblLastName);
			this->grpName->Controls->Add(this->lblFirstName);
			this->grpName->Controls->Add(this->lblTitle);
			this->grpName->Location = System::Drawing::Point(12, 12);
			this->grpName->Name = L"grpName";
			this->grpName->Size = System::Drawing::Size(330, 105);
			this->grpName->TabIndex = 0;
			this->grpName->TabStop = false;
			this->grpName->Text = L"Name Info";
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(121, 71);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(183, 20);
			this->txtLastName->TabIndex = 5;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(121, 46);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(183, 20);
			this->txtFirstName->TabIndex = 4;
			// 
			// lstTitle
			// 
			this->lstTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstTitle->FormattingEnabled = true;
			this->lstTitle->ItemHeight = 20;
			this->lstTitle->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Dr.", L"Mr.", L"Mrs.", L"Ms." });
			this->lstTitle->Location = System::Drawing::Point(70, 16);
			this->lstTitle->Name = L"lstTitle";
			this->lstTitle->Size = System::Drawing::Size(63, 24);
			this->lstTitle->TabIndex = 3;
			// 
			// lblLastName
			// 
			this->lblLastName->AutoSize = true;
			this->lblLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLastName->Location = System::Drawing::Point(14, 71);
			this->lblLastName->Name = L"lblLastName";
			this->lblLastName->Size = System::Drawing::Size(101, 22);
			this->lblLastName->TabIndex = 2;
			this->lblLastName->Text = L"Last Name:";
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFirstName->Location = System::Drawing::Point(14, 47);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(102, 22);
			this->lblFirstName->TabIndex = 1;
			this->lblFirstName->Text = L"First Name:";
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(14, 16);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(50, 22);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Title:";
			// 
			// grpContact
			// 
			this->grpContact->Controls->Add(this->txtPhone);
			this->grpContact->Controls->Add(this->txtEmail);
			this->grpContact->Controls->Add(this->lblPhone);
			this->grpContact->Controls->Add(this->lblEmail);
			this->grpContact->Location = System::Drawing::Point(12, 123);
			this->grpContact->Name = L"grpContact";
			this->grpContact->Size = System::Drawing::Size(330, 74);
			this->grpContact->TabIndex = 1;
			this->grpContact->TabStop = false;
			this->grpContact->Text = L"Contact Info";
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(82, 40);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(183, 20);
			this->txtPhone->TabIndex = 9;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(81, 13);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(183, 20);
			this->txtEmail->TabIndex = 8;
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(15, 40);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(67, 22);
			this->lblPhone->TabIndex = 7;
			this->lblPhone->Text = L"Phone:";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(15, 16);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(59, 22);
			this->lblEmail->TabIndex = 6;
			this->lblEmail->Text = L"Email:";
			// 
			// grpOrigin
			// 
			this->grpOrigin->Controls->Add(this->txtRace);
			this->grpOrigin->Controls->Add(this->txtNation);
			this->grpOrigin->Controls->Add(this->lblRace);
			this->grpOrigin->Controls->Add(this->lblNation);
			this->grpOrigin->Controls->Add(this->txtCountry);
			this->grpOrigin->Controls->Add(this->txtState);
			this->grpOrigin->Controls->Add(this->lblCountry);
			this->grpOrigin->Controls->Add(this->lblState);
			this->grpOrigin->Location = System::Drawing::Point(12, 203);
			this->grpOrigin->Name = L"grpOrigin";
			this->grpOrigin->Size = System::Drawing::Size(330, 121);
			this->grpOrigin->TabIndex = 2;
			this->grpOrigin->TabStop = false;
			this->grpOrigin->Text = L"Origin Info";
			// 
			// txtRace
			// 
			this->txtRace->Location = System::Drawing::Point(69, 92);
			this->txtRace->Name = L"txtRace";
			this->txtRace->Size = System::Drawing::Size(183, 20);
			this->txtRace->TabIndex = 17;
			// 
			// txtNation
			// 
			this->txtNation->Location = System::Drawing::Point(111, 66);
			this->txtNation->Name = L"txtNation";
			this->txtNation->Size = System::Drawing::Size(183, 20);
			this->txtNation->TabIndex = 16;
			// 
			// lblRace
			// 
			this->lblRace->AutoSize = true;
			this->lblRace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRace->Location = System::Drawing::Point(6, 90);
			this->lblRace->Name = L"lblRace";
			this->lblRace->Size = System::Drawing::Size(57, 22);
			this->lblRace->TabIndex = 15;
			this->lblRace->Text = L"Race:";
			// 
			// lblNation
			// 
			this->lblNation->AutoSize = true;
			this->lblNation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNation->Location = System::Drawing::Point(6, 64);
			this->lblNation->Name = L"lblNation";
			this->lblNation->Size = System::Drawing::Size(99, 22);
			this->lblNation->TabIndex = 14;
			this->lblNation->Text = L"Nationality:";
			// 
			// txtCountry
			// 
			this->txtCountry->Location = System::Drawing::Point(90, 40);
			this->txtCountry->Name = L"txtCountry";
			this->txtCountry->Size = System::Drawing::Size(183, 20);
			this->txtCountry->TabIndex = 13;
			// 
			// txtState
			// 
			this->txtState->Location = System::Drawing::Point(69, 14);
			this->txtState->Name = L"txtState";
			this->txtState->Size = System::Drawing::Size(183, 20);
			this->txtState->TabIndex = 12;
			// 
			// lblCountry
			// 
			this->lblCountry->AutoSize = true;
			this->lblCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCountry->Location = System::Drawing::Point(6, 38);
			this->lblCountry->Name = L"lblCountry";
			this->lblCountry->Size = System::Drawing::Size(78, 22);
			this->lblCountry->TabIndex = 11;
			this->lblCountry->Text = L"Country:";
			// 
			// lblState
			// 
			this->lblState->AutoSize = true;
			this->lblState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblState->Location = System::Drawing::Point(6, 12);
			this->lblState->Name = L"lblState";
			this->lblState->Size = System::Drawing::Size(57, 22);
			this->lblState->TabIndex = 10;
			this->lblState->Text = L"State:";
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(12, 330);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(162, 32);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddContact::btnAdd_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(180, 330);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(162, 32);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddContact::btnCancel_Click);
			// 
			// AddContact
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 372);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->grpOrigin);
			this->Controls->Add(this->grpContact);
			this->Controls->Add(this->grpName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddContact";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Add Contact";
			this->grpName->ResumeLayout(false);
			this->grpName->PerformLayout();
			this->grpContact->ResumeLayout(false);
			this->grpContact->PerformLayout();
			this->grpOrigin->ResumeLayout(false);
			this->grpOrigin->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		Form::Close();
	}

	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((txtFirstName->Text == "") || (txtLastName->Text == "")) {
			MessageBox::Show("Please fill in the Name Info section completely.",
				"Message", MessageBoxButtons::OKCancel,
				MessageBoxIcon::Exclamation);
		}
		else {
			std::string title = msclr::interop::marshal_as<std::string>(lstTitle->SelectedItem->ToString());
			std::string fName = msclr::interop::marshal_as<std::string>(txtFirstName->Text);
			std::string lName = msclr::interop::marshal_as<std::string>(txtLastName->Text);
			std::string nationality = msclr::interop::marshal_as<std::string>(txtNation->Text);
			std::string state = msclr::interop::marshal_as<std::string>(txtState->Text);
			std::string country = msclr::interop::marshal_as<std::string>(txtCountry->Text);
			std::string email = msclr::interop::marshal_as<std::string>(txtEmail->Text);
			std::string phoneNumber = msclr::interop::marshal_as<std::string>(txtPhone->Text);
			std::string race = msclr::interop::marshal_as<std::string>(txtRace->Text);

			std::string zAll;

			zAll += "|";
			zAll += (title + "|");
			zAll += (fName + "|");
			zAll += (lName + "|");
			zAll += (nationality + "|");
			zAll += (state + "|");
			zAll += (country + "|");
			zAll += (email + "|");
			zAll += (phoneNumber + "|");
			zAll += (race + "|");
			zAll += "/n";

			m_pcContactList->AddContact(Contact(zAll));

			Form::Close();
		}
	}
};
}
