#pragma once

namespace BD_Telephone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для EditModel
	/// </summary>
	public ref class EditModel : public System::Windows::Forms::Form
	{
	public:
		EditModel(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditModel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ tbModel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbYear;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbColor;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbWeight;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::Button^ btnLoadPhoto;
	private: System::Windows::Forms::Button^ btnSave;

	private: System::Windows::Forms::Button^ bntCancel;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbModel = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbYear = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbColor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbWeight = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnLoadPhoto = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->bntCancel = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Модель";
			// 
			// tbModel
			// 
			this->tbModel->Location = System::Drawing::Point(89, 27);
			this->tbModel->Name = L"tbModel";
			this->tbModel->Size = System::Drawing::Size(100, 22);
			this->tbModel->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Год";
			// 
			// tbYear
			// 
			this->tbYear->Location = System::Drawing::Point(89, 71);
			this->tbYear->Name = L"tbYear";
			this->tbYear->Size = System::Drawing::Size(100, 22);
			this->tbYear->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Цвет";
			// 
			// tbColor
			// 
			this->tbColor->Location = System::Drawing::Point(89, 117);
			this->tbColor->Name = L"tbColor";
			this->tbColor->Size = System::Drawing::Size(100, 22);
			this->tbColor->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Вес";
			// 
			// tbWeight
			// 
			this->tbWeight->Location = System::Drawing::Point(89, 165);
			this->tbWeight->Name = L"tbWeight";
			this->tbWeight->Size = System::Drawing::Size(100, 22);
			this->tbWeight->TabIndex = 7;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pbPhoto);
			this->groupBox1->Controls->Add(this->btnLoadPhoto);
			this->groupBox1->Location = System::Drawing::Point(29, 219);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(230, 253);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фото";
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(21, 69);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(186, 160);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pbPhoto->TabIndex = 1;
			this->pbPhoto->TabStop = false;
			// 
			// btnLoadPhoto
			// 
			this->btnLoadPhoto->Location = System::Drawing::Point(21, 21);
			this->btnLoadPhoto->Name = L"btnLoadPhoto";
			this->btnLoadPhoto->Size = System::Drawing::Size(92, 26);
			this->btnLoadPhoto->TabIndex = 0;
			this->btnLoadPhoto->Text = L"Загрузить";
			this->btnLoadPhoto->UseVisualStyleBackColor = true;
			this->btnLoadPhoto->Click += gcnew System::EventHandler(this, &EditModel::btnLoadPhoto_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(29, 479);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(91, 37);
			this->btnSave->TabIndex = 9;
			this->btnSave->Text = L"Сохранить";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &EditModel::btnSave_Click);
			// 
			// bntCancel
			// 
			this->bntCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bntCancel->Location = System::Drawing::Point(168, 479);
			this->bntCancel->Name = L"bntCancel";
			this->bntCancel->Size = System::Drawing::Size(91, 37);
			this->bntCancel->TabIndex = 10;
			this->bntCancel->Text = L"Отменить";
			this->bntCancel->UseVisualStyleBackColor = true;
			// 
			// EditModel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->bntCancel;
			this->ClientSize = System::Drawing::Size(282, 528);
			this->Controls->Add(this->bntCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tbWeight);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbColor);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbYear);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbModel);
			this->Controls->Add(this->label1);
			this->Name = L"EditModel";
			this->Text = L"EditModel";
			this->Shown += gcnew System::EventHandler(this, &EditModel::EditModel_Shown);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:
			SqlConnection^ con;
			DataGridView^ dgv;
			int id;

	private: System::Void EditModel_Shown(System::Object^ sender, System::EventArgs^ e) {

		id = Convert::ToInt32(dgv->CurrentRow->Cells[0]->Value);
		tbModel->Text = Convert::ToString(dgv->CurrentRow->Cells[1]->Value);
		tbYear->Text = Convert::ToString(dgv->CurrentRow->Cells[2]->Value);
		tbColor->Text = Convert::ToString(dgv->CurrentRow->Cells[3]->Value);
		tbWeight->Text = Convert::ToString(dgv->CurrentRow->Cells[4]->Value);

		using namespace System::Drawing;
		using namespace System::IO;
		try {
			array<Byte>^ b = (array<Byte>^)dgv->CurrentRow->Cells[5]->Value;
			if (b) {
			MemoryStream ^ ms = gcnew MemoryStream(b->Length);
			ms->Write(b, 0, b->Length);
			pbPhoto->Image = Image::FromStream(ms);
			pbPhoto->Refresh();
			}
		}
		catch (Exception^ e) {

		}
		catch (NullReferenceException^ e)
		{

		}
		catch (...)
		{

		}
	}
private: System::Void btnLoadPhoto_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ d = gcnew OpenFileDialog();
	d->Filter = "JPEG файлы (*,.jpg)|*.jpg|Bitmap файлы (*.bmp)|*.bmp|Все файлы (*.*)|*.*";
	if (d->ShowDialog() == Windows::Forms::DialogResult::OK)
		pbPhoto->ImageLocation = d->FileName;
}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sql = "update Models set model=N'{0}', year='{1}', "
		"color=N'{2}', weight='{3}' where ID=" + id;
	sql = String::Format(sql, tbModel->Text, tbYear->Text,
		tbColor->Text, tbWeight->Text);
	SqlCommand^ c = gcnew SqlCommand(sql, con);
	c->ExecuteNonQuery();

	if (pbPhoto->ImageLocation) {
		using namespace System::IO;
		FileStream^ fs = File::OpenRead(pbPhoto->ImageLocation);
		array<Byte>^ b = gcnew array<Byte>(fs->Length);
		fs->Read(b, 0, fs->Length);
		fs->Close();
		sql = "update Models set foto = @foto where ID=" + id;
		//sql = "update Models set photo = N'{0}' where ID=" + id;

		//sql = String::Format(sql, b);
		SqlCommand^ c2 = gcnew SqlCommand(sql, con);
		c2->Parameters->Add(gcnew SqlParameter("foto", SqlDbType::Image));
		c2->Parameters["foto"]->Value = b;
		c2->ExecuteNonQuery();
	}
	DialogResult = System::Windows::Forms::DialogResult::OK;

}
};
}
