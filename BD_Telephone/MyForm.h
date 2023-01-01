#include "EditModel.h"
#pragma once

namespace Forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace BD_Telephone;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			try {
				//Con = gcnew SqlConnection("Data Source=.\\SQLEXPRESS;Initial Catalog=mobile;User ID=sa;Password=111");
				//Con = gcnew SqlConnection("Data Source = (localdb)\MSSQLLocalDB; Initial Catalog = base_telephone; Integrated Security = True; Pooling = False");
				//Con = gcnew SqlConnection("Data Source=(localdb)\MSSQLLocalDB;Initial Catalog=base_telephone;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");
				//String connectionString = "Server = (localdb)\\mssqllocaldb; Database = master; Trusted_Connection = True;";
				Con = gcnew SqlConnection("Server = (localdb)\\mssqllocaldb; Database = base_telephone; Trusted_Connection = True;");
				Con->Open();
			}
			catch (SqlException^ e) {
				MessageBox::Show("Ошибка при подключении к базе данных: " + e->Message);
				Application::Exit();
			}
			dtFirms = gcnew DataTable();
			dtModels = gcnew DataTable();

			dgvFirms->DataSource = dtFirms;
			dgvFirms->AutoGenerateColumns = false;
			colFirmID->DataPropertyName = "ID";
			colFirmName->DataPropertyName = "name";

			dgvModels->DataSource = dtModels;
			dgvModels->AutoGenerateColumns = false;
			colModelID->DataPropertyName = "ID";
			colModelName->DataPropertyName = "model";
			colModelYear->DataPropertyName = "year";
			colModelColor->DataPropertyName = "color";
			colModelWeight->DataPropertyName = "weight";
			colModelPhoto->DataPropertyName = "foto";
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::DataGridView^ dgvFirms;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFirmID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFirmName;
	private: System::Windows::Forms::DataGridView^ dgvModels;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colModelID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colModelName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colModelYear;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colModelColor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colModelWeight;
	private: System::Windows::Forms::DataGridViewImageColumn^ colModelPhoto;
	private: System::Windows::Forms::Panel^ pnlModels;
	private: System::Windows::Forms::Button^ btnModelDel;
	private: System::Windows::Forms::Button^ btnModelEdit;
	private: System::Windows::Forms::Button^ btnModelAdd;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dgvFirms = (gcnew System::Windows::Forms::DataGridView());
			this->colFirmID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFirmName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvModels = (gcnew System::Windows::Forms::DataGridView());
			this->colModelID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colModelName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colModelYear = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colModelColor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colModelWeight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colModelPhoto = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->pnlModels = (gcnew System::Windows::Forms::Panel());
			this->btnModelDel = (gcnew System::Windows::Forms::Button());
			this->btnModelEdit = (gcnew System::Windows::Forms::Button());
			this->btnModelAdd = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFirms))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvModels))->BeginInit();
			this->pnlModels->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->dgvFirms);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->dgvModels);
			this->splitContainer1->Panel2->Controls->Add(this->pnlModels);
			this->splitContainer1->Size = System::Drawing::Size(646, 405);
			this->splitContainer1->SplitterDistance = 215;
			this->splitContainer1->TabIndex = 0;
			// 
			// dgvFirms
			// 
			this->dgvFirms->AllowUserToAddRows = false;
			this->dgvFirms->AllowUserToDeleteRows = false;
			this->dgvFirms->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvFirms->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFirms->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->colFirmID, this->colFirmName });
			this->dgvFirms->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvFirms->Location = System::Drawing::Point(0, 0);
			this->dgvFirms->Name = L"dgvFirms";
			this->dgvFirms->ReadOnly = true;
			this->dgvFirms->RowHeadersWidth = 51;
			this->dgvFirms->RowTemplate->Height = 24;
			this->dgvFirms->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvFirms->Size = System::Drawing::Size(215, 405);
			this->dgvFirms->TabIndex = 0;
			this->dgvFirms->SelectionChanged += gcnew System::EventHandler(this, &MyForm::dgvFirms_SelectionChanged);
			// 
			// colFirmID
			// 
			this->colFirmID->HeaderText = L"ID Firm";
			this->colFirmID->MinimumWidth = 6;
			this->colFirmID->Name = L"colFirmID";
			this->colFirmID->ReadOnly = true;
			this->colFirmID->Visible = false;
			// 
			// colFirmName
			// 
			this->colFirmName->HeaderText = L"Firm\'s name";
			this->colFirmName->MinimumWidth = 6;
			this->colFirmName->Name = L"colFirmName";
			this->colFirmName->ReadOnly = true;
			// 
			// dgvModels
			// 
			this->dgvModels->AllowUserToAddRows = false;
			this->dgvModels->AllowUserToDeleteRows = false;
			this->dgvModels->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvModels->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dgvModels->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvModels->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colModelID,
					this->colModelName, this->colModelYear, this->colModelColor, this->colModelWeight, this->colModelPhoto
			});
			this->dgvModels->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvModels->Location = System::Drawing::Point(0, 0);
			this->dgvModels->Name = L"dgvModels";
			this->dgvModels->ReadOnly = true;
			this->dgvModels->RowHeadersWidth = 51;
			this->dgvModels->RowTemplate->Height = 24;
			this->dgvModels->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvModels->Size = System::Drawing::Size(427, 305);
			this->dgvModels->TabIndex = 1;
			this->dgvModels->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgvModels_CellContentClick);
			// 
			// colModelID
			// 
			this->colModelID->HeaderText = L"Model ID";
			this->colModelID->MinimumWidth = 6;
			this->colModelID->Name = L"colModelID";
			this->colModelID->ReadOnly = true;
			this->colModelID->Visible = false;
			// 
			// colModelName
			// 
			this->colModelName->HeaderText = L"Model\'s name";
			this->colModelName->MinimumWidth = 6;
			this->colModelName->Name = L"colModelName";
			this->colModelName->ReadOnly = true;
			// 
			// colModelYear
			// 
			this->colModelYear->HeaderText = L"Year";
			this->colModelYear->MinimumWidth = 6;
			this->colModelYear->Name = L"colModelYear";
			this->colModelYear->ReadOnly = true;
			// 
			// colModelColor
			// 
			this->colModelColor->HeaderText = L"Color";
			this->colModelColor->MinimumWidth = 6;
			this->colModelColor->Name = L"colModelColor";
			this->colModelColor->ReadOnly = true;
			// 
			// colModelWeight
			// 
			this->colModelWeight->HeaderText = L"Weight";
			this->colModelWeight->MinimumWidth = 6;
			this->colModelWeight->Name = L"colModelWeight";
			this->colModelWeight->ReadOnly = true;
			// 
			// colModelPhoto
			// 
			this->colModelPhoto->HeaderText = L"Photo";
			this->colModelPhoto->MinimumWidth = 6;
			this->colModelPhoto->Name = L"colModelPhoto";
			this->colModelPhoto->ReadOnly = true;
			// 
			// pnlModels
			// 
			this->pnlModels->Controls->Add(this->btnModelDel);
			this->pnlModels->Controls->Add(this->btnModelEdit);
			this->pnlModels->Controls->Add(this->btnModelAdd);
			this->pnlModels->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlModels->Location = System::Drawing::Point(0, 305);
			this->pnlModels->Name = L"pnlModels";
			this->pnlModels->Size = System::Drawing::Size(427, 100);
			this->pnlModels->TabIndex = 0;
			// 
			// btnModelDel
			// 
			this->btnModelDel->Location = System::Drawing::Point(289, 38);
			this->btnModelDel->Name = L"btnModelDel";
			this->btnModelDel->Size = System::Drawing::Size(109, 23);
			this->btnModelDel->TabIndex = 2;
			this->btnModelDel->Text = L"Model del";
			this->btnModelDel->UseVisualStyleBackColor = true;
			this->btnModelDel->Click += gcnew System::EventHandler(this, &MyForm::btnModelDel_Click);
			// 
			// btnModelEdit
			// 
			this->btnModelEdit->Location = System::Drawing::Point(157, 38);
			this->btnModelEdit->Name = L"btnModelEdit";
			this->btnModelEdit->Size = System::Drawing::Size(95, 23);
			this->btnModelEdit->TabIndex = 1;
			this->btnModelEdit->Text = L"Model edit\r\n";
			this->btnModelEdit->UseVisualStyleBackColor = true;
			this->btnModelEdit->Click += gcnew System::EventHandler(this, &MyForm::btnModelEdit_Click);
			// 
			// btnModelAdd
			// 
			this->btnModelAdd->Location = System::Drawing::Point(19, 38);
			this->btnModelAdd->Name = L"btnModelAdd";
			this->btnModelAdd->Size = System::Drawing::Size(108, 23);
			this->btnModelAdd->TabIndex = 0;
			this->btnModelAdd->Text = L"Model аdd";
			this->btnModelAdd->UseVisualStyleBackColor = true;
			this->btnModelAdd->Click += gcnew System::EventHandler(this, &MyForm::btnModelAdd_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(646, 405);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFirms))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvModels))->EndInit();
			this->pnlModels->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		SqlConnection^ Con;
		DataTable^ dtFirms;
		DataTable^ dtModels;
		bool UpdatingFirms;
		int id_firm;

		void RefreshFirms() {
			UpdatingFirms = true;
			SqlCommand^ c = gcnew SqlCommand("select * from Firms", Con);
			SqlDataReader^ r = c->ExecuteReader();
			dtFirms->Rows->Clear();
			dtFirms->Load(r);
			UpdatingFirms = false;
		}

		void RefreshModels(int id_firm) {
			if (UpdatingFirms || id_firm == -1) return;
			try {
				SqlCommand^ c = gcnew SqlCommand("select * from Models where ID_Firm=" + id_firm, Con);
				SqlDataReader^ r = c->ExecuteReader();
				dtModels->Rows->Clear();
				dtModels->Load(r);
			}
			catch (Exception^ e) {
			}
		}

	private: System::Void dgvModels_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dgvFirms_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			id_firm = Convert::ToInt32(dgvFirms->CurrentRow->Cells[0]->Value);
		}
		catch (Exception^ e) {
			id_firm = -1;
		}
		RefreshModels(id_firm);
	}

	private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		RefreshFirms();
		dgvFirms_SelectionChanged(nullptr, nullptr);
	}
	private: System::Void btnModelAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sql = String::Format("insert into Models (ID_Firm, model) values ({0}, N'{1}')", id_firm, "Новая модель");
		SqlCommand^ c = gcnew SqlCommand(sql, Con);
		c->ExecuteNonQuery();
		RefreshModels(id_firm);
	}
	private: System::Void btnModelDel_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvModels->RowCount == 0) return;
		int id = Convert::ToInt32(dgvModels->CurrentRow->Cells[0]->Value);
		String^ sql = "delete from Models where id=" + id;
		SqlCommand^ c = gcnew SqlCommand(sql, Con);
		c->ExecuteNonQuery();
		RefreshModels(id_firm);
	}
	private: System::Void btnModelEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvModels->RowCount == 0) return;
		EditModel^ form2 = gcnew EditModel();
		form2->con = Con;
		form2->dgv = dgvModels;
		if (form2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			RefreshModels(id_firm);
	}
	};
}
