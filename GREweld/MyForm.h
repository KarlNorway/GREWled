#pragma once

namespace GREweld {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnGenerate;
	protected:
	private: System::Windows::Forms::Label^  lblCRow;
	private: System::Windows::Forms::Label^  lblCPerRow;
	private: System::Windows::Forms::Label^  label1;


	public: System::Windows::Forms::TextBox^  txtCellCC;
	public: System::Windows::Forms::TextBox^  txtCPerRow;
	public: System::Windows::Forms::TextBox^  txtCRow;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::TextBox^  txtInitX;
	public: System::Windows::Forms::TextBox^  txtInitY;
	private: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::RadioButton^  rbtnOffset;
	public: System::Windows::Forms::RadioButton^  rbtnSquare;
	public: System::Windows::Forms::TextBox^  txtFname;
	private: System::Windows::Forms::Label^  lblfName;
	public:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->lblCRow = (gcnew System::Windows::Forms::Label());
			this->lblCPerRow = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtCellCC = (gcnew System::Windows::Forms::TextBox());
			this->txtCPerRow = (gcnew System::Windows::Forms::TextBox());
			this->txtCRow = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtInitX = (gcnew System::Windows::Forms::TextBox());
			this->txtInitY = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rbtnOffset = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnSquare = (gcnew System::Windows::Forms::RadioButton());
			this->txtFname = (gcnew System::Windows::Forms::TextBox());
			this->lblfName = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnGenerate
			// 
			this->btnGenerate->Location = System::Drawing::Point(63, 278);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(303, 70);
			this->btnGenerate->TabIndex = 0;
			this->btnGenerate->Text = L"Generate Gcode";
			this->btnGenerate->UseVisualStyleBackColor = true;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &MyForm::btnGenerate_Click);
			// 
			// lblCRow
			// 
			this->lblCRow->AutoSize = true;
			this->lblCRow->Location = System::Drawing::Point(61, 158);
			this->lblCRow->Name = L"lblCRow";
			this->lblCRow->Size = System::Drawing::Size(162, 13);
			this->lblCRow->TabIndex = 2;
			this->lblCRow->Text = L"Number of cell rows ( Y direction)";
			// 
			// lblCPerRow
			// 
			this->lblCPerRow->AutoSize = true;
			this->lblCPerRow->Location = System::Drawing::Point(61, 119);
			this->lblCPerRow->Name = L"lblCPerRow";
			this->lblCPerRow->Size = System::Drawing::Size(182, 13);
			this->lblCPerRow->TabIndex = 4;
			this->lblCPerRow->Text = L"Number of cells in a row ( X direction)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Cell center distance in mm, ";
			// 
			// txtCellCC
			// 
			this->txtCellCC->Location = System::Drawing::Point(63, 96);
			this->txtCellCC->Name = L"txtCellCC";
			this->txtCellCC->Size = System::Drawing::Size(159, 20);
			this->txtCellCC->TabIndex = 9;
			this->txtCellCC->Text = L"0";
			// 
			// txtCPerRow
			// 
			this->txtCPerRow->Location = System::Drawing::Point(64, 135);
			this->txtCPerRow->Name = L"txtCPerRow";
			this->txtCPerRow->Size = System::Drawing::Size(159, 20);
			this->txtCPerRow->TabIndex = 10;
			this->txtCPerRow->Text = L"0";
			// 
			// txtCRow
			// 
			this->txtCRow->Location = System::Drawing::Point(64, 174);
			this->txtCRow->Name = L"txtCRow";
			this->txtCRow->Size = System::Drawing::Size(159, 20);
			this->txtCRow->TabIndex = 11;
			this->txtCRow->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"First cell offset X dir";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"First cell offset Y dir";
			// 
			// txtInitX
			// 
			this->txtInitX->Location = System::Drawing::Point(63, 213);
			this->txtInitX->Name = L"txtInitX";
			this->txtInitX->Size = System::Drawing::Size(159, 20);
			this->txtInitX->TabIndex = 14;
			this->txtInitX->Text = L"0";
			// 
			// txtInitY
			// 
			this->txtInitY->Location = System::Drawing::Point(63, 252);
			this->txtInitY->Name = L"txtInitY";
			this->txtInitY->Size = System::Drawing::Size(159, 20);
			this->txtInitY->TabIndex = 15;
			this->txtInitY->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"use comma as decimal ponit";
			// 
			// rbtnOffset
			// 
			this->rbtnOffset->AutoSize = true;
			this->rbtnOffset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rbtnOffset.Image")));
			this->rbtnOffset->Location = System::Drawing::Point(272, 40);
			this->rbtnOffset->Name = L"rbtnOffset";
			this->rbtnOffset->Size = System::Drawing::Size(94, 85);
			this->rbtnOffset->TabIndex = 17;
			this->rbtnOffset->TabStop = true;
			this->rbtnOffset->Text = L"Offset";
			this->rbtnOffset->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->rbtnOffset->UseVisualStyleBackColor = true;
			// 
			// rbtnSquare
			// 
			this->rbtnSquare->AutoSize = true;
			this->rbtnSquare->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rbtnSquare.Image")));
			this->rbtnSquare->Location = System::Drawing::Point(272, 153);
			this->rbtnSquare->Name = L"rbtnSquare";
			this->rbtnSquare->Size = System::Drawing::Size(94, 96);
			this->rbtnSquare->TabIndex = 18;
			this->rbtnSquare->TabStop = true;
			this->rbtnSquare->Text = L"Square";
			this->rbtnSquare->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->rbtnSquare->UseVisualStyleBackColor = true;
			// 
			// txtFname
			// 
			this->txtFname->Location = System::Drawing::Point(63, 44);
			this->txtFname->Name = L"txtFname";
			this->txtFname->Size = System::Drawing::Size(159, 20);
			this->txtFname->TabIndex = 7;
			// 
			// lblfName
			// 
			this->lblfName->AutoSize = true;
			this->lblfName->Location = System::Drawing::Point(60, 28);
			this->lblfName->Name = L"lblfName";
			this->lblfName->Size = System::Drawing::Size(55, 13);
			this->lblfName->TabIndex = 8;
			this->lblfName->Text = L"File name:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 377);
			this->Controls->Add(this->rbtnSquare);
			this->Controls->Add(this->rbtnOffset);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtInitY);
			this->Controls->Add(this->txtInitX);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtCRow);
			this->Controls->Add(this->txtCPerRow);
			this->Controls->Add(this->txtCellCC);
			this->Controls->Add(this->lblfName);
			this->Controls->Add(this->txtFname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblCPerRow);
			this->Controls->Add(this->lblCRow);
			this->Controls->Add(this->btnGenerate);
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Spot Weld G code generator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnGenerate_Click(System::Object^  sender, System::EventArgs^  e);

};
}
