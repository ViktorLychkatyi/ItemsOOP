#include <iostream>
using namespace std;

// Телефон
// класс
class Phone {
public:
	// публичные поля
	string brand;						// Бренд
	string model;						// Модель
	string memory_size;					// Память устройства
	string color;						// Цвет
	string operating_system;			// Операционная система
	string proccesor;					// Процессор

	// публичные классы
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
// класс
class Banknote {
public:
	// публичные поля
	string denomination;				// Номинация
	string currency;					// Валюта
	string serial_number;				// Серийный номер
	string country;						// Страна
	string state;						// Состояние

	// публичные классы
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
// класс
class ElectricKettle {
public:
	// публичные поля
	string сapacity;					// Объем
	string power;						// Мощность
	string body_material;				// Материал корпуса
	string color;						// Цвет
	string water_temperature;			// Текущая температура воды

	// публичные классы
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
// класс
class GelPen {
public:
	// публичные поля
	string ink_color;					// Цвет чернил
	string pen_thickness;				// Толщина стержня
	string pen_length;					// Длина стержня
	string body_material;				// Материал корпуса
	string ink_amount;					// Количество оставшихся чернил

	// публичные классы
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
// класс
class Book {
public:
	// публичные поля
	string title;						// Название
	string author;						// Автор
	int number_pages;					// Количество страниц
	string genre;						// Жанр
	int year_publication;				// Год издания

	// публичные классы
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
		cout << "Вы открываете следующую страницу";
	}

	void PrevPage() {					// Предыдущая страница книги
		cout << "Вы открываете предыдущую страницу";
	}
};

// вызовы
int main() {
	setlocale(0, "");

	// Телефон 
	Phone phone;
	phone.brand = "Samsung";
	phone.model = "Galaxy A55";
	phone.memory_size = "256 GB";
	phone.color = "Black";
	phone.operating_system = "Android";
	phone.proccesor = "Exynos 1480";

	phone.Call();
	phone.SendMessage();
	phone.TakePhoto();
	phone.TurnOn();
	phone.TurnOff();
	phone.Charge();
	cout << "\n";

	// Купюра
	Banknote banknote;
	banknote.denomination = "The United of States";
	banknote.currency = "100 USD";
	banknote.serial_number = "KB46279860IB2";
	banknote.country = "USA";
	banknote.state = "New";

	banknote.Exchange();
	banknote.State();
	banknote.CurrencyInfo();
	banknote.Buy();
	banknote.Touch();
	cout << "\n";

	// Электрочайник
	ElectricKettle electric_kettle;
	electric_kettle.сapacity = "1.7 литра";
	electric_kettle.power = "2000 Вт";
	electric_kettle.body_material = "Нержавеющая сталь";
	electric_kettle.color = "Черный";
	electric_kettle.water_temperature = "25°C";

	electric_kettle.TurnOn();
	electric_kettle.TurnOff();
	electric_kettle.ConnectCordKettle();
	electric_kettle.DisconnectCordKettle();
	electric_kettle.AutoOffKettle();
	cout << "\n";

	// Гелевая ручка
	GelPen gel_pen;
	gel_pen.ink_color = "Синий";
	gel_pen.pen_thickness = "0.5 мм";
	gel_pen.pen_length = "14 см";
	gel_pen.body_material = "Пластик";
	gel_pen.ink_amount = "50%";

	gel_pen.Write();
	gel_pen.ChangeAmpoule();
	gel_pen.CheckInklevel();
	gel_pen.CloseCap();
	gel_pen.OpenCap();
	cout << "\n";

	// Книга
	Book book;
	book.title = "1984";
	book.author = "Джордж Оруэлл";
	book.number_pages = 328;
	book.genre = "Антиутопия";
	book.year_publication = 1949;

	book.Open();
	book.Close();
	book.ReadPage();
	book.AddBookmark();
	book.BookInfo();
	book.NextPage();
	book.PrevPage();
	cout << "\n";
}