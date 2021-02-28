Bei Variablendefinitionen ist die Speicherverwaltung versteckt. Die Größe steht zur Compilezeit bereits fest.
Oftmals ist die wirkliche Größe eines Feldes erst später zur Laufzeit eines Programmes bekannt.
Da es nicht sehr effizient ist, immer den größtmöglichen Speicher zu reservieren, wie etwa bei Arrays, 
gibt es die dynamische Speicherverwaltung.

Für dynamischen Speicherreservierung wird die Bibliothek stdlib.h benötigt. 
Zudem wird der Datentyp size_t verwendet. Dieser ist vom Typ long int und wird für die 
Angabe einer Datengröße in Byte verwendet. Die Funktion sizeof liefert bei Übergabe eines 
Datentyps dessen benötigte Speichergröße in Byte. Der Datentyp des Rückgabewertes ist size_t.

Mit Memory Allocation wird zur Laufzeit des Programms Speicherplatz reserviert. 
Mit dem Parameter size wird die Größe des Speicherbedarfs in Byte übergeben. 
Der Rückgabewert ist ein void-Zeiger auf den Anfang des Speicherbereichs oder ein NULL-Zeiger, 
wenn kein freier Speicher mehr zur Verfügung steht. 
Der void-Zeiger sagt aus, dass der Datentyp des belegten Speicherbereichs unbekannt ist.

```C
void *malloc(size_t size);
```

In diesem Beispielprogramm hat der Benutzer durch eine Tastatureingabe die Möglichkeit, die Array-Größe zu bestimmen. 
Mit sizeof(int) wird die benötigte Größe zur Speicherung eines Integer-Wertes erhalten. 
Die Gesamtgröße ist abhängig von der Anzahl der Elemente. Die Einzelgröße wird dabei noch mit der gewünschten Anzahl multipliziert. 
Da malloc einen void-Zeiger liefert, muss in diesem Fall die Rückgabe gecastet werden mit (int *****), um einen einen int-Zeiger zu erhalten.
Das Casten ist nicht unbedingt notwendig, da der void-Zeiger automatisch in den richtigen Typ transformiert wird. 
Es ist jedoch sauberer und erleichtert die Arbeit für die spätere Verwendung des Codes.

```C
#include<stdio.h>
#include<stdlib.h>

int main() {
	int size=0;
	int *array;
 
  // Benutzereingabe Array Groesse
	printf("Groesse eines Arrays eingeben: ");
	scanf("%d", &size);

	// Speicher reservieren
	array = (int *) malloc(size * sizeof(int));

	if(array != NULL) {
		printf("\nSpeicher ist nun reserviert\n");
	}else {
		printf("\nKein freier Speicher mehr vorhanden.\n");
	}

	return 0;
}

```
