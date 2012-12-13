/**
 * Written by: Vy Thuy Nguyen
 * Date created: March, 2010
 * Last modified: March, 2010
 */


#pragma once


namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 













	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Button^  newGameBt;
	private: System::Windows::Forms::Button^  backBt;


	private: System::Windows::Forms::Panel^  grid;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  nextBt;
	private: System::Windows::Forms::Button^  quitBt;
	private: System::Windows::Forms::Label^  p1NameLb;
	private: System::Windows::Forms::Label^  p2NameLb;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  clearBt;

	private: System::Windows::Forms::Button^  endGameBt;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lost2Lb;
	private: System::Windows::Forms::Label^  lost1Lb;
	private: System::Windows::Forms::Label^  win2Lb;
	private: System::Windows::Forms::Label^  win1Lb;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  player2Name;

	private: System::Windows::Forms::Label^  player1Name;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox15;


















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->backBt = (gcnew System::Windows::Forms::Button());
			this->lost2Lb = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->player1Name = (gcnew System::Windows::Forms::Label());
			this->grid = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->player2Name = (gcnew System::Windows::Forms::Label());
			this->lost1Lb = (gcnew System::Windows::Forms::Label());
			this->win2Lb = (gcnew System::Windows::Forms::Label());
			this->win1Lb = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->clearBt = (gcnew System::Windows::Forms::Button());
			this->newGameBt = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->nextBt = (gcnew System::Windows::Forms::Button());
			this->quitBt = (gcnew System::Windows::Forms::Button());
			this->p1NameLb = (gcnew System::Windows::Forms::Label());
			this->p2NameLb = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->endGameBt = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			this->grid->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->backBt);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->lost2Lb);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->player1Name);
			this->panel1->Controls->Add(this->grid);
			this->panel1->Controls->Add(this->player2Name);
			this->panel1->Controls->Add(this->lost1Lb);
			this->panel1->Controls->Add(this->win2Lb);
			this->panel1->Controls->Add(this->win1Lb);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->clearBt);
			this->panel1->Controls->Add(this->newGameBt);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox16);
			this->panel1->Controls->Add(this->pictureBox15);
			this->panel1->Controls->Add(this->pictureBox14);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(383, 439);
			this->panel1->TabIndex = 5;
			this->panel1->Visible = false;
			// 
			// backBt
			// 
			this->backBt->Location = System::Drawing::Point(139, 354);
			this->backBt->Name = L"backBt";
			this->backBt->Size = System::Drawing::Size(68, 40);
			this->backBt->TabIndex = 8;
			this->backBt->Text = L"Main Menu";
			this->backBt->UseVisualStyleBackColor = true;
			this->backBt->Click += gcnew System::EventHandler(this, &Form1::backBt_Click);
			// 
			// lost2Lb
			// 
			this->lost2Lb->AutoSize = true;
			this->lost2Lb->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lost2Lb->ForeColor = System::Drawing::Color::Red;
			this->lost2Lb->Location = System::Drawing::Point(65, 268);
			this->lost2Lb->Name = L"lost2Lb";
			this->lost2Lb->Size = System::Drawing::Size(28, 31);
			this->lost2Lb->TabIndex = 18;
			this->lost2Lb->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(4, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 31);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Lost";
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(-16, 290);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(146, 164);
			this->pictureBox13->TabIndex = 28;
			this->pictureBox13->TabStop = false;
			// 
			// player1Name
			// 
			this->player1Name->AutoSize = true;
			this->player1Name->Font = (gcnew System::Drawing::Font(L"Mistral", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->player1Name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->player1Name->Location = System::Drawing::Point(4, 87);
			this->player1Name->Name = L"player1Name";
			this->player1Name->Size = System::Drawing::Size(101, 34);
			this->player1Name->TabIndex = 19;
			this->player1Name->Text = L"Player 1";
			// 
			// grid
			// 
			this->grid->BackColor = System::Drawing::Color::Gold;
			this->grid->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"grid.BackgroundImage")));
			this->grid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->grid->Controls->Add(this->button8);
			this->grid->Controls->Add(this->button7);
			this->grid->Controls->Add(this->button5);
			this->grid->Controls->Add(this->button4);
			this->grid->Controls->Add(this->button3);
			this->grid->Controls->Add(this->button2);
			this->grid->Controls->Add(this->button1);
			this->grid->Controls->Add(this->button9);
			this->grid->Controls->Add(this->button6);
			this->grid->Location = System::Drawing::Point(136, 91);
			this->grid->Name = L"grid";
			this->grid->Size = System::Drawing::Size(236, 238);
			this->grid->TabIndex = 5;
			// 
			// button8
			// 
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Location = System::Drawing::Point(81, 153);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 70);
			this->button8->TabIndex = 6;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Location = System::Drawing::Point(10, 153);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 70);
			this->button7->TabIndex = 5;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(81, 81);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 70);
			this->button5->TabIndex = 3;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(10, 81);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 70);
			this->button4->TabIndex = 2;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(152, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 70);
			this->button3->TabIndex = 1;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(81, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 70);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(10, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 70);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Location = System::Drawing::Point(152, 153);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 70);
			this->button9->TabIndex = 7;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(152, 81);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 70);
			this->button6->TabIndex = 4;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// player2Name
			// 
			this->player2Name->AutoSize = true;
			this->player2Name->Font = (gcnew System::Drawing::Font(L"Mistral", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->player2Name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->player2Name->Location = System::Drawing::Point(6, 201);
			this->player2Name->Name = L"player2Name";
			this->player2Name->Size = System::Drawing::Size(102, 34);
			this->player2Name->TabIndex = 20;
			this->player2Name->Text = L"Player 2";
			// 
			// lost1Lb
			// 
			this->lost1Lb->AutoSize = true;
			this->lost1Lb->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lost1Lb->ForeColor = System::Drawing::Color::Red;
			this->lost1Lb->Location = System::Drawing::Point(65, 152);
			this->lost1Lb->Name = L"lost1Lb";
			this->lost1Lb->Size = System::Drawing::Size(28, 31);
			this->lost1Lb->TabIndex = 17;
			this->lost1Lb->Text = L"0";
			// 
			// win2Lb
			// 
			this->win2Lb->AutoSize = true;
			this->win2Lb->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->win2Lb->ForeColor = System::Drawing::Color::LimeGreen;
			this->win2Lb->Location = System::Drawing::Point(65, 235);
			this->win2Lb->Name = L"win2Lb";
			this->win2Lb->Size = System::Drawing::Size(28, 31);
			this->win2Lb->TabIndex = 16;
			this->win2Lb->Text = L"0";
			// 
			// win1Lb
			// 
			this->win1Lb->AutoSize = true;
			this->win1Lb->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->win1Lb->ForeColor = System::Drawing::Color::LimeGreen;
			this->win1Lb->Location = System::Drawing::Point(65, 121);
			this->win1Lb->Name = L"win1Lb";
			this->win1Lb->Size = System::Drawing::Size(28, 31);
			this->win1Lb->TabIndex = 15;
			this->win1Lb->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(1, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 31);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Lost";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LimeGreen;
			this->label2->Location = System::Drawing::Point(6, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 31);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Win";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LimeGreen;
			this->label1->Location = System::Drawing::Point(4, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 31);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Win";
			// 
			// clearBt
			// 
			this->clearBt->Location = System::Drawing::Point(310, 354);
			this->clearBt->Name = L"clearBt";
			this->clearBt->Size = System::Drawing::Size(62, 40);
			this->clearBt->TabIndex = 10;
			this->clearBt->Text = L"Clear";
			this->clearBt->UseVisualStyleBackColor = true;
			// 
			// newGameBt
			// 
			this->newGameBt->Location = System::Drawing::Point(224, 354);
			this->newGameBt->Name = L"newGameBt";
			this->newGameBt->Size = System::Drawing::Size(70, 40);
			this->newGameBt->TabIndex = 9;
			this->newGameBt->Text = L"New Game";
			this->newGameBt->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(378, 85);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// nextBt
			// 
			this->nextBt->Location = System::Drawing::Point(50, 383);
			this->nextBt->Name = L"nextBt";
			this->nextBt->Size = System::Drawing::Size(83, 35);
			this->nextBt->TabIndex = 12;
			this->nextBt->Text = L"Next";
			this->nextBt->UseVisualStyleBackColor = true;
			this->nextBt->Click += gcnew System::EventHandler(this, &Form1::nextBt_Click_1);
			// 
			// quitBt
			// 
			this->quitBt->Location = System::Drawing::Point(259, 383);
			this->quitBt->Name = L"quitBt";
			this->quitBt->Size = System::Drawing::Size(83, 35);
			this->quitBt->TabIndex = 13;
			this->quitBt->Text = L"Quit";
			this->quitBt->UseVisualStyleBackColor = true;
			this->quitBt->Click += gcnew System::EventHandler(this, &Form1::quitBt_Click);
			// 
			// p1NameLb
			// 
			this->p1NameLb->AutoSize = true;
			this->p1NameLb->BackColor = System::Drawing::Color::Transparent;
			this->p1NameLb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->p1NameLb->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->p1NameLb->ForeColor = System::Drawing::Color::Khaki;
			this->p1NameLb->Location = System::Drawing::Point(32, 286);
			this->p1NameLb->Name = L"p1NameLb";
			this->p1NameLb->Size = System::Drawing::Size(106, 33);
			this->p1NameLb->TabIndex = 14;
			this->p1NameLb->Text = L"Player 1";
			// 
			// p2NameLb
			// 
			this->p2NameLb->AutoSize = true;
			this->p2NameLb->BackColor = System::Drawing::Color::Transparent;
			this->p2NameLb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->p2NameLb->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->p2NameLb->ForeColor = System::Drawing::Color::Khaki;
			this->p2NameLb->Location = System::Drawing::Point(32, 331);
			this->p2NameLb->Name = L"p2NameLb";
			this->p2NameLb->Size = System::Drawing::Size(106, 33);
			this->p2NameLb->TabIndex = 14;
			this->p2NameLb->Text = L"Player 2";
			// 
			// textBox1
			// 
			this->textBox1->AcceptsTab = true;
			this->textBox1->AllowDrop = true;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(155, 289);
			this->textBox1->MaxLength = 11;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 33);
			this->textBox1->TabIndex = 15;
			this->textBox1->Text = L"Player 1...";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(155, 329);
			this->textBox2->MaxLength = 11;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(197, 33);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"Player 2...";
			// 
			// endGameBt
			// 
			this->endGameBt->Location = System::Drawing::Point(155, 383);
			this->endGameBt->Name = L"endGameBt";
			this->endGameBt->Size = System::Drawing::Size(83, 35);
			this->endGameBt->TabIndex = 18;
			this->endGameBt->Text = L"End Game";
			this->endGameBt->UseVisualStyleBackColor = true;
			this->endGameBt->Click += gcnew System::EventHandler(this, &Form1::endGameBt_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(50, 90);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(75, 83);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(97, 179);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(75, 83);
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(131, 90);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(91, 83);
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(81, 1);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(75, 83);
			this->pictureBox6->TabIndex = 23;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(178, 179);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(75, 83);
			this->pictureBox7->TabIndex = 24;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(259, 179);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(75, 83);
			this->pictureBox8->TabIndex = 25;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(163, 1);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(75, 83);
			this->pictureBox9->TabIndex = 26;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(228, 90);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(75, 83);
			this->pictureBox10->TabIndex = 27;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(16, 179);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(75, 101);
			this->pictureBox11->TabIndex = 28;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(298, 12);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(75, 83);
			this->pictureBox12->TabIndex = 29;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 83);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(39, 186);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(36, 22);
			this->pictureBox14->TabIndex = 29;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(71, 186);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(36, 22);
			this->pictureBox15->TabIndex = 29;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(7, 186);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(36, 22);
			this->pictureBox16->TabIndex = 29;
			this->pictureBox16->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(385, 439);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->nextBt);
			this->Controls->Add(this->endGameBt);
			this->Controls->Add(this->quitBt);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->p2NameLb);
			this->Controls->Add(this->p1NameLb);
			this->Controls->Add(this->pictureBox11);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Tic Tac Toe - by Vy Thuy Nguyen";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			this->grid->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void nextBt_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Visible = true;
			 this->textBox1->Visible = false;
			 this->textBox2->Visible = false;
			 this->p1NameLb->Visible = false;
			 this->p2NameLb->Visible = false;
			 this->nextBt->Visible = false;
			 this->endGameBt->Visible = false;
			 this->quitBt->Visible = false;
			 this->pictureBox1->Visible = false;
			 this->player1Name->Text = this->textBox1->Text;
			 this->player2Name->Text = this->textBox2->Text;
			 
		 }
private: System::Void backBt_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Visible = false;
			 this->nextBt->Visible = true;
			 this->quitBt->Visible = true;		
			 this->pictureBox1->Visible = true;
			 this->nextBt->Text = "Continue";
			 this->endGameBt->Visible = true;
			
		 }
private: System::Void quitBt_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult rst = MessageBox::Show ("Are you sure?", "Quitting", System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Question);
			  if ( rst == Windows::Forms::DialogResult::Yes)
				  Application::Exit();	
		 }
private: System::Void endGameBt_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 this->button1->Text = "x";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

