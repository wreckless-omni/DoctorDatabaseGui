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








	private: System::Windows::Forms::TextBox^ textEmail;
	private: System::Windows::Forms::TextBox^ textPhone;


	private: System::Windows::Forms::Button^ subButton;
	private: System::Windows::Forms::Button^ resetButton;
	private: System::Windows::Forms::Button^ btnLNsearch;

	private: System::Windows::Forms::ListBox^ lstOutput;
	private: System::Windows::Forms::ComboBox^ specBox;
	private: System::Windows::Forms::ComboBox^ deptBox;
	private: System::Windows::Forms::ComboBox^ langBox;
	private: System::Windows::Forms::DateTimePicker^ vacStart;
	private: System::Windows::Forms::DateTimePicker^ vacEnd;
	private: System::Windows::Forms::TextBox^ textSrchLName;
	private: System::Windows::Forms::TextBox^ textSrchID;

	private: System::Windows::Forms::Button^ btnsrchID;













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
			this->btnLNsearch = (gcnew System::Windows::Forms::Button());
			this->lstOutput = (gcnew System::Windows::Forms::ListBox());
			this->textLName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textID = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->specBox = (gcnew System::Windows::Forms::ComboBox());
			this->deptBox = (gcnew System::Windows::Forms::ComboBox());
			this->langBox = (gcnew System::Windows::Forms::ComboBox());
			this->vacStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->vacEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->textSrchLName = (gcnew System::Windows::Forms::TextBox());
			this->textSrchID = (gcnew System::Windows::Forms::TextBox());
			this->btnsrchID = (gcnew System::Windows::Forms::Button());
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
			this->textPhone->TextChanged += gcnew System::EventHandler(this, &MainForm::textPhone_TextChanged);
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
			// btnLNsearch
			// 
			this->btnLNsearch->Location = System::Drawing::Point(598, 213);
			this->btnLNsearch->Name = L"btnLNsearch";
			this->btnLNsearch->Size = System::Drawing::Size(115, 20);
			this->btnLNsearch->TabIndex = 8;
			this->btnLNsearch->Text = L"Search Last Name";
			this->btnLNsearch->UseVisualStyleBackColor = true;
			this->btnLNsearch->Click += gcnew System::EventHandler(this, &MainForm::btnLNsearch_Click);
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
			this->textID->Location = System::Drawing::Point(155, 103);
			this->textID->Name = L"textID";
			this->textID->Size = System::Drawing::Size(100, 20);
			this->textID->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(128, 103);
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
			// specBox
			// 
			this->specBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->specBox->FormattingEnabled = true;
			this->specBox->Location = System::Drawing::Point(433, 176);
			this->specBox->Name = L"specBox";
			this->specBox->Size = System::Drawing::Size(160, 21);
			this->specBox->TabIndex = 25;
			this->specBox->Text = L"Select a Specialty";
			this->specBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox1_SelectedIndexChanged);
			// 
			// deptBox
			// 
			this->deptBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deptBox->FormattingEnabled = true;
			this->deptBox->Location = System::Drawing::Point(433, 151);
			this->deptBox->Name = L"deptBox";
			this->deptBox->Size = System::Drawing::Size(160, 21);
			this->deptBox->TabIndex = 26;
			this->deptBox->Tag = L"";
			this->deptBox->Text = L"Select a Dept.";
			this->deptBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::deptBox_SelectedIndexChanged);
			// 
			// langBox
			// 
			this->langBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->langBox->FormattingEnabled = true;
			this->langBox->Location = System::Drawing::Point(701, 126);
			this->langBox->Name = L"langBox";
			this->langBox->Size = System::Drawing::Size(147, 21);
			this->langBox->TabIndex = 27;
			this->langBox->Text = L"Select a Language";
			// 
			// vacStart
			// 
			this->vacStart->Checked = false;
			this->vacStart->Location = System::Drawing::Point(701, 153);
			this->vacStart->Name = L"vacStart";
			this->vacStart->ShowCheckBox = true;
			this->vacStart->Size = System::Drawing::Size(200, 20);
			this->vacStart->TabIndex = 28;
			this->vacStart->ValueChanged += gcnew System::EventHandler(this, &MainForm::vacStart_ValueChanged);
			// 
			// vacEnd
			// 
			this->vacEnd->Checked = false;
			this->vacEnd->Location = System::Drawing::Point(701, 176);
			this->vacEnd->Name = L"vacEnd";
			this->vacEnd->ShowCheckBox = true;
			this->vacEnd->Size = System::Drawing::Size(200, 20);
			this->vacEnd->TabIndex = 29;
			// 
			// textSrchLName
			// 
			this->textSrchLName->Location = System::Drawing::Point(720, 213);
			this->textSrchLName->Name = L"textSrchLName";
			this->textSrchLName->Size = System::Drawing::Size(100, 20);
			this->textSrchLName->TabIndex = 30;
			// 
			// textSrchID
			// 
			this->textSrchID->Location = System::Drawing::Point(720, 240);
			this->textSrchID->Name = L"textSrchID";
			this->textSrchID->Size = System::Drawing::Size(100, 20);
			this->textSrchID->TabIndex = 31;
			// 
			// btnsrchID
			// 
			this->btnsrchID->Location = System::Drawing::Point(598, 240);
			this->btnsrchID->Name = L"btnsrchID";
			this->btnsrchID->Size = System::Drawing::Size(115, 23);
			this->btnsrchID->TabIndex = 32;
			this->btnsrchID->Text = L"Search ID";
			this->btnsrchID->UseVisualStyleBackColor = true;
			this->btnsrchID->Click += gcnew System::EventHandler(this, &MainForm::btnsrchID_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1025, 590);
			this->Controls->Add(this->btnsrchID);
			this->Controls->Add(this->textSrchID);
			this->Controls->Add(this->textSrchLName);
			this->Controls->Add(this->vacEnd);
			this->Controls->Add(this->vacStart);
			this->Controls->Add(this->langBox);
			this->Controls->Add(this->deptBox);
			this->Controls->Add(this->specBox);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textID);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textLName);
			this->Controls->Add(this->lstOutput);
			this->Controls->Add(this->btnLNsearch);
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

		String^ stdDetails = "{0,-10}{1,-13}{2,-13}{3,-15}{4,-15}{5,-15}{6,-17}{7,-17}{8,-17}{9,-19}";

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textID->Text = "";
		this->textFName->Text = "";
		this->textLName->Text = "";
		this->textEmail->Text = "";
		this->textPhone->Text = "";
		this->vacStart->Text = "";
		this->vacEnd->Text = "";
		this->textEmail->Text = "";
		this->deptBox->Text = "";
		this->specBox->Text = "";
		this->langBox->Text = "";

	}
private: System::Void subButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->textLName->Text->Trim() == "")
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
			String^ connectionstring = "Data Source=LOWORBITDRIFTER\\MSSQLSERVER01;Initial Catalog=DoctorDatabase;Integrated Security=True;Pooling=False;Encrypt=True;TrustServerCertificate=True";
			SqlConnection con(connectionstring);
			con.Open();
			String^ sqlquery = "Insert into DoctorDatabase values('" + this->textID->Text +"','" + this->textFName->Text +"','"+this->textLName->Text +"','"+this->textPhone->Text +"','" + this->vacStart->Text + "', '" + this->vacEnd->Text + "' , '" + this->textEmail->Text + "', '" + this->deptBox->Text + "', '" + this->specBox->Text + "', '" + this->langBox->Text + "')";
				

			SqlCommand cmd(sqlquery, % con);
			cmd.ExecuteNonQuery();
			con.Close();
			MessageBox::Show("Data submitted successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
			
		}
		catch (Exception^ ex) 
		{
			throw ex;
		}

		

		try
		{
			String^ connectionstring = "Data Source=LOWORBITDRIFTER\\MSSQLSERVER01;Initial Catalog=DoctorDatabase;Integrated Security=True;Pooling=False;Encrypt=True;TrustServerCertificate=True";
			SqlConnection con(connectionstring);
			String^ sqlquery = "Select * from DoctorDatabase";
			SqlCommand cmd(sqlquery, % con);
			con.Open();
			SqlDataReader^ dr = cmd.ExecuteReader();

			if (dr->Read())
			{
				lstOutput->Items->Clear();
				lstOutput->Items->Add(String::Format(stdDetails, "ID", "First", "Last", "Phone", "Vacation Start", "Vacation End", "Email", "Department", "Specialty", "Language"));

				lstOutput->Items->Add(String::Format(stdDetails, dr["ID"]->ToString(), dr["First"]->ToString(), dr["Last"]->ToString(), dr["Phone"]->ToString(), dr["VacationSt"]->ToString(), dr["VacationEd"]->ToString(), dr["Email"]->ToString(), dr["Department"]->ToString(), dr["Specialty"]->ToString(), dr["Language"]->ToString()));

				while (dr->Read()) {

					lstOutput->Items->Add(String::Format(stdDetails, dr["ID"]->ToString(), dr["First"]->ToString(), dr["Last"]->ToString(), dr["Phone"]->ToString(), dr["VacationSt"]->ToString(), dr["VacationEd"]->ToString(), dr["Email"]->ToString(), dr["Department"]->ToString(), dr["Specialty"]->ToString(), dr["Language"]->ToString()));
				}
				dr->Close();

			}
			else
			{
				dr->Close();
				MessageBox::Show("Database is empty", "No data found", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			con.Close();
		}
		catch (Exception^ ex)
		{

			throw ex;
		}
		
	}



}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/* \\\\add way to display by itself in main window
	try
	{
		String^ connectionstring = "Data Source=LOWORBITDRIFTER\MSSQLSERVER01;Initial Catalog=DoctorDatabase;Integrated Security=True;Pooling=False;Encrypt=True;Trust Server Certificate=True";
		SqlConnection con(connectionstring);
		String^ sqlLNamequery = "Select * from DoctorDatabase where textLName like '%"+this-> textSrchLName->Text+"%'";
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
	 //  String^ stdDetails = "{0,-10}{1,-13}{2,-13}{3,-15}{4,-15}{5,-15}{6,-17}{7,-17}{8,-17}{9,-19}";
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

	String^ ID = textID->Text;
	String^ First = textFName->Text;
	String^ Last = textLName->Text;
	String^ Phone = textPhone->Text;
	String^ VacST = vacStart->Text;
	String^ VacED = vacEnd->Text;
	String^ Email = textEmail->Text;
	String^ Dept = deptBox->Text;
	String^ Spec = specBox->Text;
	String^ Lang = langBox->Text;

	lstOutput->Items->Add(String::Format(stdDetails, "ID", "First", "Last", "Phone", "Vacation Start","Vacation End", "Email","Department", "Specialty", "Language"));

	deptBox->Items->Add("Oncology");
	deptBox->Items->Add("Surgery");
	deptBox->Items->Add("Rehab");

	specBox->Items->Add("otolaryngologist");
	specBox->Items->Add("Podiatrist");
	specBox->Items->Add("Neurologist");

	langBox->Items->Add("English");
	langBox->Items->Add("Spanish");
	langBox->Items->Add("French");
	langBox->Items->Add("Italian");


	try
	{
		String^ connectionstring = "Data Source=LOWORBITDRIFTER\\MSSQLSERVER01;Initial Catalog=DoctorDatabase;Integrated Security=True;Pooling=False;Encrypt=True;TrustServerCertificate=True";
		SqlConnection con(connectionstring);
		String^ sqlquery = "Select * from DoctorDatabase";
		SqlCommand cmd(sqlquery, % con);
		con.Open();
		SqlDataReader^ dr = cmd.ExecuteReader();

		if (dr->Read())
		{
			lstOutput->Items->Add(String::Format(stdDetails, dr["ID"]->ToString(), dr["First"]->ToString(), dr["Last"]->ToString(), dr["Phone"]->ToString(), dr["VacationSt"]->ToString(), dr["VacationEd"]->ToString(), dr["Email"]->ToString(), dr["Department"]->ToString(), dr["Specialty"]->ToString(), dr["Language"]->ToString()));

				while (dr->Read()) {

					lstOutput->Items->Add(String::Format(stdDetails, dr["ID"]->ToString(), dr["First"]->ToString(), dr["Last"]->ToString(), dr["Phone"]->ToString(), dr["VacationSt"]->ToString(), dr["VacationEd"]->ToString(), dr["Email"]->ToString(), dr["Department"]->ToString(), dr["Specialty"]->ToString(), dr["Language"]->ToString()));
				}
			dr->Close();
			
		}
		else
		{
			dr->Close();
			MessageBox::Show("Database is empty", "No data found", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		con.Close();
	}
	catch (Exception^ ex)
	{

		throw ex;
	}

}

	  
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textPhone_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void deptBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void vacStart_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnsrchID_Click(System::Object^ sender, System::EventArgs^ e) {
	/* \\\\\\add way to display by itself in main window
	try
	{
		String^ connectionstring = "Data Source=LOWORBITDRIFTER\MSSQLSERVER01;Initial Catalog=DoctorDatabase;Integrated Security=True;Pooling=False;Encrypt=True;Trust Server Certificate=True";
		SqlConnection con(connectionstring);
		String^ sqlLNamequery = "Select * from DoctorDatabase where textID like '%"+this-> textSrchID->Text+"%'";
		SqlCommand cmd(sqlquery, % con);
		con.Open();
		SqlDataReader^ dr = cmd.ExecuteReader();

		if (dr->Read())
		{
			String^ result = dr["ID"]->ToString() + dr["First"]->ToString() + dr["Last"]->ToString() +  dr["Phone"]->ToString() + dr["VacationSt"]->ToString() + dr["VacationEd"]->ToString() + dr["Email"]->ToString() + dr["Department"]->ToString() + dr["Specialty"]->ToString() + dr["Language"]->ToString();

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
private: System::Void btnLNsearch_Click(System::Object^ sender, System::EventArgs^ e) {

	/* \\\\add way to display by itself in main window
	try
	{
		String^ connectionstring = "Data Source=LOWORBITDRIFTER\MSSQLSERVER01;Initial Catalog=DoctorDatabase;Integrated Security=True;Pooling=False;Encrypt=True;Trust Server Certificate=True";
		SqlConnection con(connectionstring);
		String^ sqlLNamequery = "Select * from DoctorDatabase where textLName like '%"+this-> textSrchLName->Text+"%'";
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
};
}
