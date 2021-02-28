
Zum Gruppieren von Variablen, die thematisch in einem Zusammenhang stehen, werden **Strukturen** bzw. structs verwendet.
Die Struktur wird mit dem Schlüsselwort struct eingeleitet.
Anschließend wird der Name der Struktur definiert, wie etwa in diesem Beispiel "student".
In dem Block { } werden nun alle Variablen zusammengefasst.
Um die Zusammengehörigkeit noch zu verdeutlichen, kann ein Prefix für alle Variablennamen verwendet.
Alle Variablen, welche den Studenten darstellen, beginnen beispielsweise mit "stud".

```C
struct student {
	char studName[50];
	char studFachbereich[100];
	short studMatrikelnummer;
	char studWohnort[50];
};
```

Um mit den Variablen in der Struktur arbeiten zu können, kann ein Objekt bzw. eine Variable der Struktur erzeugt werden. 
Dafür wird struct, der Name der Struktur und anschließend der Name der Variable angegeben. 
Der Zugriff auf die Elemente einer Struktur ist möglich über die Variable der Struktur, einem Punkt und anschließend der 
Variablen innerhalb der Struktur.

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


Quelle:

1. Fischer E.: Zeiger in C. C-HowTo (2008). Online: https://www.c-howto.de/tutorial/strukturierte-datentypen/strukturen/, Zugriff: 28-02-2021.
