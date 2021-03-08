Wenn große Datenmengen in Funktionen bearbeitet werden, beeinflusst dies stark die Performance und den Speicherplatz.<br/>
Um dies zu umgehen, werden Zeiger bzw. Pointer eingesetzt.

Die Daten liegen in einem Speicher vor. Jeder Speicher hat eine spezifische Adresse.
Ein Zeiger "zeigt" nun auf diese Daten, indem ihm die Adresse des Speicherortes zugewiesen wird.
Wenn einer Funktion die Daten überliefert werden sollen, wird ihr nur der Zeiger mit der entsprechenden Adresse übergeben.
Die Daten werden damit nicht transportiert, stattdessen greift die Funktion über die Adresse auf die Daten zu.
Die Daten werden werden durch Variablen repräsentiert.
Ein Zeiger speichert nur die Adresse einer anderen Variablen und leitet somit die Anfrage auf einen Wert weiter.


**Beispiel:**
Im ersten Schritt wird eine Variable deklariert und initialisiert, in diesem Beispiel die Variable "zahl" vom Typ Integer und dem Wert 9.
Anschließend wird ein Zeiger mit dem Namen "zeiger" erstellt. Wichtig ist hierbei zu beachten,
dass der Pointer vom gleichen Datentyp ist, wie die Variable, auf die gezeigt werden soll.
Der Zeiger charakterisiert sich bei der Deklarierung durch das Asterisk-Zeichen mit dem der Variablenname beginnt.
Nach der Deklaration zeigt der Pointer noch auf keinen sinnvollen Wert.
Dem Pointer wird nun der Speicherort der Variable "zahl" zugewiesen. Wichtig ist hierbei das & vor dem Variablennamen.
Ausgegeben wird der Wert der Variable, in dem der Pointername beginnend mit dem Asterisk-Zeichen angegeben wird.


```C
int zahl = 9; // Deklariere und initialisiere Variable
int *zeiger; // Deklariere Pointer vom gleichen Datentyp
zeiger = &zahl; // Weise Pointer die Adresse der Variable zu 
printf("Zeiger-Wert: %d\n", *zeiger); // Greife auf Wert der Variable via Pointer
```


Quelle:

1. Fischer E.: Zeiger in C. C-HowTo (2008). Online: https://www.c-howto.de/tutorial/zeiger/, Zugriff: 28-02-2021.
