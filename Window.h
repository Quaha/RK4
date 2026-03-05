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
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab1_dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab1_chart1))->BeginInit();
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
			this->tab1_a->Location = System::Drawing::Point(876, 430);
			this->tab1_a->Name = L"tab1_a";
			this->tab1_a->Size = System::Drawing::Size(110, 20);
			this->tab1_a->TabIndex = 10;
			this->tab1_a->Text = L"0.0";
			// 
			// tab1_richTextBox1
			// 
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
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1256, 648);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Тестовая задача (адаптивный шаг)";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1256, 648);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Основная задача (постоянный шаг)";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1256, 648);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Основная задача (адаптивный шаг)";
			this->tabPage4->UseVisualStyleBackColor = true;
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
	dgv->Rows->Add(i.ToString(), x.ToString("F6"), v[0].ToString("F6"), "-",
		ui.ToString("F6"), abs_err.ToString("F6"));

	xs.push_back(x);
	vs.push_back(v[0]);
	us.push_back(ui);

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
		dgv->Rows->Add(i.ToString(), x.ToString("F6"), v[0].ToString("F6"),
			hi.ToString("F6"), ui.ToString("F6"), abs_err.ToString("F6"));

		xs.push_back(x);
		vs.push_back(v[0]);
		us.push_back(ui);
	}

	// Формирование отчёта о завершении
	String^ report;
	if (x >= b - EPS_b) {
		report = String::Format(
			"Интегрирование завершено: достигнута правая граница b = {0:F6} на итерации {1}. Последний x = {2:F6}",
			b, i, x);
	}
	else {
		report = String::Format(
			"Внимание: достигнуто максимальное число итераций Nmax = {0} на итерации {1}, "
			"но правая граница b = {2:F6} не достигнута. Последний x = {3:F6}",
			Nmax, i, b, x);
	}

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
	auto area = tab1_chart1->ChartAreas[0];

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

};
}
