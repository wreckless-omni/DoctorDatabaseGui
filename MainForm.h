#pragma once

namespace DatabaseFormProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::TextBox^ textEmail;
	private: System::Windows::Forms::TextBox^ textPhone;
	private: System::Windows::Forms::Button^ subButton;
	private: System::Windows::Forms::Button^ resetButton;
	private: System::Windows::Forms::Button^ btnsearch;





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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->textEmail = (gcnew System::Windows::Forms::TextBox());
			this->textPhone = (gcnew System::Windows::Forms::TextBox());
			this->subButton = (gcnew System::Windows::Forms::Button());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->btnsearch = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Full Name:";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(63, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(57, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Phone:";
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(110, 63);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(184, 20);
			this->textName->TabIndex = 3;
			// 
			// textEmail
			// 
			this->textEmail->Location = System::Drawing::Point(110, 88);
			this->textEmail->Name = L"textEmail";
			this->textEmail->Size = System::Drawing::Size(184, 20);
			this->textEmail->TabIndex = 4;
			// 
			// textPhone
			// 
			this->textPhone->Location = System::Drawing::Point(110, 115);
			this->textPhone->Name = L"textPhone";
			this->textPhone->Size = System::Drawing::Size(184, 20);
			this->textPhone->TabIndex = 5;
			// 
			// subButton
			// 
			this->subButton->Location = System::Drawing::Point(124, 165);
			this->subButton->Name = L"subButton";
			this->subButton->Size = System::Drawing::Size(91, 35);
			this->subButton->TabIndex = 6;
			this->subButton->Text = L"Submit";
			this->subButton->UseVisualStyleBackColor = true;
			this->subButton->Click += gcnew System::EventHandler(this, &MainForm::subButton_Click);
			// 
			// resetButton
			// 
			this->resetButton->Location = System::Drawing::Point(221, 165);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(91, 35);
			this->resetButton->TabIndex = 7;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = true;
			this->resetButton->Click += gcnew System::EventHandler(this, &MainForm::resetButton_Click);
			// 
			// btnsearch
			// 
			this->btnsearch->Location = System::Drawing::Point(314, 61);
			this->btnsearch->Name = L"btnsearch";
			this->btnsearch->Size = System::Drawing::Size(75, 23);
			this->btnsearch->TabIndex = 8;
			this->btnsearch->Text = L"Search";
			this->btnsearch->UseVisualStyleBackColor = true;
			this->btnsearch->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 295);
			this->Controls->Add(this->btnsearch);
			this->Controls->Add(this->resetButton);
			this->Controls->Add(this->subButton);
			this->Controls->Add(this->textPhone);
			this->Controls->Add(this->textEmail);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textName->Text = "";
		this->textEmail->Text = "";
		this->textPhone->Text = "";
	}
private: System::Void subButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->textName->Text->Trim() == "")
	{
		MessageBox::Show("Please enter your full name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else if (this->textEmail->Text->Trim() == "")
	{
		MessageBox::Show("Please enter your email", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else if (this->textPhone->Text->Trim() == "")
	{
		MessageBox::Show("Please enter your phone number", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else
	{
		try {
			String^ connectionstring = "Data Source=LOWORBITDRIFTER\\MSSQLSERVER01;Initial Catalog=master;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection con(connectionstring);
			con.Open();
			String^ sqlquery = "Insert into UserRecord values('"+this->textName->Text +"','" + this->textEmail->Text + "','" + this->textPhone->Text + "')";
			SqlCommand cmd(sqlquery, % con);
			cmd.ExecuteNonQuery();
			con.Close();
			MessageBox::Show("Data submitted successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->textName->Text = "";
			this->textEmail->Text = "";
			this->textPhone->Text = "";

		}
		catch (Exception^ ex) 
		{
			throw ex;
		}

	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try 
	{
		String^ connectionstring = "Data Source=LOWORBITDRIFTER\\MSSQLSERVER01;Initial Catalog=master;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection con(connectionstring);
		String^ sqlquery = "Select * from UserRecord where FullName like '%"+this-> textName->Text+"%'";
		SqlCommand cmd(sqlquery, % con);
		con.Open();
		SqlDataReader^ dr = cmd.ExecuteReader();

		if (dr->Read())
		{
			String^ result = "Full Name : " + dr["FullName"]->ToString() + "\nEmail : " + dr["Email"]->ToString() + ",\nPhone : " + dr["Phone"]->ToString();
			dr->Close();
			MessageBox::Show(result, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else 
		{
			dr->Close();
			MessageBox::Show("No data found", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		con.Close();
	}
	catch (Exception^ ex) 
	{

		throw ex;
	}
	
}
};
}
