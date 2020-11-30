#pragma once
#include "CL_svc_gestionPersonnels.h"


namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;

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
	private: System::Windows::Forms::TextBox^ textID;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	protected:

	protected:










	private: System::Windows::Forms::TextBox^ Console;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button_Premier;
	private: System::Windows::Forms::Button^ button_Precedent;
	private: System::Windows::Forms::Button^ button_Suivant;
	private: System::Windows::Forms::Button^ button_Dernier;





	private: System::Windows::Forms::Button^ button_Modifier;
	private: System::Windows::Forms::Button^ button_Supprimer;
	private: System::Windows::Forms::Button^ button_Creer;
	private: System::Windows::Forms::Button^ button_Enregistrer;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;







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
			this->textID = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->Console = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button_Premier = (gcnew System::Windows::Forms::Button());
			this->button_Precedent = (gcnew System::Windows::Forms::Button());
			this->button_Suivant = (gcnew System::Windows::Forms::Button());
			this->button_Dernier = (gcnew System::Windows::Forms::Button());
			this->button_Modifier = (gcnew System::Windows::Forms::Button());
			this->button_Supprimer = (gcnew System::Windows::Forms::Button());
			this->button_Creer = (gcnew System::Windows::Forms::Button());
			this->button_Enregistrer = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// textID
			// 
			this->textID->Location = System::Drawing::Point(24, 27);
			this->textID->Name = L"textID";
			this->textID->ReadOnly = true;
			this->textID->Size = System::Drawing::Size(100, 20);
			this->textID->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(24, 109);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(24, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(24, 187);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(67, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(24, 226);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 5;
			// 
			// Console
			// 
			this->Console->Location = System::Drawing::Point(12, 309);
			this->Console->Multiline = true;
			this->Console->Name = L"Console";
			this->Console->Size = System::Drawing::Size(322, 75);
			this->Console->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Nom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Adresse";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"DateEmbauche";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 210);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Supérieur";
			// 
			// button_Premier
			// 
			this->button_Premier->Location = System::Drawing::Point(12, 279);
			this->button_Premier->Name = L"button_Premier";
			this->button_Premier->Size = System::Drawing::Size(75, 23);
			this->button_Premier->TabIndex = 18;
			this->button_Premier->Text = L"<<";
			this->button_Premier->UseVisualStyleBackColor = true;
			this->button_Premier->Click += gcnew System::EventHandler(this, &MyForm::button_Premier_Click);
			// 
			// button_Precedent
			// 
			this->button_Precedent->Location = System::Drawing::Point(93, 280);
			this->button_Precedent->Name = L"button_Precedent";
			this->button_Precedent->Size = System::Drawing::Size(75, 23);
			this->button_Precedent->TabIndex = 19;
			this->button_Precedent->Text = L"<";
			this->button_Precedent->UseVisualStyleBackColor = true;
			this->button_Precedent->Click += gcnew System::EventHandler(this, &MyForm::button_Precedent_Click);
			// 
			// button_Suivant
			// 
			this->button_Suivant->Location = System::Drawing::Point(178, 280);
			this->button_Suivant->Name = L"button_Suivant";
			this->button_Suivant->Size = System::Drawing::Size(75, 23);
			this->button_Suivant->TabIndex = 20;
			this->button_Suivant->Text = L">";
			this->button_Suivant->UseVisualStyleBackColor = true;
			this->button_Suivant->Click += gcnew System::EventHandler(this, &MyForm::button_Suivant_Click);
			// 
			// button_Dernier
			// 
			this->button_Dernier->Location = System::Drawing::Point(259, 280);
			this->button_Dernier->Name = L"button_Dernier";
			this->button_Dernier->Size = System::Drawing::Size(75, 23);
			this->button_Dernier->TabIndex = 21;
			this->button_Dernier->Text = L">>";
			this->button_Dernier->UseVisualStyleBackColor = true;
			this->button_Dernier->Click += gcnew System::EventHandler(this, &MyForm::button_Dernier_Click);
			// 
			// button_Modifier
			// 
			this->button_Modifier->Location = System::Drawing::Point(158, 68);
			this->button_Modifier->Name = L"button_Modifier";
			this->button_Modifier->Size = System::Drawing::Size(75, 23);
			this->button_Modifier->TabIndex = 22;
			this->button_Modifier->Text = L"Modifier";
			this->button_Modifier->UseVisualStyleBackColor = true;
			this->button_Modifier->Click += gcnew System::EventHandler(this, &MyForm::button_Modifier_Click);
			// 
			// button_Supprimer
			// 
			this->button_Supprimer->Location = System::Drawing::Point(158, 106);
			this->button_Supprimer->Name = L"button_Supprimer";
			this->button_Supprimer->Size = System::Drawing::Size(75, 23);
			this->button_Supprimer->TabIndex = 23;
			this->button_Supprimer->Text = L"Supprimer";
			this->button_Supprimer->UseVisualStyleBackColor = true;
			this->button_Supprimer->Click += gcnew System::EventHandler(this, &MyForm::button_Supprimer_Click);
			// 
			// button_Creer
			// 
			this->button_Creer->Location = System::Drawing::Point(158, 148);
			this->button_Creer->Name = L"button_Creer";
			this->button_Creer->Size = System::Drawing::Size(75, 23);
			this->button_Creer->TabIndex = 24;
			this->button_Creer->Text = L"Créer";
			this->button_Creer->UseVisualStyleBackColor = true;
			this->button_Creer->Click += gcnew System::EventHandler(this, &MyForm::button_Creer_Click);
			// 
			// button_Enregistrer
			// 
			this->button_Enregistrer->Location = System::Drawing::Point(248, 65);
			this->button_Enregistrer->Name = L"button_Enregistrer";
			this->button_Enregistrer->Size = System::Drawing::Size(101, 113);
			this->button_Enregistrer->TabIndex = 25;
			this->button_Enregistrer->Text = L"Enregistrer";
			this->button_Enregistrer->UseVisualStyleBackColor = true;
			this->button_Enregistrer->Click += gcnew System::EventHandler(this, &MyForm::button_Enregistrer_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(134, 184);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 26;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 396);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button_Enregistrer);
			this->Controls->Add(this->button_Creer);
			this->Controls->Add(this->button_Supprimer);
			this->Controls->Add(this->button_Modifier);
			this->Controls->Add(this->button_Dernier);
			this->Controls->Add(this->button_Suivant);
			this->Controls->Add(this->button_Precedent);
			this->Controls->Add(this->button_Premier);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Console);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textID);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	String^ mode;
	DataSet^ DS;
	NS_svc::CL_svc_gestionPersonnels^ Personnels;
	int compteur;



	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "null";
		this->compteur = 0;
		this->Personnels = gcnew NS_svc::CL_svc_gestionPersonnels();
		this->DS = gcnew DataSet();
		load(compteur);
	}

	private: void load(int compteur)
	{
		this->DS->Clear();
		this->DS = this->Personnels->ListePersonnels("liste");//charge les données de la tables

		if (this->DS->Tables["liste"]->Rows->Count == 0) // si la table est vide
		{
			this->Personnels->ajouter("A modifier", "A modifier","A modifier","2000-01-01"); //ajouter une donnée a modifier pour éviter le crash
			this->DS = this->Personnels->ListePersonnels("liste");// recharger la table
		}
		this->textID->Text = Convert::ToString(this->DS->Tables["liste"]->Rows[this->compteur]->ItemArray[0]); //charge la donnée contenue dans la première colonne et dans la pointé par le compteur
		this->textBox1->Text = Convert::ToString(this->DS->Tables["liste"]->Rows[this->compteur]->ItemArray[1]);
		this->textBox2->Text = Convert::ToString(this->DS->Tables["liste"]->Rows[this->compteur]->ItemArray[2]);
		this->textBox3->Text = Convert::ToString(this->DS->Tables["liste"]->Rows[this->compteur]->ItemArray[3]);
		this->textBox4->Text = Convert::ToString(this->DS->Tables["liste"]->Rows[this->compteur]->ItemArray[4]);
		this->textBox5->Text = Convert::ToString(this->DS->Tables["liste"]->Rows[this->compteur]->ItemArray[5]);
	}

private: System::Void button_Premier_Click(System::Object^ sender, System::EventArgs^ e) {
	compteur = 0; // sélectionner la première donnée
	load(this->compteur);// la charger
	Console->Text = "Enregistrement : " + (compteur + 1);
}
private: System::Void button_Precedent_Click(System::Object^ sender, System::EventArgs^ e) {
	if (compteur > 0) { // si nous ne sommes pas à la première donnée
		compteur--; // passer à la première donnée
		load(this->compteur);// la charger
		Console->Text = "Enregistrement : " + (compteur + 1);// donner le numéro de la donnée
	}
	else Console->Text = "vous etes deja au minimum !";
}
private: System::Void button_Suivant_Click(System::Object^ sender, System::EventArgs^ e) {
	if (compteur < this->DS->Tables["liste"]->Rows->Count - 1) { //si ne nous sommes pas a la dernière donnée de la table
		compteur++; // selectionner la prochaine données
		load(this->compteur); // la charger
		Console->Text = "Enregistrement : " + (compteur + 1); // donner le numéro de la donnée
	}
	else Console->Text = "vous etes deja au maximum!";
}
private: System::Void button_Dernier_Click(System::Object^ sender, System::EventArgs^ e) {
	this->compteur = this->DS->Tables["liste"]->Rows->Count - 1; // sélectionner la dernière donnée
	load(compteur);// la charger
	Console->Text = "Enregistrement : " + (compteur + 1);
}
private: System::Void button_Creer_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "Creer";
	Console->Text = "Appuyez sur enregistrer pour appliquer les modification";

	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();

	textBox1->ReadOnly = false;
	textBox2->ReadOnly = false;
	textBox3->ReadOnly = false;
	textBox5->ReadOnly = false;


}
private: System::Void button_Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "Supprimer";
	Console->Text = "Appuyez sur enregistrer pour appliquer les modification";
}
private: System::Void button_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "Modifier";
	Console->Text = "Appuyez sur enregistrer pour appliquer les modification";

	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();

	textBox1->ReadOnly = false;
	textBox2->ReadOnly = false;
	textBox3->ReadOnly = false;
	textBox5->ReadOnly = false;
}
private: System::Void button_Enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {

	if (mode == "Creer")
	{
		if (textBox5->Text == "")
		{
			this->Personnels->ajouter(textBox1->Text, textBox2->Text, textBox3->Text, dateTimePicker1->Text);
		}
		else this->Personnels->ajouter(textBox1->Text, textBox2->Text, textBox3->Text, dateTimePicker1->Text, Convert::ToInt32(textBox5->Text));

	}

	else if (mode == "Modifier")
	{
		if (textBox5->Text == "")
		{
			this->Personnels->modifier(Convert::ToInt32(textID->Text),textBox1->Text,textBox2->Text,textBox3->Text,dateTimePicker1->Text);
		}
		else this->Personnels->modifier(Convert::ToInt32(textID->Text), textBox1->Text, textBox2->Text, textBox3->Text, dateTimePicker1->Text,Convert::ToInt32(textBox5->Text));

	}

	else if (mode == "Supprimer")
	{
		this->Personnels->supprimer(Convert::ToInt32(this->textID->Text));
	}


	textBox1->ReadOnly = true;
	textBox2->ReadOnly = true;
	textBox3->ReadOnly = true;
	textBox5->ReadOnly = true;


	load(0);

}

};



};

