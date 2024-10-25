#include <iostream>
using namespace std;

// Телефон
class Phone {
private:
	string brand;						// Бренд
	string model;						// Модель
	string memory_size;					// Память устройства
	string color;						// Цвет
	string operating_system;			// Операционная система
	string proccesor;					// Процессор

public:
	void SetBrand(string b) {
		brand = b;
	}

	string GetBrand(string b) {
		return brand;
	}

	void SetModel(string m) {
		model = m;
	}

	string GetModel(string m) {
		return m;
	}

	void SetMemorySize(string s) {
		memory_size = s;
	}

	string GetMemorySize(string s) {
		return memory_size;
	}

	void SetColor(string c) {
		color = c;
	}

	string GetColor(string c) {
		return color;
	}

	void SetOperatingSystem(string o) {
		operating_system = o;
	}

	string GetOperatingSystem(string o) {
		return operating_system;
	}

	void SetProcessor(string p) {
		proccesor = p;
	}

	string GetProcessor(string p) {
		return proccesor;
	}

	void PrintPhone() {
		cout << brand << "\n";
		cout << model << "\n";
		cout << memory_size << "\n";
		cout << color << "\n";
		cout << operating_system << "\n";
		cout << proccesor << "\n";
		cout << "\n";
	}

	void Call() {						// Звонить
		cout << "Звоним в телефон...\n";
	}

	void SendMessage() {				// Отправляем сообщение
		cout << "Отправляем сообщение...\n";
	}

	void TakePhoto() {					// Делаем фотографию
		cout << "Делаем фотографию...\n";
	}

	void TurnOn() {						// Включаем телефон
		cout << "Включили телефон\n";
	}

	void TurnOff() {					// Выключаем телефон
		cout << "Выключили телефон\n";
	}

	void Charge() {						// Заряжаем телефон
		cout << "Подключили зарядку к телефону\n";
	}
};

// Купюра
class Banknote {
private:
	string denomination;				// Номинация
	string currency;					// Валюта
	string serial_number;				// Серийный номер
	string country;						// Страна
	string state;						// Состояние

public:
	void SetDenomination(string d) {
		denomination = d;
	}

	string GetDenomination(string b) {
		return denomination;
	}

	void SetCurrency(string c) {
		currency = c;
	}

	string GetCurrency(string c) {
		return c;
	}

	void SetSerialNumber(string s) {
		serial_number = s;
	}

	string GetSerialNumber(string s) {
		return serial_number;
	}

	void SetCountry(string c) {
		country = c;
	}

	string GetCountry(string c) {
		return country;
	}

	void SetState(string s) {
		state = s;
	}

	string GetState(string s) {
		return state;
	}

	void PrintBanknote() {
		cout << denomination << "\n";
		cout << currency << "\n";
		cout << serial_number << "\n";
		cout << country << "\n";
		cout << state << "\n";
		cout << "\n";
	}

	void Exchange() {					// Обменять
		cout << "Вы обменяли доллар на евро\n";
	}

	void State() {						// Состояние
		cout << "Ваша купюра выглядит новым\n";
	}

	void CurrencyInfo() {				// Инфо о валюте
		cout << "Номинация: The United of States\n";
		cout << "Валюта: 100 USD\n";
		cout << "Серийный номер: KB46279860IB2\n";
		cout << "Страна: USA\n";
		cout << "Состояние: New\n";
	}

	void Buy() {						// Купить
		cout << "Вы покупаете товар за 100 USD\n";
	}

	void Touch() {						// Потрогать
		cout << "Протерев купюру пальцами, услышали мягкий шелест, как шуршание осенних листьев.\n";
	}
};

// Электрочайник
class ElectricKettle {
private:
	string сapacity;					// Объем
	string power;						// Мощность
	string body_material;				// Материал корпуса
	string color;						// Цвет
	string water_temperature;			// Текущая температура воды

public:
	void SetCapacity(string c) {
		сapacity = c;
	}

	string GetCapacity(string c) {
		return сapacity;
	}

	void SetPower(string p) {
		power = p;
	}

	string GetPower(string p) {
		return power;
	}

	void SetBodyMaterial(string m) {
		body_material = m;
	}

	string GetBodyMaterial(string m) {
		return body_material;
	}

	void SetColor(string c) {
		color = c;
	}

	string GetColor(string c) {
		return color;
	}

	void SetWaterTemperature(string t) {
		water_temperature = t;
	}

	string GetWaterTemperature(string t) {
		return water_temperature;
	}

	void PrintElectricKettle() {
		cout << сapacity << "\n";
		cout << power << "\n";
		cout << body_material << "\n";
		cout << color << "\n";
		cout << water_temperature << "\n";
		cout << "\n";
	}

	void TurnOn() {						// Включить чайник
		cout << "Включаем чайник\n";
		cout << "На дисплее загорается свет, и через мгновение слышен шипящий звук, когда вода начинает нагреваться.\n";
	}

	void TurnOff() {					// Выключить чайник
		cout << "Выключаем чайник\n";
		cout << "И слышим, как он начинает остывать, издавая лёгкий треск, а пар медленно поднимается вверх.\n";
	}

	void ConnectCordKettle() {			// Налить воду
		cout << "Подключаем шнур к чайнику\n";
	}

	void DisconnectCordKettle() {		// Довести до кипения
		cout << "Отсоединяем шнур от чайника\n";
	}

	void AutoOffKettle() {				// Проверить уровень воды
		cout << "Автоматическое выключение чайника после закипания воды.\n";
	}
};

// Гелевая ручка
class GelPen {
private:
	string ink_color;					// Цвет чернил
	string pen_thickness;				// Толщина стержня
	string pen_length;					// Длина стержня
	string body_material;				// Материал корпуса
	string ink_amount;					// Количество оставшихся чернил

public:
	void SetInkColor(string i) {
		ink_color = i;
	}

	string GetInkColor(string i) {
		return ink_color;
	}

	void SetPenThickness(string t) {
		pen_thickness = t;
	}

	string GetPenThickness(string t) {
		return pen_thickness;
	}

	void SetPenLength(string l) {
		pen_length = l;
	}

	string GetPenLength(string l) {
		return pen_length;
	}

	void SetBodyMaterial(string m) {
		body_material = m;
	}

	string GetBodyMaterial(string m) {
		return body_material;
	}

	void SetInkAmount(string a) {
		ink_amount = a;
	}

	string GetInkAmount(string a) {
		return ink_amount;
	}

	void PrintGelPen() {
		cout << ink_color << "\n";
		cout << pen_thickness << "\n";
		cout << pen_length << "\n";
		cout << body_material << "\n";
		cout << ink_amount << "\n";
		cout << "\n";
	}

	void Write() {						// Написать
		cout << "Пишем в тетрадь\n";
	}

	void ChangeAmpoule() {				// Сменить ампулку/стержень
		cout << "Поменяли старую ампулку на новую\n";
	}

	void CheckInklevel() {				// Проверить количество чернил
		cout << "У вас осталось чернил 5\n";
	}

	void CloseCap() {					// Закрыть колпачок
		cout << "Вы закрыли ручку с помощью колпачка\n";
	}

	void OpenCap() {					// Открыть колпачок
		cout << "Вы открыли ручку, сняв колпачок\n";
	}
};

// Книга
class Book {
private:
	string title;						// Название
	string author;						// Автор
	int number_pages;					// Количество страниц
	string genre;						// Жанр
	int year_publication;				// Год издания

public:
	void SetTitle(string t) {
		title = t;
	}

	string GetTitle(string t) {
		return title;
	}

	void SetAuthor(string a) {
		author = a;
	}

	string GetAuthor(string a) {
		return author;
	}

	void SetNumberPages(int n) {
		number_pages = n;
	}

	int GetNumberPages(int n) {
		return number_pages;
	}

	void SetGenre(string g) {
		genre = g;
	}

	string GetGenre(string g) {
		return genre;
	}

	void SetYearPublication(int y) {
		year_publication = y;
	}

	int GetYearPublication(int y) {
		return year_publication;
	}

	void PrintBook() {
		cout << title << "\n";
		cout << author << "\n";
		cout << number_pages << "\n";
		cout << genre << "\n";
		cout << year_publication << "\n";
		cout << "\n";
	}

	void Open() {						// Открыть книгу
		cout << "Вы открыли книгу\n";
	}

	void Close() {						// Закрыть книгу
		cout << "Вы закрыли книгу\n";
	}

	void ReadPage() {					// Прочитать страницу
		cout << "Читаем страницу...\n";
	}

	void AddBookmark() {				// Добавить закладку
		cout << "Добавляем в закладку.\n";
	}

	void BookInfo() {					// Получить информацию о книге
		cout << "Название: 1984\n";
		cout << "Автор: Джордж Оруэлл\n";
		cout << "Количество страниц: 328\n";
		cout << "Жанр: Антиутопия\n";
		cout << "Год публикации: 1949\n";
	}

	void NextPage() {					// Следующая страница книги
		cout << "Вы открываете следующую страницу\n";
	}

	void PrevPage() {					// Предыдущая страница книги
		cout << "Вы открываете предыдущую страницу";
	}
};

// вызовы
int main() {
	setlocale(0, "");

	Phone phone;
	phone.SetBrand("Samsung");
	phone.SetModel("Galaxy A55");
	phone.SetMemorySize("256 GB");
	phone.SetColor("Black");
	phone.SetOperatingSystem("Android");
	phone.SetProcessor("Exynos 1480");
	phone.PrintPhone();

	phone.Call();
	phone.SendMessage();
	phone.TakePhoto();
	phone.TurnOn();
	phone.TurnOff();
	phone.Charge();
	cout << "\n";

	Banknote banknote;
	banknote.SetDenomination("The United of States");
	banknote.SetCurrency("100 USD");
	banknote.SetSerialNumber("KB46279860IB2");
	banknote.SetCountry("USA");
	banknote.SetState("New");
	banknote.PrintBanknote();

	banknote.Exchange();
	banknote.State();
	banknote.CurrencyInfo();
	banknote.Buy();
	banknote.Touch();
	cout << "\n";

	ElectricKettle electric_kettle;
	electric_kettle.SetCapacity("1.7 литра");
	electric_kettle.SetPower("2000 Вт");
	electric_kettle.SetBodyMaterial("Нержавеющая сталь");
	electric_kettle.SetColor("Черный");
	electric_kettle.SetWaterTemperature("25°C");
	electric_kettle.PrintElectricKettle();

	electric_kettle.TurnOn();
	electric_kettle.TurnOff();
	electric_kettle.ConnectCordKettle();
	electric_kettle.DisconnectCordKettle();
	electric_kettle.AutoOffKettle();
	cout << "\n";

	GelPen gel_pen;
	gel_pen.SetInkColor("Синий");
	gel_pen.SetPenThickness("0.5 мм");
	gel_pen.SetPenLength("14 см");
	gel_pen.SetBodyMaterial("Пластик");
	gel_pen.SetInkAmount("50%");
	gel_pen.PrintGelPen();

	gel_pen.Write();
	gel_pen.ChangeAmpoule();
	gel_pen.CheckInklevel();
	gel_pen.CloseCap();
	gel_pen.OpenCap();
	cout << "\n";

	Book book;
	book.SetTitle("1984");
	book.SetAuthor("Джордж Оруэлл");
	book.SetNumberPages(328);
	book.SetGenre("Антиутопия");
	book.SetYearPublication(1949);
	book.PrintBook();

	book.Open();
	book.Close();
	book.ReadPage();
	book.AddBookmark();
	book.BookInfo();
	book.NextPage();
	book.PrevPage();
	cout << "\n";
}