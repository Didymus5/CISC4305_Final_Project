#pragma once

namespace IKGContacts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainwindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuMain;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  importToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  grpSearch;
	private: System::Windows::Forms::TextBox^  txtSearch;

	private: System::Windows::Forms::ListBox^  lbxSearchBy;
	private: System::Windows::Forms::GroupBox^  grpResults;
	private: System::Windows::Forms::TextBox^  txtResults;



	private: System::Windows::Forms::Button^  btnSearch;
	private: System::Windows::Forms::Button^  btnClear;

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
			this->menuMain = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grpSearch = (gcnew System::Windows::Forms::GroupBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->lbxSearchBy = (gcnew System::Windows::Forms::ListBox());
			this->grpResults = (gcnew System::Windows::Forms::GroupBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->txtResults = (gcnew System::Windows::Forms::TextBox());
			this->menuMain->SuspendLayout();
			this->grpSearch->SuspendLayout();
			this->grpResults->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuMain
			// 
			this->menuMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuMain->Location = System::Drawing::Point(0, 0);
			this->menuMain->Name = L"menuMain";
			this->menuMain->Size = System::Drawing::Size(520, 24);
			this->menuMain->TabIndex = 0;
			this->menuMain->Text = L"Main Menu";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->importToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// importToolStripMenuItem
			// 
			this->importToolStripMenuItem->Name = L"importToolStripMenuItem";
			this->importToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->importToolStripMenuItem->Text = L"Import";
			this->importToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::importToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::aboutToolStripMenuItem_Click);
			// 
			// grpSearch
			// 
			this->grpSearch->Controls->Add(this->btnSearch);
			this->grpSearch->Controls->Add(this->txtSearch);
			this->grpSearch->Controls->Add(this->lbxSearchBy);
			this->grpSearch->Location = System::Drawing::Point(17, 38);
			this->grpSearch->Name = L"grpSearch";
			this->grpSearch->Size = System::Drawing::Size(488, 88);
			this->grpSearch->TabIndex = 1;
			this->grpSearch->TabStop = false;
			this->grpSearch->Text = L"Search By";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(6, 49);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(476, 33);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MainWindow::btnSearch_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(124, 19);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(358, 26);
			this->txtSearch->TabIndex = 2;
			// 
			// lbxSearchBy
			// 
			this->lbxSearchBy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbxSearchBy->FormattingEnabled = true;
			this->lbxSearchBy->ItemHeight = 20;
			this->lbxSearchBy->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Title", L"Full Name", L"Nationality", L"State",
					L"Country", L"Email", L"Phone", L"Race"
			});
			this->lbxSearchBy->Location = System::Drawing::Point(6, 19);
			this->lbxSearchBy->Name = L"lbxSearchBy";
			this->lbxSearchBy->Size = System::Drawing::Size(112, 24);
			this->lbxSearchBy->TabIndex = 1;
			// 
			// grpResults
			// 
			this->grpResults->Controls->Add(this->btnClear);
			this->grpResults->Controls->Add(this->txtResults);
			this->grpResults->Location = System::Drawing::Point(14, 143);
			this->grpResults->Name = L"grpResults";
			this->grpResults->Size = System::Drawing::Size(491, 310);
			this->grpResults->TabIndex = 2;
			this->grpResults->TabStop = false;
			this->grpResults->Text = L"Results";
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(9, 267);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(476, 33);
			this->btnClear->TabIndex = 4;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainWindow::btnClear_Click);
			// 
			// txtResults
			// 
			this->txtResults->Enabled = false;
			this->txtResults->Location = System::Drawing::Point(9, 19);
			this->txtResults->Multiline = true;
			this->txtResults->Name = L"txtResults";
			this->txtResults->ReadOnly = true;
			this->txtResults->Size = System::Drawing::Size(476, 242);
			this->txtResults->TabIndex = 0;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 468);
			this->Controls->Add(this->grpResults);
			this->Controls->Add(this->grpSearch);
			this->Controls->Add(this->menuMain);
			this->MainMenuStrip = this->menuMain;
			this->Name = L"MainWindow";
			this->Text = L"IKGContacts";
			this->menuMain->ResumeLayout(false);
			this->menuMain->PerformLayout();
			this->grpSearch->ResumeLayout(false);
			this->grpSearch->PerformLayout();
			this->grpResults->ResumeLayout(false);
			this->grpResults->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
		txtResults->Clear();
	}
	private: System::Void importToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
