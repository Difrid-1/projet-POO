#pragma once
#include "CL_svc_gestionPersonnes.h"
namespace Prosit6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textID;
	private: System::Windows::Forms::TextBox^ textPrenom;
	private: System::Windows::Forms::TextBox^ textNom;



	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textID = (gcnew System::Windows::Forms::TextBox());
			this->textPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textNom = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"<<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::premier_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(92, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::precedent_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(173, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L">";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::suivant_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(271, 147);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L">>";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::dernier_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(160, 99);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"NEW";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::new_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(160, 62);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"MODIFY";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::modifier_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(160, 24);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"DELETE";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::delete_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(250, 24);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 98);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Enregistrer";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::enregistrer_Click);
			// 
			// textID
			// 
			this->textID->Location = System::Drawing::Point(25, 24);
			this->textID->Name = L"textID";
			this->textID->ReadOnly = true;
			this->textID->Size = System::Drawing::Size(100, 20);
			this->textID->TabIndex = 8;
			// 
			// textPrenom
			// 
			this->textPrenom->Location = System::Drawing::Point(25, 65);
			this->textPrenom->Name = L"textPrenom";
			this->textPrenom->ReadOnly = true;
			this->textPrenom->Size = System::Drawing::Size(100, 20);
			this->textPrenom->TabIndex = 9;
			// 
			// textNom
			// 
			this->textNom->Location = System::Drawing::Point(25, 102);
			this->textNom->Name = L"textNom";
			this->textNom->ReadOnly = true;
			this->textNom->Size = System::Drawing::Size(100, 20);
			this->textNom->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1, 185);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(345, 74);
			this->textBox4->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Prenom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Nom";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(349, 261);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textNom);
			this->Controls->Add(this->textPrenom);
			this->Controls->Add(this->textID);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: void load_data(int index)
{


}
private:
	String^ mode;
	int compteur;
	DataSet^ DS;
	NS_svc::CL_svc_gestionPersonnes^ Personne;

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	mode = "NULL";
	compteur = 0;
	this->DS = gcnew Data::DataSet();
	this->Personne = gcnew NS_svc::CL_svc_gestionPersonnes();
	load(this->compteur);
}

private: void load(int compteur)
{

	this->DS->Clear();
	this->DS = this->Personne->ListePersonnes("dbo.TB_PERSONNE");

	if (this->DS->Tables["dbo.TB_PERSONNE"]->Rows->Count == 0)
	{
		this->Personne->ajouter("A modifier", "A modifier");
		this->DS = this->Personne->ListePersonnes("dbo.TB_PERSONNE");
	}
		this->textID->Text = Convert::ToString(this->DS->Tables["dbo.TB_PERSONNE"]->Rows[this->compteur]->ItemArray[0]);
		this->textNom->Text = Convert::ToString(this->DS->Tables["dbo.TB_PERSONNE"]->Rows[this->compteur]->ItemArray[1]);
		this->textPrenom->Text = Convert::ToString(this->DS->Tables["dbo.TB_PERSONNE"]->Rows[this->compteur]->ItemArray[2]);
	
	
	
}

private: System::Void premier_Click(System::Object^ sender, System::EventArgs^ e) {
	compteur = 0;
	load(compteur);
}
private: System::Void precedent_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (compteur > 0) {
		compteur--;
		load(this->compteur);
		textBox4->Text = "Enregistrement : " + (compteur+1);
	}
	else textBox4->Text = "vous etes deja au minimum !";
}
private: System::Void suivant_Click(System::Object^ sender, System::EventArgs^ e) {
	if (compteur < this->DS->Tables["dbo.TB_PERSONNE"]->Rows->Count - 1) {
		compteur++;
		load(this->compteur);
		textBox4->Text = "Enregistrement : " + (compteur + 1);
	}
	else textBox4->Text = "vous etes deja au maximum!";
}
private: System::Void dernier_Click(System::Object^ sender, System::EventArgs^ e) {
	this->compteur = this->DS->Tables["dbo.TB_PERSONNE"]->Rows->Count - 1;
	load(compteur);
	textBox4->Text = "Enregistrement : " + (compteur + 1);
}
private: System::Void delete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "supprimer";
	this->textBox4->Text = "appuyer sur enregistrer pour supprimer l'iteration";
}
private: System::Void modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "modifier";
	this->textBox4->Text = "appuyer sur enregistrer pour modifier l'iteration";
	this->textPrenom->Clear();
	this->textNom->Clear();
	this->textPrenom->ReadOnly = false;
	this->textNom->ReadOnly = false;
}
private: System::Void new_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "creer";
	this->textBox4->Text = "appuyer sur enregistrer pour creer l'iteration";
	this->textPrenom->Clear();
	this->textNom->Clear();
	this->textPrenom->ReadOnly = false;
	this->textNom->ReadOnly = false;

}
private: System::Void enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode == "supprimer")
	{
		this->Personne->supprimer(Convert::ToInt32(textID->Text)); // procédure pour supprimer une personne
	}

	else if (mode == "modifier")
	{
		
		this->Personne->modifier(Convert::ToInt32(textID->Text),textPrenom->Text,textNom->Text); // procédure pour modifier une personne
		this->textPrenom->ReadOnly = true; // enlève la possibilité d'écrire pour l'utilisateur 
		this->textNom->ReadOnly = true;
	}

	else if (mode == "creer")
	{

		this->Personne->ajouter(textPrenom->Text, textNom->Text); // procédure pour ajouter une personne
		this->textPrenom->ReadOnly = true; 
		this->textNom->ReadOnly = true;
	}
	compteur = 0; //sélectiionner la première donnée de la base
	load(compteur);//la charger 



}


};
}
