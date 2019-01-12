# Advent of Code
Plik day1.c po uruchumieniu, program program pobiera dane z pliku day1-1.txt.
Plik day2.c po uruchumieniu, program program pobiera dane z pliku day2-1.txt.
Plik day19.c jest stworzony tylko po dane z pliku day19.txt. Nie pobiera danych! 

## DAY1
1) Funkcja: frequency -> Znaleść sumować liczby w podanym pliku;
2) Funkcja: Twice -> Znaleść pierwszą sumą, która się powtórzyła;

## DAY2
1) Fuknkcja: sprawdzanie -> Wczytanie danych z plików i zliczyć te litery, które są podwójne i potrójne. 
Jeśle w jednym wieszy jest powtarza się podwójna lub potrójna to liczy jako 1 raz występowania, a nie 2razy;

## DAY19

Załóżmy na przykład, że masz następujący program:

ip 0
seti 5 0 1
seti 6 0 2
addi 0 1 0
addr 1 2 3
setr 1 0 0
seti 8 0 4
seti 9 0 5

Po uruchomieniu wykonywane są następujące instrukcje. Każda linia zawiera wartość wskaźnika instrukcji w chwili rozpoczęcia instrukcji, wartości sześciu rejestrów przed wykonaniem instrukcji (w nawiasach kwadratowych), samą instrukcję i wartości sześciu rejestrów po wykonaniu instrukcji (również w nawiasy kwadratowe).

Szczegółowo, podczas uruchamiania tego programu występują następujące zdarzenia:

Pierwsza linia (#ip 0) wskazuje, że wskaźnik instrukcji powinien być powiązany z rejestracją 0 w tym programie. 
Nie jest to instrukcja, więc wartość wskaźnika instrukcji nie zmienia się podczas przetwarzania tej linii.

Wskaźnik instrukcji zawiera 0, dlatego wykonywana jest pierwsza instrukcja (seti 5 0 1). 
Aktualizuje rejestr 0 do bieżącej wartości wskaźnika instrukcji (0), ustawia rejestr 1 na 5, 
ustawia wskaźnik instrukcji na wartość rejestru 0 (co nie ma skutku, ponieważ instrukcja nie modyfikowała rejestru 0), 
a następnie dodaje jeden do wskaźnika instrukcji.

Wskaźnik instrukcji zawiera 1, więc wykonywana jest druga instrukcja, seti 6 0 2. 
Jest to bardzo podobne do instrukcji przed nim: 6 jest przechowywane w rejestrze 2, a wskaźnik instrukcji pozostaje z wartością 2.

Wskaźnik instrukcji wynosi 2, co wskazuje na instrukcję addi 0 1 0. J
est to podobne do skoku względnego: wartość wskaźnika instrukcji 2 jest ładowana do rejestru 0. 
Następnie addi znajduje wynik dodania wartości do rejestru 0 i wartość 1, przechowująca wynik, 3, z powrotem w rejestrze 0. 
Register 0 jest następnie kopiowany z powrotem do wskaźnika instrukcji, co spowoduje, że skończy 1 większy niż powinien i pominąć następną instrukcję (addr 1 2 3) całkowicie. 
Na końcu 1 jest dodawany do wskaźnika instrukcji.

Wskaźnik instrukcji wynosi 4, więc uruchamiana jest instrukcja setr 1 0 0.
Jest to jak skok bezwzględny: kopiuje wartość zawartą w rejestrze 1, 5, do rejestru 0, co powoduje, że kończy się w wskaźniku instrukcji.
Wskaźnik instrukcji jest następnie inkrementowany, pozostawiając go na poziomie 6.
Wskaźnik instrukcji wynosi 6, więc instrukcja seti 9 0 5 przechowuje 9 w rejestrze 5. 
Wskaźnik instrukcji jest inkrementowany, co powoduje, że wskazuje on program, a więc program się kończy.

Jaka wartość pozostaje w rejestrze 0, gdy proces w tle zatrzymuje się?

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Nowy proces w tle natychmiast zamienia się w jego miejsce. Wygląda to identycznie, ale po bliższej inspekcji zauważysz, że tym razem rejestr 0 zaczynał się od wartości 1.

Jaka wartość pozostaje w rejestrze 0 Jaka wartość pozostaje w rejestrze 0, gdy ten nowy proces działa w tle?
