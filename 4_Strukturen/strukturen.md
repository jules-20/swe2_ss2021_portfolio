
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
