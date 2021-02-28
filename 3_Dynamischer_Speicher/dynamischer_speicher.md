Bei Variablendefinitionen ist die Speicherverwaltung versteckt. Die Größe steht zur Compilezeit bereits fest.
Oftmals ist die wirkliche Größe eines Feldes erst später zur Laufzeit eines Programmes bekannt.
Da es nicht sehr effizient ist, immer den größtmöglichen Speicher zu reservieren, wie etwa bei Arrays, 
gibt es die dynamische Speicherverwaltung.

Für dynamischen Speicherreservierung wird die Bibliothek stdlib.h benötigt. 
Zudem wird der Datentyp size_t verwendet. Dieser ist vom Typ long int und wird für die 
Angabe einer Datengröße in Byte verwendet. Die Funktion sizeof liefert bei Übergabe eines 
Datentyps dessen benötigte Speichergröße in Byte. Der Datentyp des Rückgabewertes ist size_t.

Mit Memory Allocation wird zur Laufzeit des Programms auf sichere Art Speicherplatz reserviert. 
Mit dem Parameter size wird die Größe des Speicherbedarfs in Byte übergeben. 
Der Rückgabewert ist ein void-Zeiger auf den Anfang des Speicherbereichs oder ein NULL-Zeiger, 
wenn kein freier Speicher mehr zur Verfügung steht. 
Der void-Zeiger soll aussagen, dass der Datentyp des belegten Speicherbereichs unbekannt ist.

```C
void *malloc(size_t size);
```
