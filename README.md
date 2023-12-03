# Foglio di Calcolo 
Il programma è stato realizzato usando per l'interfaccia grafica Qt5 per C++
## TableController
Viene creato un foglio di calcolo usando QTableWidget, poi vengono assegnati gli elementi al suo interno tramite la classe di supporto **TableController** che si occupa
della crezione e dell'aggiornamento dei QTableWidgetItem. Al suo interno viene creata una map di *float* che contiene i dati in arrivo dalla **QWidgetTable**.
## TableMath
Questa classe invece compie i calcoli matematici sulle map, infatti le sue funzione prendono in input una map e restituiscono un float.
## TestMath
Per il testing delle funzioni matematiche ho usato QTest, la libreria di testing dell'interfaccia grafica. In ogni test ho creato un oggetto **TableMath** fantoccio insieme
alla una map, necessaria per svolgere le funzioni di Media, Somma ecc. In ogni test viene controllato che il valore di ritorno delle funzioni sia corretto usando QCOMPARE.
