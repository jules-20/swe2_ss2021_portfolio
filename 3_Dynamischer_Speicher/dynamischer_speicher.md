Bei Variablendefinitionen ist die Speicherverwaltung verdeckt. Die Größe steht zur Compilezeit bereits fest.
Oftmals ist die wirkliche Größe erst später zur Laufzeit eines Programmes bekannt.
Immer den größtmöglichen Speicher zu reservieren, wie etwa bei Arrays, ist nicht sehr effizient. 
Spätestens, wenn Speicher für weitere Daten benötigt wird, musste der Code umgeschrieben werden.
Dieses Problem kann mit der dynamischen Speicherverwaltung umgangen werden [1].

Für dynamischen Speicherreservierung wird die Bibliothek stdlib.h benötigt. 
Zudem wird der Datentyp size_t verwendet. Dieser ist vom Typ long int und wird für die 
Angabe einer Datengröße in Byte verwendet. Die Funktion sizeof liefert bei Übergabe eines 
Datentyps dessen benötigte Speichergröße in Byte. Der Datentyp des Rückgabewertes ist size_t.

Mit **Memory Allocation**, kurz malloc, wird zur Laufzeit des Programms Speicherplatz reserviert. 
Mit dem Parameter size wird die Größe des Speicherbedarfs in Byte übergeben. 
Der Rückgabewert ist ein void-Zeiger auf den Anfang des Speicherbereichs oder ein NULL-Zeiger, 
wenn kein freier Speicher mehr zur Verfügung steht. 
Der void-Zeiger sagt aus, dass der Datentyp des belegten Speicherbereichs unbekannt ist [2].

```C
void *malloc(size_t size);
```

In diesem Beispielprogramm hat der Benutzer durch eine Tastatureingabe die Möglichkeit, die Array-Größe zu bestimmen. 
Mit sizeof(int) wird die benötigte Größe zur Speicherung eines Integer-Wertes erhalten. 
Die Gesamtgröße ist abhängig von der Anzahl der Elemente. Die Einzelgröße wird dabei mit der gewünschten Anzahl multipliziert. 
Da malloc einen void-Zeiger liefert, muss in diesem Fall die Rückgabe gecastet werden mit (int *), um einen einen int-Zeiger zu erhalten.
Das Casten ist nicht unbedingt notwendig, da der void-Zeiger automatisch in den richtigen Typ transformiert wird. 
Es ist jedoch sauberer und erleichtert die Arbeit für die spätere Verwendung des Codes [2].

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

Mit **Cleared Memory Allocation**, kurz calloc, wird ebenfalls Speicher reserviert, allerdings nicht nach Bytes, sondern nach Elementen. 
Der erste Parameter bestimmt die Anzahl der Elemente, der zweite die Größe eines Elementes. 
Grundsätzlich besteht kein großer Unterschied zu malloc, nur dass calloc alle Speicherstellen mit 0 initialisiert. 
malloc lässt den Speicherinhalt unverändert. Die Rückgabewerte sind identisch zu malloc [2].

```C
void *calloc(size_t n, size_t size);
```

Calloc, wenn es im obigen Beispiel verwendet wird:

```C
array = (int *) calloc(size, sizeof(int));
```

Wenn Speicher reserviert wurde, sollte er auch wieder **freigegeben** werden, sobald er nicht mehr benötigt wird, um die Kapazitäten nicht zu erschöpfen. 
Ist dadurch der Speicher komplett belegt, werden die Daten auf die Festplatte ausgelagert, was viel Zeit in Anspruch nimmt.
Mit free kann nur Speicher freigegeben werden, welcher mit calloc oder malloc reserviert wurde und welcher vorher noch nicht freigegeben wurde [2].

```C
#include<stdio.h>
#include<stdlib.h>

int main() {
	int size=50;
	int *array_test;
	
	// Speicher reservieren
	array_test = (int *) calloc(size, sizeof(int));

	// Speicher freigeben
	free(array_test);
	
	return 0;
}
```



Quellen:

1. Wolf J.: Dynamische Speicherverwaltung (2009). Online: http://openbook.rheinwerk-verlag.de/c_von_a_bis_z/014_c_dyn_speicherverwaltung_001.htm, Zugriff: 28-02-2021.

2. Fischer E.: Zeiger in C. C-HowTo (2008). Online: https://www.c-howto.de/tutorial/arrays-felder/speicherverwaltung/, Zugriff: 28-02-2021.
