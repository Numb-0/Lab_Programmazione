# Foglio di Calcolo 
Il programma è stato realizzato usando per l'interfaccia grafica Qt5 per C++.\
## TableMath
Viene creato un foglio di calcolo usando QTableWidget, poi vengono assegnati gli elementi al suo interno tramite la classe di supporto **TableMath** che si occupa
della crezione e dell'aggiornamento dei QTableWidgetItem. Oltre a queste funzioni sulla tabella svolge anche operazioni matematiche necessarie all'assegnazione dei corretti valori
di Somma, Min, Max, Media. Per svolgere al meglio i conti ho usato una std::map per immagazzinare i valori dei QTableWidgetItem, che erano QString, sotto forma di float con Key
uguale al numero di riga dell'elemento. In questo modo è stato possibile associare la rimozione di un elemento dalla QTableWidget alla rimozione di un elemento dalla std::map. 
## CountObserver
Per ultima cosa ho creato un Observer con l'obbiettivo di monitorare dei valori dell'oggetto **Window**, in questo caso degli attributi (int Counter) aggiunti appositamente per dimostrare il
funzionamento dell'Observer. **Window** svolge la funzione di Subject e noi dobbiamo "comunicare" a **TableMath** il valore aggiornato usando CountObserver. Per fare questo
CountObserver alla creazione prende in Input la tabella su cui dovrà aggiornare gli attributi e **Window** si iscrive al CountObserver per lanciare *notify()*.
## TestMath
Per il testing delle funzioni matematiche ho usato QTest, la libreria di testing dell'interfaccia grafica. In ogni test ho creato un oggetto **TableMath** fantoccio insieme
alla sua std::map, necessaria per svolgere le funzioni di Media, Somma ecc. In ogni test viene controllato che il valore di ritorno delle funzioni sia corretto usando QCOMPARE.
