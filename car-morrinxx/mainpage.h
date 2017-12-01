/**
* @mainpage
* @section intro Einleitung
* Es soll abstrakter Datentyp Car implementiert werden, welcher einfache
* Grundkomponenten eines Autos realisiert.
*
* @section example Beispiel
* Die Codesequenz um ein Auto aus einem Autoabstellplatz zu bekommen und
* auf 100 km/h zu beschleunigen wäre folgendermaßen:

* @code
* Car c = get_char(JEEP);
* if (get_color(c) == BLACK) {
*   set_acceleration_rate(c, 3);
*   while (get_speed(c) < 100)
*     accelerate(c);
* } else {
*   printf("I only drive black cars!")
* }
* @endcode
*
* @section assignment Aufgabe
* -# Definieren Sie zwei enums <code>CarType</code> und <code>Color</code>.
* -# Machen Sie eine forward-Deklaration für den Car, damit die Prototypen
* im h-file vom Compiler akzeptiert werden.
* -# Erstellen Sie minimale Leerimplementierungen für alle erforderlichen Funktionen.
* Damit müsste das Gesamtprojekt bauen.
* -# Definieren Sie das struct aus der forward-Deklaration.
* -# Erstellen Sie lokale (nur im File car.cpp) Variablen für alle erforderlichen
* Autos.
* -# Erstellen Sie ein lokales Array <code>car_park</code> in welchem alle
* Autos abgespeichert werden können.
* -# Implementieren Sie die Funktion substr(), sodass alle Unit Tests erfolgreich
* durchlaufen.
* -# Erzeugen Sie ein File namens <code>car_race.cpp</code> mit einer <code>main()</code>
* Funktion, und adaptieren Sie das <code>makefile</code> so, dass es durch den
* Aufruf von <code>make</code> gebaut wird (POS_PRPR_13).
* -# Schreiben Sie ein Programm, dass alle Autos, welche in <code>car.cpp</code>
* definiert sind, um die Wette fahren lässt.
*   -# Ausbaustufe 1: Holen Sie sich alle Autos aus <code>car.cpp</code> und geben
* Sie diese untereinander im Terminal aus. Symbolisieren Sie die Autos durch
* deren Anfangsbuchstaben und eine laufende Nummer.
*   -# Ausbaustufe 2: Lassen Sie die Autos nun "fahren", indem Sie in jeder Runde
* die Beschleunigung zufällig für jedes Auto setzen und aufgrund der daraus
* resultierenden Geschwindigkeit das Auto entsprechend nach rechts setzen. Das
* Rennen soll abgebrochen werden, sobald ein Auto das Ziel (den rechten
* Bildschirmrand) erreicht hat.
*/
