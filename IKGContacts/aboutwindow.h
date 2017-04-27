#pragma once

namespace IKGContacts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for about
	/// </summary>
	public ref class AboutWindow : public System::Windows::Forms::Form
	{
	public:
		AboutWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			txtDev->AppendText(gcnew String("adsharpesr\n"));
			txtDev->AppendText(gcnew String("critz95\n"));
			txtDev->AppendText(gcnew String("thomas_farnham\n"));
			txtDev->AppendText(gcnew String("tjoe1985\n"));
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AboutWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  grpDev;
	private: System::Windows::Forms::TextBox^  txtDev;
	protected:

	private: System::Windows::Forms::Label^  lblDev;

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
			this->grpDev = (gcnew System::Windows::Forms::GroupBox());
			this->txtDev = (gcnew System::Windows::Forms::TextBox());
			this->lblDev = (gcnew System::Windows::Forms::Label());
			this->grpDev->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpDev
			// 
			this->grpDev->Controls->Add(this->txtDev);
			this->grpDev->Controls->Add(this->lblDev);
			this->grpDev->Location = System::Drawing::Point(12, 12);
			this->grpDev->Name = L"grpDev";
			this->grpDev->Size = System::Drawing::Size(260, 237);
			this->grpDev->TabIndex = 0;
			this->grpDev->TabStop = false;
			this->grpDev->Text = L"Developed by:";
			// 
			// txtDev
			// 
			this->txtDev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDev->Location = System::Drawing::Point(6, 42);
			this->txtDev->Multiline = true;
			this->txtDev->Name = L"txtDev";
			this->txtDev->ReadOnly = true;
			this->txtDev->Size = System::Drawing::Size(248, 189);
			this->txtDev->TabIndex = 1;
			// 
			// lblDev
			// 
			this->lblDev->AutoSize = true;
			this->lblDev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDev->Location = System::Drawing::Point(6, 26);
			this->lblDev->Name = L"lblDev";
			this->lblDev->Size = System::Drawing::Size(83, 13);
			this->lblDev->TabIndex = 0;
			this->lblDev->Text = L"Tommy\'s Typers";
			// 
			// AboutWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->grpDev);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AboutWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"About";
			this->grpDev->ResumeLayout(false);
			this->grpDev->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
