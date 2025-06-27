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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::TextBox^ textID;
	private: System::Windows::Forms::TextBox^ textFName;
	private: System::Windows::Forms::TextBox^ textLName;

	private: System::Windows::Forms::TextBox^ textDpt;
	private: System::Windows::Forms::TextBox^ textSpec;
	private: System::Windows::Forms::TextBox^ textLang;

	private: System::Windows::Forms::TextBox^ textVacSt;
	private: System::Windows::Forms::TextBox^ textVacEd;

	private: System::Windows::Forms::TextBox^ textEmail;
	private: System::Windows::Forms::TextBox^ textPhone;


	private: System::Windows::Forms::Button^ subButton;
	private: System::Windows::Forms::Button^ resetButton;
	private: System::Windows::Forms::Button^ btnsearch;
	private: System::Windows::Forms::ListBox^ lstOutput;
	








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
			this->textFName = (gcnew System::Windows::Forms::TextBox());
			this->textEmail = (gcnew System::Windows::Forms::TextBox());
			this->textPhone = (gcnew System::Windows::Forms::TextBox());
			this->subButton = (gcnew System::Windows::Forms::Button());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->btnsearch = (gcnew System::Windows::Forms::Button());
			this->lstOutput = (gcnew System::Windows::Forms::ListBox());
			this->textLName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textDpt = (gcnew System::Windows::Forms::TextBox());
			this->textSpec = (gcnew System::Windows::Forms::TextBox());
			this->textLang = (gcnew System::Windows::Forms::TextBox());
			this->textVacSt = (gcnew System::Windows::Forms::TextBox());
			this->textVacEd = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textID = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(81, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name:";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(107, 154);
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
			this->label3->Location = System::Drawing::Point(101, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Phone:";
			// 
			// textFName
			// 
			this->textFName->Location = System::Drawing::Point(154, 126);
			this->textFName->Name = L"textFName";
			this->textFName->Size = System::Drawing::Size(184, 20);
			this->textFName->TabIndex = 3;
			// 
			// textEmail
			// 
			this->textEmail->Location = System::Drawing::Point(154, 151);
			this->textEmail->Name = L"textEmail";
			this->textEmail->Size = System::Drawing::Size(184, 20);
			this->textEmail->TabIndex = 4;
			// 
			// textPhone
			// 
			this->textPhone->Location = System::Drawing::Point(154, 178);
			this->textPhone->Name = L"textPhone";
			this->textPhone->Size = System::Drawing::Size(184, 20);
			this->textPhone->TabIndex = 5;
			// 
			// subButton
			// 
			this->subButton->Location = System::Drawing::Point(51, 233);
			this->subButton->Name = L"subButton";
			this->subButton->Size = System::Drawing::Size(91, 35);
			this->subButton->TabIndex = 6;
			this->subButton->Text = L"Submit";
			this->subButton->UseVisualStyleBackColor = true;
			this->subButton->Click += gcnew System::EventHandler(this, &MainForm::subButton_Click);
			// 
			// resetButton
			// 
			this->resetButton->Location = System::Drawing::Point(148, 233);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(91, 35);
			this->resetButton->TabIndex = 7;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = true;
			this->resetButton->Click += gcnew System::EventHandler(this, &MainForm::resetButton_Click);
			// 
			// btnsearch
			// 
			this->btnsearch->Location = System::Drawing::Point(255, 233);
			this->btnsearch->Name = L"btnsearch";
			this->btnsearch->Size = System::Drawing::Size(81, 35);
			this->btnsearch->TabIndex = 8;
			this->btnsearch->Text = L"Search";
			this->btnsearch->UseVisualStyleBackColor = true;
			this->btnsearch->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// lstOutput
			// 
			this->lstOutput->FormattingEnabled = true;
			this->lstOutput->Location = System::Drawing::Point(40, 293);
			this->lstOutput->Name = L"lstOutput";
			this->lstOutput->Size = System::Drawing::Size(947, 264);
			this->lstOutput->TabIndex = 9;
			this->lstOutput->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBox1_SelectedIndexChanged);
			// 
			// textLName
			// 
			this->textLName->Location = System::Drawing::Point(433, 129);
			this->textLName->Name = L"textLName";
			this->textLName->Size = System::Drawing::Size(160, 20);
			this->textLName->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(356, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Last Name:";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// textDpt
			// 
			this->textDpt->Location = System::Drawing::Point(433, 154);
			this->textDpt->Name = L"textDpt";
			this->textDpt->Size = System::Drawing::Size(160, 20);
			this->textDpt->TabIndex = 12;
			// 
			// textSpec
			// 
			this->textSpec->Location = System::Drawing::Point(433, 180);
			this->textSpec->Name = L"textSpec";
			this->textSpec->Size = System::Drawing::Size(160, 20);
			this->textSpec->TabIndex = 13;
			// 
			// textLang
			// 
			this->textLang->Location = System::Drawing::Point(701, 129);
			this->textLang->Name = L"textLang";
			this->textLang->Size = System::Drawing::Size(147, 20);
			this->textLang->TabIndex = 14;
			// 
			// textVacSt
			// 
			this->textVacSt->Location = System::Drawing::Point(701, 153);
			this->textVacSt->Name = L"textVacSt";
			this->textVacSt->Size = System::Drawing::Size(147, 20);
			this->textVacSt->TabIndex = 15;
			// 
			// textVacEd
			// 
			this->textVacEd->Location = System::Drawing::Point(701, 178);
			this->textVacEd->Name = L"textVacEd";
			this->textVacEd->Size = System::Drawing::Size(147, 20);
			this->textVacEd->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(351, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Department:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(364, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Specialty:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(629, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Languges:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(629, 154);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Vac Start:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(629, 178);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Vac End:";
			// 
			// textID
			// 
			this->textID->Location = System::Drawing::Point(460, 82);
			this->textID->Name = L"textID";
			this->textID->Size = System::Drawing::Size(100, 20);
			this->textID->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(433, 82);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"ID:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(424, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(189, 26);
			this->label11->TabIndex = 24;
			this->label11->Text = L"-Doctor Database-";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1025, 590);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textID);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textVacEd);
			this->Controls->Add(this->textVacSt);
			this->Controls->Add(this->textLang);
			this->Controls->Add(this->textSpec);
			this->Controls->Add(this->textDpt);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textLName);
			this->Controls->Add(this->lstOutput);
			this->Controls->Add(this->btnsearch);
			this->Controls->Add(this->resetButton);
			this->Controls->Add(this->subButton);
			this->Controls->Add(this->textPhone);
			this->Controls->Add(this->textEmail);
			this->Controls->Add(this->textFName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->textName->Text = "";
		this->textEmail->Text = "";
		this->textPhone->Text = "";
	}
private: System::Void subButton_Click(System::Object^ sender, System::EventArgs^ e) {

	/*if (this->textLName->Text->Trim() == "")
	{
		MessageBox::Show("Please enter last name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else if (this->textEmail->Text->Trim() == "")
	{
		MessageBox::Show("Please enter email", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else if (this->textPhone->Text->Trim() == "")
	{
		MessageBox::Show("Please enter phone number", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else
	{
		try {
			String^ connectionstring = "Data Source=LOWORBITDRIFTER\\MSSQLSERVER01;Initial Catalog=DoctorDatabase;Integrated Security=True;Pooling=False;Encrypt=True;Trust Server Certificate=True";
			SqlConnection con(connectionstring);
			con.Open();
			String^ sqlquery = "Insert into UserRecord values('" + this->textID->Text +"','" + this->textFName->Text +"','"+this->textLName->Text +"','"+this->textPhone->Text +"','" + this->textVacSt->Text + "','" + '"+this->textVacEd->Text +"',
			+this->textEmail->Text + "''"+this->textDpt->Text +"','"+this->textSpec->Text +"', '"+this->textLang->Text +"')";

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
		
	}*/

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	/*try
	{
		String^ connectionstring = "Data Source=LOWORBITDRIFTER\MSSQLSERVER01;Initial Catalog=DoctorDatabase;Integrated Security=True;Pooling=False;Encrypt=True;Trust Server Certificate=True";
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
	}*/
	
}
	   String^ stdDetails = "{0,-10}{1,-13}{2,-13}{3,-15}{4,-15}{5,-15}{6,-17}{7,-17}{8,-17}{9,-19}";
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

	lstOutput->Items->Add(String::Format(stdDetails, "ID", "First", "Last", "Phone", "Vacation Start","Vacation End", "Email","Department", "Specialty", "Languages"));


	/*try
	{
		String^ connectionstring = "Data Source=LOWORBITDRIFTER\MSSQLSERVER01;Initial Catalog=DoctorDatabase;Integrated Security=True;Pooling=False;Encrypt=True;Trust Server Certificate=True";
		SqlConnection con(connectionstring);
		String^ sqlquery = "Select * from DoctorDatabase";
		SqlCommand cmd(sqlquery, % con);
		con.Open();
		SqlDataReader^ dr = cmd.ExecuteReader();

		if (dr->Read())
		{

		
			String^ result = dr["ID"]->ToString() + dr["First"]->ToString() + dr["Last"]->ToString() +  dr["Phone"]->ToString() + dr["VacSt"]->ToString() + dr["Email"]->ToString();

			lstOutput->Items->Add(String::Format(stdDetails,""));
			dr->Close();
			
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
	}*/

}

	  
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
