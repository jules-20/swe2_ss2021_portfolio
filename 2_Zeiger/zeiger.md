Zeiger werden bevorzugt verwendet, wenn etwa bei großen Datenmengen verwendet.
Wenn große Datenmengen in Funktionen bearbeitet werden, geht dies stark zu Lasten der Performance und des Speicherplatzes.
Deswegen werden Zeiger eingesetzt.

Die Daten liegen in einem Speicher vor. Jeder Speicher hat eine spezifische Adresse.
Ein Zeiger "zeigt" nun auf diese Daten, indem ihm die Adresse des Speicherortes zugewiesen wird.
Wenn einer Funktion die Daten überliefert werden sollen, wird ihr nur der Zeiger mit der entsprechenden Adresse übergeben.
Die Daten werden damit nicht transportiert, stattdessen greift die Funktion über die Adresse auf die Daten zu.
Die Daten werden werden durch Variablen repräsentiert.
Ein Zeiger speichert nur die Adresse einer anderen Variablen und leitet somit die Anfrage auf einen Wert weiter.


Beispiel:

Wir erstellen zuerst eine Variable und setzen sie auf einen Wert. Danach erstellen wir einen Zeiger, der auf die Variabel zeigen soll. Ein Zeiger sollte vom gleichen Datentyp sein, wie die Variable, auf die er zeigt. Einen Zeiger erstellen wir, indem wir bei der Deklaration den Namen mit einem Stern * beginnen. Danach existiert dieser Zeiger, allerdings zeigt er auf keinen sinnvollen Wert. Wir müssen ihn also noch auf die Adresse der Variablen setzen. Diese erhalten wir mit dem Kaufmanns-Und &.




int zahl = 7;
int *zeiger;
zeiger = &zahl;
printf("Zeiger-Wert: %d\n", *zeiger);
