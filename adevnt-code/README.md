# Advent of Code
 * Plik day1.c po uruchumieniu, program program pobiera dane z pliku day1-1.txt.
 * Plik day2.c po uruchumieniu, program program pobiera dane z pliku day2-1.txt.
 * Plik day3.c po uruchumieniu, program program pobiera dane z pliku day3-1.txt.
 * Plik day19.c jest stworzony tylko po dane z pliku day19.txt. Nie pobiera danych! 

## DAY1
1) Funkcja: frequency -> Znaleść sumować liczby w podanym pliku;
2) Funkcja: Twice -> Znaleść pierwszą sumą, która się powtórzyła;

## DAY2
1) Fuknkcja: sprawdzanie -> Wczytanie danych z plików i zliczyć te litery, które są podwójne i potrójne. 
Jeśle w jednym wieszy jest powtarza się podwójna lub potrójna to liczy jako 1 raz występowania, a nie 2razy;

## DAY3
The Elves managed to locate the chimney-squeeze prototype fabric for Santa's suit (thanks to someone who helpfully wrote its box IDs on the wall of the warehouse in the middle of the night). Unfortunately, anomalies are still affecting them - nobody can even agree on how to cut the fabric.

The whole piece of fabric they're working on is a very large square - at least 1000 inches on each side.

Each Elf has made a claim about which area of fabric would be ideal for Santa's suit. All claims have an ID and consist of a single rectangle with edges parallel to the edges of the fabric. Each claim's rectangle is defined as follows:

    The number of inches between the left edge of the fabric and the left edge of the rectangle.
    The number of inches between the top edge of the fabric and the top edge of the rectangle.
    The width of the rectangle in inches.
    The height of the rectangle in inches.

A claim like #123 @ 3,2: 5x4 means that claim ID 123 specifies a rectangle 3 inches from the left edge, 2 inches from the top edge, 5 inches wide, and 4 inches tall. Visually, it claims the square inches of fabric represented by # (and ignores the square inches of fabric represented by .) in the diagram below:

...........
...........
...#####...
...#####...
...#####...
...#####...
...........
...........
...........

The problem is that many of the claims overlap, causing two or more claims to cover part of the same areas. For example, consider the following claims:

#1 @ 1,3: 4x4
#2 @ 3,1: 4x4
#3 @ 5,5: 2x2

Visually, these claim the following areas:

........
...2222.
...2222.
.11XX22.
.11XX22.
.111133.
.111133.
........

The four square inches marked with X are claimed by both 1 and 2. (Claim 3, while adjacent to the others, does not overlap either of them.)

If the Elves all proceed with their own plans, none of them will have enough fabric. How many square inches of fabric are within two or more claims?

--- Part Two ---

Amidst the chaos, you notice that exactly one claim doesn't overlap by even a single square inch of fabric with any other claim. If you can somehow draw attention to it, maybe the Elves will be able to make Santa's suit after all!

For example, in the claims above, only claim 3 is intact after all claims are made.

What is the ID of the only claim that doesn't overlap?


## DAY19

In programs where flow control is required, the instruction pointer can be bound to a register so that it can be manipulated directly. This way, setr/seti can function as absolute jumps, addr/addi can function as relative jumps, and other opcodes can cause truly fascinating effects."

This mechanism is achieved through a declaration like #ip 1, which would modify register 1 so that accesses to it let the program indirectly access the instruction pointer itself. To compensate for this kind of binding, there are now six registers (numbered 0 through 5); the five not bound to the instruction pointer behave as normal. Otherwise, the same rules apply as the last time you worked with this device.

When the instruction pointer is bound to a register, its value is written to that register just before each instruction is executed, and the value of that register is written back to the instruction pointer immediately after each instruction finishes execution. Afterward, move to the next instruction by adding one to the instruction pointer, even if the value in the instruction pointer was just updated by an instruction. (Because of this, instructions must effectively set the instruction pointer to the instruction before the one they want executed next.)

The instruction pointer is 0 during the first instruction, 1 during the second, and so on. If the instruction pointer ever causes the device to attempt to load an instruction outside the instructions defined in the program, the program instead immediately halts. The instruction pointer starts at 0.

It turns out that this new information is already proving useful: the CPU in the device is not very powerful, and a background process is occupying most of its time. You dump the background process' declarations and instructions to a file (your puzzle input), making sure to use the names of the opcodes rather than the numbers.

For example, suppose you have the following program:

#ip 0
seti 5 0 1
seti 6 0 2
addi 0 1 0
addr 1 2 3
setr 1 0 0
seti 8 0 4
seti 9 0 5

When executed, the following instructions are executed. Each line contains the value of the instruction pointer at the time the instruction started, the values of the six registers before executing the instructions (in square brackets), the instruction itself, and the values of the six registers after executing the instruction (also in square brackets).

ip=0 [0, 0, 0, 0, 0, 0] seti 5 0 1 [0, 5, 0, 0, 0, 0]
ip=1 [1, 5, 0, 0, 0, 0] seti 6 0 2 [1, 5, 6, 0, 0, 0]
ip=2 [2, 5, 6, 0, 0, 0] addi 0 1 0 [3, 5, 6, 0, 0, 0]
ip=4 [4, 5, 6, 0, 0, 0] setr 1 0 0 [5, 5, 6, 0, 0, 0]
ip=6 [6, 5, 6, 0, 0, 0] seti 9 0 5 [6, 5, 6, 0, 0, 9]

In detail, when running this program, the following events occur:

    The first line (#ip 0) indicates that the instruction pointer should be bound to register 0 in this program. This is not an instruction, and so the value of the instruction pointer does not change during the processing of this line.
    The instruction pointer contains 0, and so the first instruction is executed (seti 5 0 1). It updates register 0 to the current instruction pointer value (0), sets register 1 to 5, sets the instruction pointer to the value of register 0 (which has no effect, as the instruction did not modify register 0), and then adds one to the instruction pointer.
    The instruction pointer contains 1, and so the second instruction, seti 6 0 2, is executed. This is very similar to the instruction before it: 6 is stored in register 2, and the instruction pointer is left with the value 2.
    The instruction pointer is 2, which points at the instruction addi 0 1 0. This is like a relative jump: the value of the instruction pointer, 2, is loaded into register 0. Then, addi finds the result of adding the value in register 0 and the value 1, storing the result, 3, back in register 0. Register 0 is then copied back to the instruction pointer, which will cause it to end up 1 larger than it would have otherwise and skip the next instruction (addr 1 2 3) entirely. Finally, 1 is added to the instruction pointer.
    The instruction pointer is 4, so the instruction setr 1 0 0 is run. This is like an absolute jump: it copies the value contained in register 1, 5, into register 0, which causes it to end up in the instruction pointer. The instruction pointer is then incremented, leaving it at 6.
    The instruction pointer is 6, so the instruction seti 9 0 5 stores 9 into register 5. The instruction pointer is incremented, causing it to point outside the program, and so the program ends.



1) Załóżmy na przykład, że masz następujący program:

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

2) Nowy proces w tle natychmiast zamienia się w jego miejsce. 
Wygląda to identycznie, ale po bliższej inspekcji zauważysz, że tym razem rejestr 0 zaczynał się od wartości 1.

Jaka wartość pozostaje w rejestrze 0 Jaka wartość pozostaje w rejestrze 0, gdy ten nowy proces działa w tle?
