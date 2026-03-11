#pragma once

#include <vector>
#include <algorithm>
#include <cmath>
#include <functional>

#include "solver.hpp"
#include "functions.hpp"

namespace RK4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Window
	/// </summary>
	public ref class Window : public System::Windows::Forms::Form
	{
	public:
		Window(void)
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
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ tab1_dataGridView;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^ tab1_chart1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ tab1_button1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tab1_a;
	private: System::Windows::Forms::RichTextBox^ tab1_richTextBox1;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tab1_EPS_b;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tab1_b;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tab1_Nmax;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tab1_u0;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tab1_h;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ tab2_EPS;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tab2_Nmax;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tab2_u0;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ tab2_h0;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tab2_EPS_b;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ tab2_b;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ tab2_a;
	private: System::Windows::Forms::RichTextBox^ tab2_richTextBox1;
	private: System::Windows::Forms::Button^ tab2_button1;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::DataGridView^ tab2_dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ tab2_chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ tab3_chart2;



	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ tab3_Nmax;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ tab3_u0;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ tab3_h;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ tab3_EPS_b;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ tab3_b;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ tab3_a;

	private: System::Windows::Forms::RichTextBox^ tab3_richTextBox1;
private: System::Windows::Forms::Button^ tab3_button1;


	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::DataGridView^ tab3_dataGridView1;

private: System::Windows::Forms::DataVisualization::Charting::Chart^ tab3_chart1;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ tab3_u_0;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::TextBox^ tab4_EPS;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ tab4_u_0;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ tab4_chart2;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TextBox^ tab4_Nmax;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ tab4_u0;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ tab4_h;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ tab4_EPS_b;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ tab4_b;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ tab4_a;
private: System::Windows::Forms::RichTextBox^ tab4_richTextBox1;
private: System::Windows::Forms::Button^ tab4_button1;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::DataGridView^ tab4_dataGridView1;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ tab4_chart1;




























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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Window::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tab1_Nmax = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tab1_u0 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tab1_h = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tab1_EPS_b = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tab1_b = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tab1_a = (gcnew System::Windows::Forms::TextBox());
			this->tab1_richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab1_button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tab1_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->tab1_chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tab2_EPS = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tab2_Nmax = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tab2_u0 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tab2_h0 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tab2_EPS_b = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tab2_b = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tab2_a = (gcnew System::Windows::Forms::TextBox());
			this->tab2_richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab2_button1 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tab2_dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tab2_chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tab3_u_0 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->tab3_chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tab3_Nmax = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tab3_u0 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tab3_h = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tab3_EPS_b = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->tab3_b = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->tab3_a = (gcnew System::Windows::Forms::TextBox());
			this->tab3_richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab3_button1 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->tab3_dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tab3_chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->tab4_u_0 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->tab4_chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tab4_Nmax = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->tab4_u0 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->tab4_h = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->tab4_EPS_b = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->tab4_b = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->tab4_a = (gcnew System::Windows::Forms::TextBox());
			this->tab4_richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab4_button1 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->tab4_dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tab4_chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->tab4_EPS = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab1_dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab1_chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab2_dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab2_chart1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab3_chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab3_dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab3_chart1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab4_chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab4_dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab4_chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->ItemSize = System::Drawing::Size(190, 25);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1264, 681);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->tab1_Nmax);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->tab1_u0);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->tab1_h);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->tab1_EPS_b);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->tab1_b);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->tab1_a);
			this->tabPage1->Controls->Add(this->tab1_richTextBox1);
			this->tabPage1->Controls->Add(this->tab1_button1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->tab1_dataGridView);
			this->tabPage1->Controls->Add(this->tab1_chart1);
			this->tabPage1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1256, 648);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача (постоянный шаг)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1033, 486);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 20);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Nmax";
			// 
			// tab1_Nmax
			// 
			this->tab1_Nmax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab1_Nmax->Location = System::Drawing::Point(1092, 486);
			this->tab1_Nmax->Name = L"tab1_Nmax";
			this->tab1_Nmax->Size = System::Drawing::Size(110, 20);
			this->tab1_Nmax->TabIndex = 20;
			this->tab1_Nmax->Text = L"10000";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(1043, 428);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"u0";
			// 
			// tab1_u0
			// 
			this->tab1_u0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab1_u0->Location = System::Drawing::Point(1092, 430);
			this->tab1_u0->Name = L"tab1_u0";
			this->tab1_u0->Size = System::Drawing::Size(110, 20);
			this->tab1_u0->TabIndex = 18;
			this->tab1_u0->Text = L"2.0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(810, 542);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 20);
			this->label8->TabIndex = 17;
			this->label8->Text = L"EPS_b";
			// 
			// tab1_h
			// 
			this->tab1_h->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab1_h->Location = System::Drawing::Point(876, 603);
			this->tab1_h->Name = L"tab1_h";
			this->tab1_h->Size = System::Drawing::Size(110, 20);
			this->tab1_h->TabIndex = 16;
			this->tab1_h->Text = L"0.01";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(831, 603);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"h";
			// 
			// tab1_EPS_b
			// 
			this->tab1_EPS_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab1_EPS_b->Location = System::Drawing::Point(876, 542);
			this->tab1_EPS_b->Name = L"tab1_EPS_b";
			this->tab1_EPS_b->Size = System::Drawing::Size(110, 20);
			this->tab1_EPS_b->TabIndex = 14;
			this->tab1_EPS_b->Text = L"1e-8";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(831, 486);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"b";
			// 
			// tab1_b
			// 
			this->tab1_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab1_b->Location = System::Drawing::Point(876, 486);
			this->tab1_b->Name = L"tab1_b";
			this->tab1_b->Size = System::Drawing::Size(110, 20);
			this->tab1_b->TabIndex = 12;
			this->tab1_b->Text = L"1.0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(831, 430);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"a";
			// 
			// tab1_a
			// 
			this->tab1_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab1_a->Location = System::Drawing::Point(876, 430);
			this->tab1_a->Name = L"tab1_a";
			this->tab1_a->Size = System::Drawing::Size(110, 20);
			this->tab1_a->TabIndex = 10;
			this->tab1_a->Text = L"0.0";
			// 
			// tab1_richTextBox1
			// 
			this->tab1_richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->tab1_richTextBox1->Location = System::Drawing::Point(814, 136);
			this->tab1_richTextBox1->Name = L"tab1_richTextBox1";
			this->tab1_richTextBox1->Size = System::Drawing::Size(436, 263);
			this->tab1_richTextBox1->TabIndex = 8;
			this->tab1_richTextBox1->Text = L"";
			// 
			// tab1_button1
			// 
			this->tab1_button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab1_button1->Location = System::Drawing::Point(1059, 580);
			this->tab1_button1->Name = L"tab1_button1";
			this->tab1_button1->Size = System::Drawing::Size(191, 62);
			this->tab1_button1->TabIndex = 7;
			this->tab1_button1->Text = L"Произвести вычисления";
			this->tab1_button1->UseVisualStyleBackColor = true;
			this->tab1_button1->Click += gcnew System::EventHandler(this, &Window::tab1_button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1098, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L", x ∈ [a, b]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(904, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 67);
			this->label3->TabIndex = 5;
			this->label3->Text = L"{";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(959, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"u(a) = u0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(959, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"du / dx = -21u / 2";
			// 
			// tab1_dataGridView
			// 
			this->tab1_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tab1_dataGridView->Location = System::Drawing::Point(6, 405);
			this->tab1_dataGridView->Name = L"tab1_dataGridView";
			this->tab1_dataGridView->Size = System::Drawing::Size(802, 237);
			this->tab1_dataGridView->TabIndex = 2;
			// 
			// tab1_chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->tab1_chart1->ChartAreas->Add(chartArea1);
			this->tab1_chart1->Cursor = System::Windows::Forms::Cursors::Default;
			legend1->Name = L"Legend1";
			this->tab1_chart1->Legends->Add(legend1);
			this->tab1_chart1->Location = System::Drawing::Point(6, 6);
			this->tab1_chart1->Name = L"tab1_chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L" График не построен";
			this->tab1_chart1->Series->Add(series1);
			this->tab1_chart1->Size = System::Drawing::Size(802, 393);
			this->tab1_chart1->TabIndex = 0;
			this->tab1_chart1->Text = L"chart1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->tab2_EPS);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->tab2_Nmax);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->tab2_u0);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->tab2_h0);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->tab2_EPS_b);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->tab2_b);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->tab2_a);
			this->tabPage2->Controls->Add(this->tab2_richTextBox1);
			this->tabPage2->Controls->Add(this->tab2_button1);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->tab2_dataGridView1);
			this->tabPage2->Controls->Add(this->tab2_chart1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1256, 648);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Тестовая задача (адаптивный шаг)";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(1033, 542);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(44, 20);
			this->label21->TabIndex = 43;
			this->label21->Text = L"EPS";
			// 
			// tab2_EPS
			// 
			this->tab2_EPS->Location = System::Drawing::Point(1092, 542);
			this->tab2_EPS->Name = L"tab2_EPS";
			this->tab2_EPS->Size = System::Drawing::Size(110, 20);
			this->tab2_EPS->TabIndex = 42;
			this->tab2_EPS->Text = L"1e-6";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(1033, 486);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 20);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Nmax";
			// 
			// tab2_Nmax
			// 
			this->tab2_Nmax->Location = System::Drawing::Point(1092, 486);
			this->tab2_Nmax->Name = L"tab2_Nmax";
			this->tab2_Nmax->Size = System::Drawing::Size(110, 20);
			this->tab2_Nmax->TabIndex = 40;
			this->tab2_Nmax->Text = L"10000";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1043, 428);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 20);
			this->label12->TabIndex = 39;
			this->label12->Text = L"u0";
			// 
			// tab2_u0
			// 
			this->tab2_u0->Location = System::Drawing::Point(1092, 430);
			this->tab2_u0->Name = L"tab2_u0";
			this->tab2_u0->Size = System::Drawing::Size(110, 20);
			this->tab2_u0->TabIndex = 38;
			this->tab2_u0->Text = L"2.0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(810, 542);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 20);
			this->label13->TabIndex = 37;
			this->label13->Text = L"EPS_b";
			// 
			// tab2_h0
			// 
			this->tab2_h0->Location = System::Drawing::Point(876, 603);
			this->tab2_h0->Name = L"tab2_h0";
			this->tab2_h0->Size = System::Drawing::Size(110, 20);
			this->tab2_h0->TabIndex = 36;
			this->tab2_h0->Text = L"0.01";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(821, 603);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 20);
			this->label14->TabIndex = 35;
			this->label14->Text = L"h0";
			// 
			// tab2_EPS_b
			// 
			this->tab2_EPS_b->Location = System::Drawing::Point(876, 542);
			this->tab2_EPS_b->Name = L"tab2_EPS_b";
			this->tab2_EPS_b->Size = System::Drawing::Size(110, 20);
			this->tab2_EPS_b->TabIndex = 34;
			this->tab2_EPS_b->Text = L"1e-8";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(831, 486);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 20);
			this->label15->TabIndex = 33;
			this->label15->Text = L"b";
			// 
			// tab2_b
			// 
			this->tab2_b->Location = System::Drawing::Point(876, 486);
			this->tab2_b->Name = L"tab2_b";
			this->tab2_b->Size = System::Drawing::Size(110, 20);
			this->tab2_b->TabIndex = 32;
			this->tab2_b->Text = L"1.0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(831, 430);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 20);
			this->label16->TabIndex = 31;
			this->label16->Text = L"a";
			// 
			// tab2_a
			// 
			this->tab2_a->Location = System::Drawing::Point(876, 430);
			this->tab2_a->Name = L"tab2_a";
			this->tab2_a->Size = System::Drawing::Size(110, 20);
			this->tab2_a->TabIndex = 30;
			this->tab2_a->Text = L"0.0";
			// 
			// tab2_richTextBox1
			// 
			this->tab2_richTextBox1->Location = System::Drawing::Point(814, 136);
			this->tab2_richTextBox1->Name = L"tab2_richTextBox1";
			this->tab2_richTextBox1->Size = System::Drawing::Size(436, 263);
			this->tab2_richTextBox1->TabIndex = 29;
			this->tab2_richTextBox1->Text = L"";
			// 
			// tab2_button1
			// 
			this->tab2_button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab2_button1->Location = System::Drawing::Point(1059, 580);
			this->tab2_button1->Name = L"tab2_button1";
			this->tab2_button1->Size = System::Drawing::Size(191, 62);
			this->tab2_button1->TabIndex = 28;
			this->tab2_button1->Text = L"Произвести вычисления";
			this->tab2_button1->UseVisualStyleBackColor = true;
			this->tab2_button1->Click += gcnew System::EventHandler(this, &Window::tab2_button1_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(1098, 64);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(87, 20);
			this->label17->TabIndex = 27;
			this->label17->Text = L", x ∈ [a, b]";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(904, 35);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(49, 67);
			this->label18->TabIndex = 26;
			this->label18->Text = L"{";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(959, 81);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(81, 20);
			this->label19->TabIndex = 25;
			this->label19->Text = L"u(a) = u0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(959, 48);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(143, 20);
			this->label20->TabIndex = 24;
			this->label20->Text = L"du / dx = -21u / 2";
			// 
			// tab2_dataGridView1
			// 
			this->tab2_dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tab2_dataGridView1->Location = System::Drawing::Point(6, 405);
			this->tab2_dataGridView1->Name = L"tab2_dataGridView1";
			this->tab2_dataGridView1->Size = System::Drawing::Size(802, 237);
			this->tab2_dataGridView1->TabIndex = 23;
			// 
			// tab2_chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->tab2_chart1->ChartAreas->Add(chartArea2);
			this->tab2_chart1->Cursor = System::Windows::Forms::Cursors::Default;
			legend2->Name = L"Legend1";
			this->tab2_chart1->Legends->Add(legend2);
			this->tab2_chart1->Location = System::Drawing::Point(6, 6);
			this->tab2_chart1->Name = L"tab2_chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L" График не построен";
			this->tab2_chart1->Series->Add(series2);
			this->tab2_chart1->Size = System::Drawing::Size(802, 393);
			this->tab2_chart1->TabIndex = 22;
			this->tab2_chart1->Text = L"chart1";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->tab3_u_0);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->tab3_chart2);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->tab3_Nmax);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->tab3_u0);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->tab3_h);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->tab3_EPS_b);
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->tab3_b);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->tab3_a);
			this->tabPage3->Controls->Add(this->tab3_richTextBox1);
			this->tabPage3->Controls->Add(this->tab3_button1);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->label30);
			this->tabPage3->Controls->Add(this->label31);
			this->tabPage3->Controls->Add(this->label32);
			this->tabPage3->Controls->Add(this->tab3_dataGridView1);
			this->tabPage3->Controls->Add(this->tab3_chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1256, 648);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Основная задача (постоянный шаг)";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(1088, 460);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(33, 20);
			this->label22->TabIndex = 69;
			this->label22->Text = L"u\'0";
			// 
			// tab3_u_0
			// 
			this->tab3_u_0->Location = System::Drawing::Point(1137, 462);
			this->tab3_u_0->Name = L"tab3_u_0";
			this->tab3_u_0->Size = System::Drawing::Size(110, 20);
			this->tab3_u_0->TabIndex = 68;
			this->tab3_u_0->Text = L"2.0";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(935, 84);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(89, 20);
			this->label33->TabIndex = 67;
			this->label33->Text = L"u\'(a) = u\'0";
			// 
			// tab3_chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->tab3_chart2->ChartAreas->Add(chartArea3);
			this->tab3_chart2->Cursor = System::Windows::Forms::Cursors::Default;
			legend3->Name = L"Legend1";
			this->tab3_chart2->Legends->Add(legend3);
			this->tab3_chart2->Location = System::Drawing::Point(439, 6);
			this->tab3_chart2->Name = L"tab3_chart2";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L" График не построен";
			this->tab3_chart2->Series->Add(series3);
			this->tab3_chart2->Size = System::Drawing::Size(431, 393);
			this->tab3_chart2->TabIndex = 66;
			this->tab3_chart2->Text = L"chart2";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(1078, 499);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(53, 20);
			this->label23->TabIndex = 63;
			this->label23->Text = L"Nmax";
			// 
			// tab3_Nmax
			// 
			this->tab3_Nmax->Location = System::Drawing::Point(1137, 499);
			this->tab3_Nmax->Name = L"tab3_Nmax";
			this->tab3_Nmax->Size = System::Drawing::Size(110, 20);
			this->tab3_Nmax->TabIndex = 62;
			this->tab3_Nmax->Text = L"10000";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(1088, 422);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(29, 20);
			this->label24->TabIndex = 61;
			this->label24->Text = L"u0";
			// 
			// tab3_u0
			// 
			this->tab3_u0->Location = System::Drawing::Point(1137, 424);
			this->tab3_u0->Name = L"tab3_u0";
			this->tab3_u0->Size = System::Drawing::Size(110, 20);
			this->tab3_u0->TabIndex = 60;
			this->tab3_u0->Text = L"2.0";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(878, 499);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(64, 20);
			this->label25->TabIndex = 59;
			this->label25->Text = L"EPS_b";
			// 
			// tab3_h
			// 
			this->tab3_h->Location = System::Drawing::Point(944, 538);
			this->tab3_h->Name = L"tab3_h";
			this->tab3_h->Size = System::Drawing::Size(110, 20);
			this->tab3_h->TabIndex = 58;
			this->tab3_h->Text = L"0.01";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(899, 536);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(19, 20);
			this->label26->TabIndex = 57;
			this->label26->Text = L"h";
			// 
			// tab3_EPS_b
			// 
			this->tab3_EPS_b->Location = System::Drawing::Point(944, 499);
			this->tab3_EPS_b->Name = L"tab3_EPS_b";
			this->tab3_EPS_b->Size = System::Drawing::Size(110, 20);
			this->tab3_EPS_b->TabIndex = 56;
			this->tab3_EPS_b->Text = L"1e-8";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(899, 460);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(19, 20);
			this->label27->TabIndex = 55;
			this->label27->Text = L"b";
			// 
			// tab3_b
			// 
			this->tab3_b->Location = System::Drawing::Point(944, 460);
			this->tab3_b->Name = L"tab3_b";
			this->tab3_b->Size = System::Drawing::Size(110, 20);
			this->tab3_b->TabIndex = 54;
			this->tab3_b->Text = L"1.0";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(899, 424);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(19, 20);
			this->label28->TabIndex = 53;
			this->label28->Text = L"a";
			// 
			// tab3_a
			// 
			this->tab3_a->Location = System::Drawing::Point(944, 424);
			this->tab3_a->Name = L"tab3_a";
			this->tab3_a->Size = System::Drawing::Size(110, 20);
			this->tab3_a->TabIndex = 52;
			this->tab3_a->Text = L"0.0";
			// 
			// tab3_richTextBox1
			// 
			this->tab3_richTextBox1->Location = System::Drawing::Point(876, 130);
			this->tab3_richTextBox1->Name = L"tab3_richTextBox1";
			this->tab3_richTextBox1->Size = System::Drawing::Size(374, 263);
			this->tab3_richTextBox1->TabIndex = 51;
			this->tab3_richTextBox1->Text = L"";
			// 
			// tab3_button1
			// 
			this->tab3_button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab3_button1->Location = System::Drawing::Point(1059, 580);
			this->tab3_button1->Name = L"tab3_button1";
			this->tab3_button1->Size = System::Drawing::Size(191, 62);
			this->tab3_button1->TabIndex = 50;
			this->tab3_button1->Text = L"Произвести вычисления";
			this->tab3_button1->UseVisualStyleBackColor = true;
			this->tab3_button1->Click += gcnew System::EventHandler(this, &Window::tab3_button1_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(1153, 64);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(87, 20);
			this->label29->TabIndex = 49;
			this->label29->Text = L", x ∈ [a, b]";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::White;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(880, 34);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(49, 67);
			this->label30->TabIndex = 48;
			this->label30->Text = L"{";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(935, 64);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(81, 20);
			this->label31->TabIndex = 47;
			this->label31->Text = L"u(a) = u0";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(935, 44);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(212, 20);
			this->label32->TabIndex = 46;
			this->label32->Text = L"mu\'\'+ cu\' + ku + k*u^3 = 0";
			// 
			// tab3_dataGridView1
			// 
			this->tab3_dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tab3_dataGridView1->Location = System::Drawing::Point(6, 405);
			this->tab3_dataGridView1->Name = L"tab3_dataGridView1";
			this->tab3_dataGridView1->Size = System::Drawing::Size(866, 237);
			this->tab3_dataGridView1->TabIndex = 45;
			// 
			// tab3_chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->tab3_chart1->ChartAreas->Add(chartArea4);
			this->tab3_chart1->Cursor = System::Windows::Forms::Cursors::Default;
			legend4->Name = L"Legend1";
			this->tab3_chart1->Legends->Add(legend4);
			this->tab3_chart1->Location = System::Drawing::Point(6, 6);
			this->tab3_chart1->Name = L"tab3_chart1";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L" График не построен";
			this->tab3_chart1->Series->Add(series4);
			this->tab3_chart1->Size = System::Drawing::Size(427, 393);
			this->tab3_chart1->TabIndex = 44;
			this->tab3_chart1->Text = L"chart1";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label46);
			this->tabPage4->Controls->Add(this->tab4_EPS);
			this->tabPage4->Controls->Add(this->label34);
			this->tabPage4->Controls->Add(this->tab4_u_0);
			this->tabPage4->Controls->Add(this->label35);
			this->tabPage4->Controls->Add(this->tab4_chart2);
			this->tabPage4->Controls->Add(this->label36);
			this->tabPage4->Controls->Add(this->tab4_Nmax);
			this->tabPage4->Controls->Add(this->label37);
			this->tabPage4->Controls->Add(this->tab4_u0);
			this->tabPage4->Controls->Add(this->label38);
			this->tabPage4->Controls->Add(this->tab4_h);
			this->tabPage4->Controls->Add(this->label39);
			this->tabPage4->Controls->Add(this->tab4_EPS_b);
			this->tabPage4->Controls->Add(this->label40);
			this->tabPage4->Controls->Add(this->tab4_b);
			this->tabPage4->Controls->Add(this->label41);
			this->tabPage4->Controls->Add(this->tab4_a);
			this->tabPage4->Controls->Add(this->tab4_richTextBox1);
			this->tabPage4->Controls->Add(this->tab4_button1);
			this->tabPage4->Controls->Add(this->label42);
			this->tabPage4->Controls->Add(this->label43);
			this->tabPage4->Controls->Add(this->label44);
			this->tabPage4->Controls->Add(this->label45);
			this->tabPage4->Controls->Add(this->tab4_dataGridView1);
			this->tabPage4->Controls->Add(this->tab4_chart1);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1256, 648);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Основная задача (адаптивный шаг)";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(1088, 460);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(33, 20);
			this->label34->TabIndex = 93;
			this->label34->Text = L"u\'0";
			// 
			// tab4_u_0
			// 
			this->tab4_u_0->Location = System::Drawing::Point(1137, 462);
			this->tab4_u_0->Name = L"tab4_u_0";
			this->tab4_u_0->Size = System::Drawing::Size(110, 20);
			this->tab4_u_0->TabIndex = 92;
			this->tab4_u_0->Text = L"2.0";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(935, 84);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(89, 20);
			this->label35->TabIndex = 91;
			this->label35->Text = L"u\'(a) = u\'0";
			// 
			// tab4_chart2
			// 
			chartArea5->Name = L"ChartArea1";
			this->tab4_chart2->ChartAreas->Add(chartArea5);
			this->tab4_chart2->Cursor = System::Windows::Forms::Cursors::Default;
			legend5->Name = L"Legend1";
			this->tab4_chart2->Legends->Add(legend5);
			this->tab4_chart2->Location = System::Drawing::Point(439, 6);
			this->tab4_chart2->Name = L"tab4_chart2";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L" График не построен";
			this->tab4_chart2->Series->Add(series5);
			this->tab4_chart2->Size = System::Drawing::Size(431, 393);
			this->tab4_chart2->TabIndex = 90;
			this->tab4_chart2->Text = L"chart2";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(1078, 499);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(53, 20);
			this->label36->TabIndex = 89;
			this->label36->Text = L"Nmax";
			// 
			// tab4_Nmax
			// 
			this->tab4_Nmax->Location = System::Drawing::Point(1137, 499);
			this->tab4_Nmax->Name = L"tab4_Nmax";
			this->tab4_Nmax->Size = System::Drawing::Size(110, 20);
			this->tab4_Nmax->TabIndex = 88;
			this->tab4_Nmax->Text = L"10000";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(1088, 422);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(29, 20);
			this->label37->TabIndex = 87;
			this->label37->Text = L"u0";
			// 
			// tab4_u0
			// 
			this->tab4_u0->Location = System::Drawing::Point(1137, 424);
			this->tab4_u0->Name = L"tab4_u0";
			this->tab4_u0->Size = System::Drawing::Size(110, 20);
			this->tab4_u0->TabIndex = 86;
			this->tab4_u0->Text = L"2.0";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(878, 499);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(64, 20);
			this->label38->TabIndex = 85;
			this->label38->Text = L"EPS_b";
			// 
			// tab4_h
			// 
			this->tab4_h->Location = System::Drawing::Point(944, 538);
			this->tab4_h->Name = L"tab4_h";
			this->tab4_h->Size = System::Drawing::Size(110, 20);
			this->tab4_h->TabIndex = 84;
			this->tab4_h->Text = L"0.01";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(899, 536);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(29, 20);
			this->label39->TabIndex = 83;
			this->label39->Text = L"h0";
			// 
			// tab4_EPS_b
			// 
			this->tab4_EPS_b->Location = System::Drawing::Point(944, 499);
			this->tab4_EPS_b->Name = L"tab4_EPS_b";
			this->tab4_EPS_b->Size = System::Drawing::Size(110, 20);
			this->tab4_EPS_b->TabIndex = 82;
			this->tab4_EPS_b->Text = L"1e-8";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(899, 460);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(19, 20);
			this->label40->TabIndex = 81;
			this->label40->Text = L"b";
			// 
			// tab4_b
			// 
			this->tab4_b->Location = System::Drawing::Point(944, 460);
			this->tab4_b->Name = L"tab4_b";
			this->tab4_b->Size = System::Drawing::Size(110, 20);
			this->tab4_b->TabIndex = 80;
			this->tab4_b->Text = L"1.0";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(899, 424);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(19, 20);
			this->label41->TabIndex = 79;
			this->label41->Text = L"a";
			// 
			// tab4_a
			// 
			this->tab4_a->Location = System::Drawing::Point(944, 424);
			this->tab4_a->Name = L"tab4_a";
			this->tab4_a->Size = System::Drawing::Size(110, 20);
			this->tab4_a->TabIndex = 78;
			this->tab4_a->Text = L"0.0";
			// 
			// tab4_richTextBox1
			// 
			this->tab4_richTextBox1->Location = System::Drawing::Point(876, 130);
			this->tab4_richTextBox1->Name = L"tab4_richTextBox1";
			this->tab4_richTextBox1->Size = System::Drawing::Size(374, 263);
			this->tab4_richTextBox1->TabIndex = 77;
			this->tab4_richTextBox1->Text = L"";
			// 
			// tab4_button1
			// 
			this->tab4_button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tab4_button1->Location = System::Drawing::Point(1059, 580);
			this->tab4_button1->Name = L"tab4_button1";
			this->tab4_button1->Size = System::Drawing::Size(191, 62);
			this->tab4_button1->TabIndex = 76;
			this->tab4_button1->Text = L"Произвести вычисления";
			this->tab4_button1->UseVisualStyleBackColor = true;
			this->tab4_button1->Click += gcnew System::EventHandler(this, &Window::tab4_button1_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(1153, 64);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(87, 20);
			this->label42->TabIndex = 75;
			this->label42->Text = L", x ∈ [a, b]";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::White;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 44.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->Location = System::Drawing::Point(880, 34);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(49, 67);
			this->label43->TabIndex = 74;
			this->label43->Text = L"{";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->Location = System::Drawing::Point(935, 64);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(81, 20);
			this->label44->TabIndex = 73;
			this->label44->Text = L"u(a) = u0";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->Location = System::Drawing::Point(935, 44);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(212, 20);
			this->label45->TabIndex = 72;
			this->label45->Text = L"mu\'\'+ cu\' + ku + k*u^3 = 0";
			// 
			// tab4_dataGridView1
			// 
			this->tab4_dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tab4_dataGridView1->Location = System::Drawing::Point(6, 405);
			this->tab4_dataGridView1->Name = L"tab4_dataGridView1";
			this->tab4_dataGridView1->Size = System::Drawing::Size(866, 237);
			this->tab4_dataGridView1->TabIndex = 71;
			// 
			// tab4_chart1
			// 
			chartArea6->Name = L"ChartArea1";
			this->tab4_chart1->ChartAreas->Add(chartArea6);
			this->tab4_chart1->Cursor = System::Windows::Forms::Cursors::Default;
			legend6->Name = L"Legend1";
			this->tab4_chart1->Legends->Add(legend6);
			this->tab4_chart1->Location = System::Drawing::Point(6, 6);
			this->tab4_chart1->Name = L"tab4_chart1";
			series6->ChartArea = L"ChartArea1";
			series6->Legend = L"Legend1";
			series6->Name = L" График не построен";
			this->tab4_chart1->Series->Add(series6);
			this->tab4_chart1->Size = System::Drawing::Size(427, 393);
			this->tab4_chart1->TabIndex = 70;
			this->tab4_chart1->Text = L"chart1";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->Location = System::Drawing::Point(1078, 536);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(44, 20);
			this->label46->TabIndex = 95;
			this->label46->Text = L"EPS";
			// 
			// tab4_EPS
			// 
			this->tab4_EPS->Location = System::Drawing::Point(1137, 536);
			this->tab4_EPS->Name = L"tab4_EPS";
			this->tab4_EPS->Size = System::Drawing::Size(110, 20);
			this->tab4_EPS->TabIndex = 94;
			this->tab4_EPS->Text = L"1e-6";
			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Window";
			this->Text = L"RK4";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab1_dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab1_chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab2_dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab2_chart1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab3_chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab3_dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab3_chart1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab4_chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab4_dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab4_chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



private: System::Void tab1_button1_Click(System::Object^ sender, System::EventArgs^ e) {

	TextBox^ tb_a = this->tab1_a;
	TextBox^ tb_b = this->tab1_b;
	TextBox^ tb_EPS_b = this->tab1_EPS_b;
	TextBox^ tb_h = this->tab1_h;
	TextBox^ tb_Nmax = this->tab1_Nmax;
	TextBox^ tb_u0 = this->tab1_u0;
	DataGridView^ dgv = this->tab1_dataGridView;

	System::Windows::Forms::DataVisualization::Charting::Chart^ chart1 = this->tab1_chart1;

	double a, b, EPS_b, h, u0;
	int Nmax;

	// Парсинг и проверка корректности введённых данных
	if (!Double::TryParse(tb_a->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, a)) {
		MessageBox::Show("Некорректное значение a", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!Double::TryParse(tb_b->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, b)) {
		MessageBox::Show("Некорректное значение b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!Double::TryParse(tb_EPS_b->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, EPS_b)) {
		MessageBox::Show("Некорректное значение EPS_b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!Double::TryParse(tb_h->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, h)) {
		MessageBox::Show("Некорректное значение h", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!Int32::TryParse(tb_Nmax->Text, System::Globalization::NumberStyles::Integer,
		System::Globalization::CultureInfo::InvariantCulture, Nmax)) {
		MessageBox::Show("Некорректное значение Nmax", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!Double::TryParse(tb_u0->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, u0)) {
		MessageBox::Show("Некорректное значение u0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Дополнительные проверки условий
	if (a > b) {
		MessageBox::Show("a должно быть <= b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (EPS_b <= 0.0) {
		MessageBox::Show("EPS_b должно быть > 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (EPS_b >= b - a) {
		MessageBox::Show("EPS_b слишком велико", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (h <= 0.0) {
		MessageBox::Show("h должно быть > 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (Nmax <= 0) {
		MessageBox::Show("Nmax должно быть > 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Правая часть ДУ: используем готовую функцию f1
	vf F(1);
	F[0] = f1;   // f1 должна быть объявлена ранее, например: double f1(double, const vd&);

	// Настройка таблицы
	dgv->Rows->Clear();
	if (dgv->Columns->Count == 0) {
		dgv->Columns->Add("i", "Итерация i");
		dgv->Columns->Add("xi", "xi");
		dgv->Columns->Add("vi", "vi (РК4)");
		dgv->Columns->Add("hi", "hi");
		dgv->Columns->Add("ui", "ui (точное)");
		dgv->Columns->Add("abs", "|ui-vi|");
	}

	// Начальные условия
	double x = a;
	vd v = { u0 };
	int i = 0;
	std::vector<double> xs, vs, us; // для хранения точек графиков

	// Вычисление точного решения в начальной точке
	double ui = exact_f1(x, a, u0);
	double abs_err = std::abs(ui - v[0]);
	dgv->Rows->Add(i.ToString(), x.ToString("F10"), v[0].ToString("F10"), "-",
		ui.ToString("F10"), abs_err.ToString("F10"));

	xs.push_back(x);
	vs.push_back(v[0]);
	us.push_back(ui);

	double max_abs_err = abs_err;
	double max_abs_err_x = x;

	// Основной цикл интегрирования
	while (x < b - EPS_b && i < Nmax) {
		// Один шаг метода Рунге–Кутты
		auto next = RK4(std::make_pair(x, v), F, h, b, EPS_b);
		double new_x = next.first;
		vd new_v = next.second;
		double hi = new_x - x;   // реально использованный шаг

		if (hi <= 0.0) break;   // защита от зацикливания

		i++;
		x = new_x;
		v = new_v;

		// Точное решение в новой точке
		ui = exact_f1(x, a, u0);
		abs_err = std::abs(ui - v[0]);
		dgv->Rows->Add(i.ToString(), x.ToString("F10"), v[0].ToString("F10"),
			hi.ToString("F10"), ui.ToString("F10"), abs_err.ToString("F10"));

		if (abs_err > max_abs_err) {
			max_abs_err = abs_err;
			max_abs_err_x = x;
		}

		xs.push_back(x);
		vs.push_back(v[0]);
		us.push_back(ui);
	}

	// Формирование отчёта о завершении
	String^ report;
	if (x >= b - EPS_b) {
		report = String::Format(
			"Достигнута правая граница b = {0:F10} на итерации {1} с точностью до EPS_b. Последний x = {2:F10}",
			b, i, x);
	}
	else {
		report = String::Format(
			"Достигнуто максимальное число итераций Nmax = {0} на итерации {1}, "
			"но правая граница b = {2:F10} не достигнута. Последний x = {3:F10}",
			Nmax, i, b, x);
	}

	report += String::Format(
		"\n\nmax |ui - vi| = {0:F10} при x = {1:F10}"
		"\n\nn = {2},  b - xn = {3:F10}",
		max_abs_err, max_abs_err_x,
		i, (b - x)
	);

	tab1_richTextBox1->Clear();
	tab1_richTextBox1->AppendText(report);

	// Вывод в RichTextBox
	tab1_richTextBox1->Clear();
	tab1_richTextBox1->AppendText(report);

	using namespace System::Windows::Forms::DataVisualization::Charting;



	// Очистка старых серий
	chart1->Series->Clear();

	tab1_chart1->MouseWheel += gcnew MouseEventHandler(this, &Window::chart_MouseWheel);

	auto area = tab1_chart1->ChartAreas[0];

	// убираем линии курсора
	area->CursorX->LineColor = System::Drawing::Color::Transparent;
	area->CursorY->LineColor = System::Drawing::Color::Transparent;

	// отключаем авто-интервалы
	area->AxisX->IntervalAutoMode =
		System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;

	// Создание серий для первого графика
	Series^ seriesExact1 = gcnew Series();
	seriesExact1->Name = "Точное решение";
	seriesExact1->ChartType = SeriesChartType::Line;
	seriesExact1->BorderWidth = 2;

	Series^ seriesRK41 = gcnew Series();
	seriesRK41->Name = "РК4";
	seriesRK41->ChartType = SeriesChartType::Point;
	seriesRK41->MarkerSize = 8;
	seriesRK41->MarkerStyle = MarkerStyle::Circle;

	// Добавляем серии на графики
	chart1->Series->Add(seriesExact1);
	chart1->Series->Add(seriesRK41);

	// Заполняем точки
	for (size_t j = 0; j < xs.size(); ++j) {
		seriesExact1->Points->AddXY(xs[j], us[j]);
		seriesRK41->Points->AddXY(xs[j], vs[j]);
	}

}

private: System::Void chart_MouseWheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	auto chart = safe_cast<System::Windows::Forms::DataVisualization::Charting::Chart^>(sender);
	auto area = chart->ChartAreas[0];

	try
	{
		double xMin = area->AxisX->ScaleView->ViewMinimum;
		double xMax = area->AxisX->ScaleView->ViewMaximum;

		double posX = area->AxisX->PixelPositionToValue(e->Location.X);

		double scale = (xMax - xMin) / 4.0;

		if (e->Delta > 0) // zoom in
		{
			double newMin = posX - scale;
			double newMax = posX + scale;

			area->AxisX->ScaleView->Zoom(newMin, newMax);
		}
		else if (e->Delta < 0) // zoom out
		{
			double newMin = xMin - scale;
			double newMax = xMax + scale;

			area->AxisX->ScaleView->Zoom(newMin, newMax);
		}
	}
	catch (...) {}
}


private: System::Void tab2_button1_Click(System::Object^ sender, System::EventArgs^ e) {

	TextBox^ tb_a = this->tab2_a;
	TextBox^ tb_b = this->tab2_b;
	TextBox^ tb_EPS_b = this->tab2_EPS_b;
	TextBox^ tb_h0 = this->tab2_h0;
	TextBox^ tb_EPS = this->tab2_EPS;
	TextBox^ tb_Nmax = this->tab2_Nmax;
	TextBox^ tb_u0 = this->tab2_u0;

	DataGridView^ dgv = this->tab2_dataGridView1;
	auto chart1 = this->tab2_chart1;

	double a, b, EPS_b, h, EPS, u0;
	int Nmax;

	if (!Double::TryParse(tb_a->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, a)) {
		MessageBox::Show("Некорректное значение a");
		return;
	}

	if (!Double::TryParse(tb_b->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, b)) {
		MessageBox::Show("Некорректное значение b");
		return;
	}

	if (!Double::TryParse(tb_EPS_b->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, EPS_b)) {
		MessageBox::Show("Некорректное значение EPS_b");
		return;
	}

	if (!Double::TryParse(tb_h0->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, h)) {
		MessageBox::Show("Некорректное значение h0");
		return;
	}

	if (!Double::TryParse(tb_EPS->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, EPS)) {
		MessageBox::Show("Некорректное значение EPS");
		return;
	}

	if (!Int32::TryParse(tb_Nmax->Text, System::Globalization::NumberStyles::Integer,
		System::Globalization::CultureInfo::InvariantCulture, Nmax)) {
		MessageBox::Show("Некорректное значение Nmax");
		return;
	}

	if (!Double::TryParse(tb_u0->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, u0)) {
		MessageBox::Show("Некорректное значение u0");
		return;
	}

	if (a > b) {
		MessageBox::Show("a должно быть <= b");
		return;
	}

	if (EPS <= 0) {
		MessageBox::Show("EPS должно быть > 0");
		return;
	}

	if (h <= 0) {
		MessageBox::Show("h0 должно быть > 0");
		return;
	}

	if (Nmax <= 0) {
		MessageBox::Show("Nmax должно быть > 0");
		return;
	}

	// Правая часть
	vf F(1);
	F[0] = f1;

	// Настройка таблицы
	dgv->Rows->Clear();
	dgv->Columns->Clear();

	dgv->Columns->Add("i", "i");
	dgv->Columns->Add("xi", "xi");
	dgv->Columns->Add("vi", "vi");
	dgv->Columns->Add("v2i", "v2i");
	dgv->Columns->Add("diff", "vi-v2i");
	dgv->Columns->Add("olp", "ОЛП");
	dgv->Columns->Add("hi", "hi");
	dgv->Columns->Add("C1", "C1");
	dgv->Columns->Add("C2", "C2");
	dgv->Columns->Add("ui", "ui");
	dgv->Columns->Add("abs", "|ui-vi|");

	// начальные условия
	double x = a;
	vd v = { u0 };

	int i = 0;

	std::vector<double> xs, vs, us;

	double ui = exact_f1(x, a, u0);

	dgv->Rows->Add(
		"0",
		x.ToString("F10"),
		v[0].ToString("F10"),
		"-",
		"-",
		"-",
		"-",
		"0",
		"0",
		ui.ToString("F10"),
		Math::Abs(ui - v[0]).ToString("F10")
	);

	xs.push_back(x);
	vs.push_back(v[0]);
	us.push_back(ui);

	int C1 = 0;
	int C2 = 0;
	int cnt_iter = 0;

	double max_abs_diff = Math::Abs(exact_f1(x, a, u0) - v[0]);
	double max_abs_diff_x = x;
	double max_olp = 0.0;
	double max_hi = h, min_hi = h;
	double max_hi_x = x, min_hi_x = x;
	int total_C1 = 0, total_C2 = 0;

	while (x < b - EPS_b && i < Nmax) {

		C1 = 0;
		C2 = 0;

		vd v2;

		auto next = RK4(
			std::make_pair(x, v),
			F,
			h,
			b,
			EPS_b,
			EPS,
			C1,
			C2,
			cnt_iter,
			Nmax,
			v2
		);

		double new_x = next.first;
		vd new_v = next.second;

		double hi = new_x - x;

		if (hi <= 0) break;

		i++;

		double diff = new_v[0] - v2[0];
		double olp = std::abs(diff) / 15.0;

		x = new_x;
		v = new_v;

		ui = exact_f1(x, a, u0);

		if (std::abs(ui - v[0]) > max_abs_diff) {
			max_abs_diff = std::abs(ui - v[0]);
			max_abs_diff_x = x;
		}
		if (olp > max_olp) {
			max_olp = olp;
		}
		if (hi > max_hi) {
			max_hi = hi;
			max_hi_x = x;
		}
		if (hi < min_hi) {
			min_hi = hi;
			min_hi_x = x;
		}
		total_C1 += C1;
		total_C2 += C2;

		dgv->Rows->Add(
			i.ToString(),
			x.ToString("F10"),
			v[0].ToString("F10"),
			v2[0].ToString("F10"),
			diff.ToString("F10"),
			olp.ToString("F10"),
			hi.ToString("F10"),
			C1.ToString(),
			C2.ToString(),
			ui.ToString("F10"),
			std::abs(ui - v[0]).ToString("F10")
		);

		xs.push_back(x);
		vs.push_back(v[0]);
		us.push_back(ui);
	}

	// отчет
	String^ report;

	if (x >= b - EPS_b) {
		report = String::Format(
			"Достигнута правая граница b = {0:F10} на шаге {1} с точностью до EPS_b",
			b, i);
	}
	else {
		report = String::Format(
			"Достигнут предел итераций Nmax = {0}, x = {1:F10}",
			Nmax, x);
	}

	report += String::Format(
		"\n\nmax |ui - vi| = {0:F10} при x = {1:F10}"
		"\n\nn = {2},  b - xn = {3:F10}"
		"\nmax |ОЛП| = {4:F10}"
		"\nОбщее число удвоений шага (C1) = {5}"
		"\nОбщее число делений шага  (C2) = {6}"
		"\nmax hi = {7:F10} при x = {8:F10}"
		"\nmin hi = {9:F10} при x = {10:F10}",
		max_abs_diff, max_abs_diff_x,
		i, (b - x),
		max_olp,
		total_C1, total_C2,
		max_hi, max_hi_x,
		min_hi, min_hi_x
	);

	tab2_richTextBox1->Clear();
	tab2_richTextBox1->AppendText(report);

	using namespace System::Windows::Forms::DataVisualization::Charting;

	chart1->Series->Clear();

	chart1->MouseWheel += gcnew MouseEventHandler(this, &Window::chart_MouseWheel);

	auto area = chart1->ChartAreas[0];

	area->CursorX->LineColor = System::Drawing::Color::Transparent;
	area->CursorY->LineColor = System::Drawing::Color::Transparent;

	Series^ seriesExact = gcnew Series();
	seriesExact->Name = "Точное решение";
	seriesExact->ChartType = SeriesChartType::Line;
	seriesExact->BorderWidth = 2;

	Series^ seriesRK4 = gcnew Series();
	seriesRK4->Name = "РК4";
	seriesRK4->ChartType = SeriesChartType::Point;
	seriesRK4->MarkerSize = 8;
	seriesRK4->MarkerStyle = MarkerStyle::Circle;

	chart1->Series->Add(seriesExact);
	chart1->Series->Add(seriesRK4);

	for (size_t j = 0; j < xs.size(); j++) {
		seriesExact->Points->AddXY(xs[j], us[j]);
		seriesRK4->Points->AddXY(xs[j], vs[j]);
	}
}
private: System::Void tab3_button1_Click(System::Object^ sender, System::EventArgs^ e) {

	TextBox^ tb_a = this->tab3_a;
	TextBox^ tb_b = this->tab3_b;
	TextBox^ tb_EPS_b = this->tab3_EPS_b;
	TextBox^ tb_h = this->tab3_h;
	TextBox^ tb_u0 = this->tab3_u0;
	TextBox^ tb_du0 = this->tab3_u_0;
	TextBox^ tb_Nmax = this->tab3_Nmax;

	DataGridView^ dgv = this->tab3_dataGridView1;
	auto chart1 = this->tab3_chart1;
	auto chart2 = this->tab3_chart2;

	double a, b, EPS_b, h, u0, du0;
	int Nmax;

	// --- Парсинг ---
	if (!Double::TryParse(tb_a->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, a)) {
		MessageBox::Show("Некорректное значение a", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_b->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, b)) {
		MessageBox::Show("Некорректное значение b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_EPS_b->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, EPS_b)) {
		MessageBox::Show("Некорректное значение EPS_b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_h->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, h)) {
		MessageBox::Show("Некорректное значение h", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Int32::TryParse(tb_Nmax->Text, System::Globalization::NumberStyles::Integer,
		System::Globalization::CultureInfo::InvariantCulture, Nmax)) {
		MessageBox::Show("Некорректное значение Nmax", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_u0->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, u0)) {
		MessageBox::Show("Некорректное значение u0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_du0->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, du0)) {
		MessageBox::Show("Некорректное значение u'0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}

	// --- Проверки ---
	if (a > b) {
		MessageBox::Show("a должно быть <= b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (EPS_b <= 0.0 || EPS_b >= b - a) {
		MessageBox::Show("Некорректное значение EPS_b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (h <= 0.0) {
		MessageBox::Show("h должно быть > 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (Nmax <= 0) {
		MessageBox::Show("Nmax должно быть > 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}

	// --- Правая часть системы ---
	// v[0] = u,  v[0]' = v[1]
	// v[1] = u', v[1]' = -(c*v[1] + k*v[0] + k_star*v[0]^3) / m
	vf F(2);
	F[0] = f2;
	F[1] = f3;

	// --- Настройка таблицы ---
	dgv->Rows->Clear();
	if (dgv->Columns->Count == 0) {
		dgv->Columns->Add("i", "i");
		dgv->Columns->Add("xi", "xi");
		dgv->Columns->Add("ui", "v(xi)");
		dgv->Columns->Add("dui", "v'(xi)");
		dgv->Columns->Add("hi", "hi");
	}

	// --- Начальные условия ---
	double x = a;
	vd v = { u0, du0 };
	int i = 0;

	std::vector<double> xs, us, dus; // для графиков

	dgv->Rows->Add(
		i.ToString(),
		x.ToString("F10"),
		v[0].ToString("F10"),
		v[1].ToString("F10"),
		"-"
	);
	xs.push_back(x);
	us.push_back(v[0]);
	dus.push_back(v[1]);

	// --- Основной цикл ---
	while (x < b - EPS_b && i < Nmax) {
		auto next = RK4(std::make_pair(x, v), F, h, b, EPS_b);
		double new_x = next.first;
		vd     new_v = next.second;
		double hi = new_x - x;

		if (hi <= 0.0) break;

		i++;
		x = new_x;
		v = new_v;

		dgv->Rows->Add(
			i.ToString(),
			x.ToString("F10"),
			v[0].ToString("F10"),
			v[1].ToString("F10"),
			hi.ToString("F10")
		);
		xs.push_back(x);
		us.push_back(v[0]);
		dus.push_back(v[1]);
	}

	// --- Отчёт ---
	String^ report;
	if (x >= b - EPS_b) {
		report = String::Format(
			"Достигнута правая граница b = {0:F10} на итерации {1}. Последний x = {2:F10}",
			b, i, x);
	}
	else {
		report = String::Format(
			"Достигнуто максимальное число итераций Nmax = {0}, "
			"правая граница b = {1:F10} не достигнута. Последний x = {2:F10}",
			Nmax, b, x);
	}

	report += String::Format(
		"\n\nn = {0},  b - xn = {1:F10}",
		i, (b - x)
	);

	tab3_richTextBox1->Clear();
	tab3_richTextBox1->AppendText(report);

	// --- Графики ---
	using namespace System::Windows::Forms::DataVisualization::Charting;

	// Chart1: u(x)
	chart1->Series->Clear();
	chart1->MouseWheel += gcnew MouseEventHandler(this, &Window::chart_MouseWheel);
	{
		auto area = chart1->ChartAreas[0];
		area->CursorX->LineColor = System::Drawing::Color::Transparent;
		area->CursorY->LineColor = System::Drawing::Color::Transparent;

		Series^ sLine = gcnew Series();
		sLine->Name = "v(x)";
		sLine->ChartType = SeriesChartType::Line;
		sLine->BorderWidth = 2;

		Series^ sPoints = gcnew Series();
		sPoints->Name = "Узлы";
		sPoints->ChartType = SeriesChartType::Point;
		sPoints->MarkerSize = 8;
		sPoints->MarkerStyle = MarkerStyle::Circle;

		chart1->Series->Add(sLine);
		chart1->Series->Add(sPoints);

		for (size_t j = 0; j < xs.size(); ++j) {
			sLine->Points->AddXY(xs[j], us[j]);
			sPoints->Points->AddXY(xs[j], us[j]);
		}
	}

	// Chart2: фазовый портрет v' vs v
	chart2->Series->Clear();
	chart2->MouseWheel += gcnew MouseEventHandler(this, &Window::chart_MouseWheel);
	{
		auto area = chart2->ChartAreas[0];
		area->CursorX->LineColor = System::Drawing::Color::Transparent;
		area->CursorY->LineColor = System::Drawing::Color::Transparent;

		Series^ s = gcnew Series();
		s->Name = "v' vs v";
		s->ChartType = SeriesChartType::Line;
		s->BorderWidth = 2;
		chart2->Series->Add(s);

		for (size_t j = 0; j < xs.size(); ++j)
			s->Points->AddXY(us[j], dus[j]);
	}
}

private: System::Void tab4_button1_Click(System::Object^ sender, System::EventArgs^ e) {

	TextBox^ tb_a = this->tab4_a;
	TextBox^ tb_b = this->tab4_b;
	TextBox^ tb_EPS_b = this->tab4_EPS_b;
	TextBox^ tb_h0 = this->tab4_h;
	TextBox^ tb_EPS = this->tab4_EPS;
	TextBox^ tb_u0 = this->tab4_u0;
	TextBox^ tb_du0 = this->tab4_u_0;
	TextBox^ tb_Nmax = this->tab4_Nmax;

	DataGridView^ dgv = this->tab4_dataGridView1;
	auto chart1 = this->tab4_chart1;
	auto chart2 = this->tab4_chart2;

	double a, b, EPS_b, h, EPS, u0, du0;
	int Nmax;

	// --- Парсинг ---
	if (!Double::TryParse(tb_a->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, a)) {
		MessageBox::Show("Некорректное значение a", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_b->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, b)) {
		MessageBox::Show("Некорректное значение b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_EPS_b->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, EPS_b)) {
		MessageBox::Show("Некорректное значение EPS_b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_h0->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, h)) {
		MessageBox::Show("Некорректное значение h0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_EPS->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, EPS)) {
		MessageBox::Show("Некорректное значение EPS", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Int32::TryParse(tb_Nmax->Text, System::Globalization::NumberStyles::Integer,
		System::Globalization::CultureInfo::InvariantCulture, Nmax)) {
		MessageBox::Show("Некорректное значение Nmax", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_u0->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, u0)) {
		MessageBox::Show("Некорректное значение u0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (!Double::TryParse(tb_du0->Text, System::Globalization::NumberStyles::Float,
		System::Globalization::CultureInfo::InvariantCulture, du0)) {
		MessageBox::Show("Некорректное значение u'0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}

	// --- Проверки ---
	if (a > b) {
		MessageBox::Show("a должно быть <= b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (EPS_b <= 0.0 || EPS_b >= b - a) {
		MessageBox::Show("Некорректное значение EPS_b", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (h <= 0.0) {
		MessageBox::Show("h0 должно быть > 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (EPS <= 0.0) {
		MessageBox::Show("EPS должно быть > 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}
	if (Nmax <= 0) {
		MessageBox::Show("Nmax должно быть > 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); return;
	}

	// --- Правая часть системы (те же f2, f3 что в tab3) ---
	vf F(2);
	F[0] = f2;
	F[1] = f3;

	// --- Настройка таблицы ---
	dgv->Rows->Clear();
	dgv->Columns->Clear();

	dgv->Columns->Add("i", "i");
	dgv->Columns->Add("xi", "xi");
	dgv->Columns->Add("vi0", "v(xi)");
	dgv->Columns->Add("v2i0", "v2(xi)");
	dgv->Columns->Add("diff0", "v-v2");
	dgv->Columns->Add("olp", "ОЛП");
	dgv->Columns->Add("hi", "hi");
	dgv->Columns->Add("C1", "C1");
	dgv->Columns->Add("C2", "C2");

	// --- Начальные условия ---
	double x = a;
	vd v = { u0, du0 };
	int i = 0;

	std::vector<double> xs, us, dus;

	dgv->Rows->Add(
		"0",
		x.ToString("F10"),
		v[0].ToString("F10"),
		v[1].ToString("F10"),
		"-", "-", "-", "0", "0"
	);
	xs.push_back(x);
	us.push_back(v[0]);
	dus.push_back(v[1]);

	int C1 = 0, C2 = 0, cnt_iter = 0;

	double max_olp = 0.0;
	double max_hi = h, min_hi = h;
	double max_hi_x = x, min_hi_x = x;
	int total_C1 = 0, total_C2 = 0;

	// --- Основной цикл ---
	while (x < b - EPS_b && i < Nmax) {

		C1 = 0;
		C2 = 0;

		vd v2;

		auto next = RK4(
			std::make_pair(x, v),
			F,
			h,
			b,
			EPS_b,
			EPS,
			C1,
			C2,
			cnt_iter,
			Nmax,
			v2
		);

		double new_x = next.first;
		vd     new_v = next.second;
		double hi = new_x - x;

		if (hi <= 0.0) break;

		i++;

		// ОЛП = max по компонентам |v - v2| / 15
		double diff0 = new_v[0] - v2[0];
		double diff1 = new_v[1] - v2[1];
		double olp = std::max(std::abs(diff0), std::abs(diff1)) / 15.0;

		x = new_x;
		v = new_v;

		if (olp > max_olp)        max_olp = olp;
		if (hi > max_hi) { max_hi = hi;  max_hi_x = x; }
		if (hi < min_hi) { min_hi = hi;  min_hi_x = x; }
		total_C1 += C1;
		total_C2 += C2;

		dgv->Rows->Add(
			i.ToString(),
			x.ToString("F10"),
			v[0].ToString("F10"),
			v2[0].ToString("F10"),
			diff0.ToString("F10"),
			olp.ToString("F10"),
			hi.ToString("F10"),
			C1.ToString(),
			C2.ToString()
		);

		xs.push_back(x);
		us.push_back(v[0]);
		dus.push_back(v[1]);
	}

	// --- Отчёт ---
	String^ report;
	if (x >= b - EPS_b) {
		report = String::Format(
			"Достигнута правая граница b = {0:F10} на шаге {1} с точностью до EPS_b",
			b, i);
	}
	else {
		report = String::Format(
			"Достигнут предел итераций Nmax = {0}, x = {1:F10}",
			Nmax, x);
	}

	report += String::Format(
		"\n\nn = {0},  b - xn = {1:F10}"
		"\nmax |ОЛП| = {2:F10}"
		"\nОбщее число делений шага  (C1) = {3}"
		"\nОбщее число удвоений шага (C2) = {4}"
		"\nmax hi = {5:F10} при x = {6:F10}"
		"\nmin hi = {7:F10} при x = {8:F10}",
		i, (b - x),
		max_olp,
		total_C1, total_C2,
		max_hi, max_hi_x,
		min_hi, min_hi_x
	);

	tab4_richTextBox1->Clear();
	tab4_richTextBox1->AppendText(report);

	// --- Графики ---
	using namespace System::Windows::Forms::DataVisualization::Charting;

	// Chart1: v(x) с узлами
	chart1->Series->Clear();
	chart1->MouseWheel += gcnew MouseEventHandler(this, &Window::chart_MouseWheel);
	{
		auto area = chart1->ChartAreas[0];
		area->CursorX->LineColor = System::Drawing::Color::Transparent;
		area->CursorY->LineColor = System::Drawing::Color::Transparent;

		Series^ sLine = gcnew Series();
		sLine->Name = "v(x)";
		sLine->ChartType = SeriesChartType::Line;
		sLine->BorderWidth = 2;

		Series^ sPoints = gcnew Series();
		sPoints->Name = "Узлы";
		sPoints->ChartType = SeriesChartType::Point;
		sPoints->MarkerSize = 8;
		sPoints->MarkerStyle = MarkerStyle::Circle;

		chart1->Series->Add(sLine);
		chart1->Series->Add(sPoints);

		for (size_t j = 0; j < xs.size(); ++j) {
			sLine->Points->AddXY(xs[j], us[j]);
			sPoints->Points->AddXY(xs[j], us[j]);
		}
	}

	// Chart2: фазовый портрет v' vs v
	chart2->Series->Clear();
	chart2->MouseWheel += gcnew MouseEventHandler(this, &Window::chart_MouseWheel);
	{
		auto area = chart2->ChartAreas[0];
		area->CursorX->LineColor = System::Drawing::Color::Transparent;
		area->CursorY->LineColor = System::Drawing::Color::Transparent;

		Series^ s = gcnew Series();
		s->Name = "v' vs v";
		s->ChartType = SeriesChartType::Line;
		s->BorderWidth = 2;
		chart2->Series->Add(s);

		for (size_t j = 0; j < xs.size(); ++j)
			s->Points->AddXY(us[j], dus[j]);
	}
}
};
}
