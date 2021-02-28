
Zum Gruppieren von Variablen, die in einem thematisch in einem Zusammenhang stehen, werden **Strukturen** bzw. structs verwendet.
Die Struktur wird mit dem Schlüsselwort struct eingeleitet.
Anschließend wird der Name der Struktur definiert, wie etwa in diesem Beispiel "student".
In dem Block { } werden nun alle Variablen definiert.
Um dies noch besser zu verdeutlichen, ist es auch möglich, einen Prefix für alle Variablennamen zu verwenden.
Alle Variablen, welche den Studenten darstellen, beginnt beispielsweise mit "stud".

```C
struct student {
	char studName[50];
	char studFachbereich[100];
	short studMatrikelnummer;
	char studWohnort[50];
};
```

Um mit den Variablen in der Struktur arbeiten zu können, kannein Objekt bzw. eine Variable der Struktur erzeugt werden. 
Dafür wird wieder struct, danach der Name der Struktur und anschließend der Name der Variable angegeben. 
Der Zugriff auf die Elemente einer Struktur erfolgt über die Variable der Struktur, einem Punkt und anschließend der Variablen innerhalb der Struktur.

```C
// Variable der Struktur deklarieren
struct student studentTheo;

// Zugriff auf die Elemente
strcpy(studentTheo.studName, "Theo Huber");
strcpy(studentTheo.studFachbereich, "Mathematik");
studentTheo.studMatrikelnummer = 235879;
strcpy(studentTheo.studWohnort, "Buxtehude");

printf("Name: %s\n", studentTheo.studName);
```
